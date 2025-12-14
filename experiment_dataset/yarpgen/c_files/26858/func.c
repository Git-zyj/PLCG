/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26858
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                            {
                                var_15 = (~(arr_12 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 1]));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) -6050252253529106847LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_4])));
                            }
                            var_17 = ((/* implicit */short) (+(min((18446744073709551613ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2104127915U)), (6050252253529106847LL))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((unsigned int) min((arr_21 [i_0]), (((/* implicit */unsigned int) var_2)))));
                                arr_23 [i_0] [9LL] [i_0] [i_6] [i_7] [i_7] [i_7] = ((/* implicit */long long int) max(((~((~(10U))))), (max((((/* implicit */unsigned int) (short)-1)), (max((arr_0 [i_0]), (((/* implicit */unsigned int) var_10))))))));
                                var_19 = max(((short)-9), ((short)18068));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_0] = max((((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_0] [i_1] [i_0]))))), (((((/* implicit */_Bool) (~(-6050252253529106847LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 6050252253529106847LL)) < (arr_3 [i_8]))))) : (arr_5 [i_0 - 2]))));
                    var_20 = ((((/* implicit */_Bool) arr_24 [i_0])) ? (max((((unsigned long long int) 4230498208549746150LL)), (((unsigned long long int) 536608768ULL)))) : (((/* implicit */unsigned long long int) (-(-6050252253529106847LL)))));
                    arr_27 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_25 [6U] [i_1] [i_0])) : (((/* implicit */int) arr_25 [i_0] [4ULL] [i_0])))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
                {
                    var_21 = ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [6ULL] [(short)0] [i_0])) ? (((((/* implicit */long long int) max((22741628U), (((/* implicit */unsigned int) var_4))))) + (max((-96362232274739078LL), (6050252253529106847LL))))) : ((+(((long long int) 4294967286U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        for (short i_11 = 2; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((unsigned long long int) max((arr_14 [i_0] [i_0]), (var_10))));
                                var_23 = ((/* implicit */short) 6613074897111818309LL);
                                var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((14356104480987144213ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_10] [i_10]))))) ? (arr_33 [i_11 + 1] [i_11 + 1] [i_9] [i_10] [i_11 + 1] [i_10]) : (((/* implicit */unsigned long long int) arr_30 [i_11 - 2] [i_1] [i_11 - 2] [(short)2] [i_0 + 2] [i_11])))) < (((/* implicit */unsigned long long int) -8606823248018403414LL))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) min(((+(-96362232274739078LL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1])) ? (-6542974194631480119LL) : (((/* implicit */long long int) 4294967286U))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_9] [i_0 - 3] [3ULL] [13LL]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_21 [i_0])) : (var_0)))))));
                    arr_34 [i_0] = max((96362232274739068LL), (min((211106232532992LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_9]))) < (211106232532992LL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        for (short i_13 = 3; i_13 < 13; i_13 += 1) 
                        {
                            {
                                arr_39 [i_0] [3LL] [i_9] [i_12] [i_13] = ((short) ((((/* implicit */int) var_2)) - (((/* implicit */int) ((short) arr_14 [1ULL] [i_0])))));
                                arr_40 [i_0] [i_1] [(short)13] [i_12] [i_0] [9LL] [i_9] = ((/* implicit */unsigned int) arr_18 [i_13] [i_13 - 3] [(short)1] [11LL] [8ULL] [8ULL]);
                                var_26 = ((/* implicit */unsigned long long int) -211106232532992LL);
                                arr_41 [(short)5] [(short)5] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_13] [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1])) ? (((/* implicit */unsigned long long int) 2190839398U)) : (var_7)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [10U] [8ULL] [8ULL] [i_12]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_27 = var_0;
    var_28 = ((/* implicit */long long int) var_2);
    var_29 = ((/* implicit */unsigned long long int) ((max((min((((/* implicit */long long int) var_13)), (211106232532997LL))), (max((((/* implicit */long long int) var_4)), (-4230498208549746167LL))))) <= (var_6)));
}
