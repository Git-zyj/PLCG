/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232094
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
    var_10 *= ((4185051944U) ^ (((/* implicit */unsigned int) var_6)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] = var_5;
        var_11 = ((/* implicit */short) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        var_12 = ((/* implicit */short) var_1);
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_13 |= ((/* implicit */long long int) var_2);
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) 1435021169U);
            var_14 = var_4;
            var_15 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
        }
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            arr_15 [i_1] [i_1] [i_3] = 942829376;
            var_16 |= ((/* implicit */int) arr_0 [i_3]);
        }
        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_17 = ((/* implicit */int) ((unsigned int) (-(18446744073709551604ULL))));
            var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (var_4)));
        }
    }
    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) /* same iter space */
    {
        arr_21 [i_5] = ((/* implicit */signed char) var_5);
        var_19 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 1185844926)), (var_8)))), (min((((/* implicit */unsigned long long int) min(((short)3815), (arr_20 [i_5] [i_5])))), ((+(2ULL)))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 2; i_6 < 16; i_6 += 3) /* same iter space */
    {
        var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [18U])) ? ((+(arr_2 [i_6] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)14])))));
        var_21 = var_9;
        var_22 += ((/* implicit */_Bool) 438599674);
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_7))));
        var_24 = ((/* implicit */long long int) 431799056U);
    }
}
