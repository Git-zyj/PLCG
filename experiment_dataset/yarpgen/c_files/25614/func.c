/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25614
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
    var_16 = ((/* implicit */long long int) var_1);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                arr_8 [i_0 + 2] [i_0] [i_2] [i_2] = ((/* implicit */long long int) var_15);
                var_17 = ((((/* implicit */int) ((_Bool) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_11)))))) / (var_15));
            }
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (_Bool)1);
                        var_19 = ((/* implicit */int) ((long long int) max((((/* implicit */int) ((72022409665839104LL) >= (((/* implicit */long long int) 1073741816))))), (((int) (_Bool)1)))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            var_20 = ((/* implicit */_Bool) arr_4 [i_0] [i_5] [i_0]);
            var_21 ^= ((/* implicit */long long int) ((((((arr_15 [i_0 - 1] [i_0 - 1]) + (2147483647))) >> (((arr_15 [i_0 + 2] [i_0 - 1]) + (1260921213))))) != (((((/* implicit */int) (_Bool)0)) >> (((-5841590639520536315LL) + (5841590639520536319LL)))))));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                arr_20 [i_0 - 1] [i_0] [i_6] [i_0 + 2] = ((/* implicit */long long int) var_5);
                var_22 ^= ((/* implicit */long long int) ((int) var_7));
                arr_21 [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) var_0);
            }
        }
        var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_9 [i_0] [i_0])));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        var_24 = ((/* implicit */long long int) -1);
        var_25 ^= arr_22 [i_7];
        var_26 += ((/* implicit */_Bool) ((var_5) & (((/* implicit */int) var_4))));
    }
    for (long long int i_8 = 3; i_8 < 13; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_33 [i_8] [i_8] [i_10] = ((((long long int) 1073741813)) / (((((arr_31 [i_10] [i_9] [i_8]) + (9223372036854775807LL))) << ((((((-(arr_28 [i_8 + 2]))) + (5789080138852818512LL))) - (46LL))))));
                    arr_34 [i_8] [i_9] [i_10] = var_1;
                    var_27 = ((/* implicit */_Bool) max((arr_28 [i_10]), (((/* implicit */long long int) ((int) (~(1073741823)))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            {
                                arr_40 [i_8] [i_9] [i_10] [i_9] [i_12] [i_8 + 1] = ((/* implicit */long long int) ((int) ((long long int) -238629847)));
                                arr_41 [i_12] [i_8] [i_8] [i_8] = arr_22 [i_8];
                                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_0))));
                                arr_42 [i_8] [i_9] [i_9] [i_11] [i_12] = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) var_4)), (max((((/* implicit */int) (_Bool)1)), (1073741795)))))) / (((long long int) arr_29 [i_8] [i_8 - 2] [i_8 + 1]))));
                            }
                        } 
                    } 
                    arr_43 [i_8] [i_8] [i_8] = ((/* implicit */long long int) var_5);
                }
            } 
        } 
        arr_44 [i_8] [i_8] = ((((arr_39 [i_8] [i_8] [i_8 + 2]) + (2147483647))) << ((((((~(arr_35 [i_8] [i_8] [i_8] [i_8]))) + (1788677805))) - (18))));
        var_29 = ((/* implicit */long long int) min((var_29), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9223372036854775786LL)))));
    }
    var_30 = ((/* implicit */_Bool) var_12);
}
