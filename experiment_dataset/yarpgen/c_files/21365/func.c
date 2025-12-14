/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21365
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))));
        var_14 = ((/* implicit */_Bool) var_10);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_15 = (((_Bool)1) ? (4194303LL) : (((/* implicit */long long int) 2697901736U)));
        var_16 = ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_10)) : (4ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_1])));
        var_17 = ((/* implicit */long long int) (((-(arr_3 [i_1]))) != (((/* implicit */unsigned long long int) arr_2 [i_1]))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 737285155U)) ? (18446744073709551610ULL) : (18446744073709551615ULL)));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_8 [i_2] [i_3]) : (arr_8 [i_2] [i_3])));
            var_19 = ((/* implicit */long long int) var_12);
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((var_8) ? (((/* implicit */unsigned long long int) var_10)) : (36028797018963952ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_3]))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_7 [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (4ULL)))));
        }
        arr_12 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)29372))));
    }
    var_22 = ((/* implicit */signed char) var_11);
    var_23 = ((/* implicit */_Bool) ((72057594037927935ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
    var_24 = ((/* implicit */long long int) var_4);
}
