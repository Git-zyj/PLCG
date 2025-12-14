/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20700
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_7)))) && (((/* implicit */_Bool) arr_2 [i_0]))))) / (var_8)));
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((((/* implicit */int) var_5)) & (214224831))), (214224839)))) | (var_11)));
        var_13 = ((/* implicit */unsigned short) var_4);
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((var_4) & (var_4)))))) : (7818692373786991008ULL)));
    }
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        arr_8 [i_1] [9ULL] = ((/* implicit */int) ((((/* implicit */_Bool) -214224840)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) : (var_10)));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [i_1 - 1] [9]), (((/* implicit */unsigned long long int) var_11))))) ? (((-7203453274646568659LL) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned int) -2147483646)) : (var_2)))))) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)105))))) << (((/* implicit */int) (_Bool)1)))))));
    }
    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_4)) >= (var_10)));
}
