/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44379
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */unsigned short) ((long long int) max((((((/* implicit */_Bool) (signed char)108)) ? (var_15) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_17))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 += ((/* implicit */unsigned long long int) ((unsigned char) (~(max((var_4), (arr_1 [i_0] [i_0]))))));
        var_20 = ((/* implicit */unsigned long long int) (~(((unsigned int) ((822633415) == (((/* implicit */int) (signed char)-11)))))));
    }
    for (long long int i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        var_21 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) ((_Bool) arr_4 [i_1]))))));
        arr_5 [i_1] = ((/* implicit */_Bool) ((unsigned short) ((long long int) arr_0 [i_1 + 2])));
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 18; i_2 += 3) 
    {
        var_22 = ((/* implicit */int) var_15);
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((-987634852786594950LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_17))))) ? (1693205770709829783ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29944)))));
    }
    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
}
