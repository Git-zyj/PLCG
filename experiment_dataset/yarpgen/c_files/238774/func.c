/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238774
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_0])) + (73))) - (26))))) ^ (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0]))))));
        var_13 = ((min((((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned short) (unsigned char)16))))), (arr_1 [(_Bool)1] [i_0]))) >> (((((/* implicit */int) arr_2 [i_0])) + (70))));
        var_14 |= ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [(unsigned short)17]) : (((/* implicit */int) arr_2 [9]))))) : (17388723140773481814ULL))), (min((4ULL), (((/* implicit */unsigned long long int) (+(arr_0 [i_0]))))))));
    }
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8400))) == (18446744073709551611ULL))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) var_5)) ? (26ULL) : (((/* implicit */unsigned long long int) var_11))))))));
    var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)79), ((unsigned char)85)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) | (3530398784U)))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) max((1017555479), (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) (unsigned short)24576)) % (((/* implicit */int) var_0))))))));
    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8523)) || (((/* implicit */_Bool) var_0))))), (var_3)));
}
