/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20347
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) arr_3 [i_1]);
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3 + 1] [i_4] = ((/* implicit */_Bool) arr_2 [i_0]);
                                var_14 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_3 - 2]), (arr_10 [i_2] [i_2 - 1] [i_2 - 1] [(unsigned short)1] [i_3 + 1]))))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned int) arr_7 [i_2] [i_2 - 1] [i_2] [i_2 - 1]))))))))));
                            }
                        } 
                    } 
                    arr_13 [(_Bool)1] = ((/* implicit */signed char) arr_3 [i_0]);
                }
                for (unsigned short i_5 = 3; i_5 < 10; i_5 += 1) 
                {
                    arr_16 [(signed char)2] [(signed char)2] = ((/* implicit */long long int) var_5);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (~(arr_18 [i_0] [i_1] [i_5 + 2] [i_6 - 1] [i_0] [i_6]))))));
                        var_17 = ((/* implicit */unsigned long long int) ((signed char) arr_7 [i_5] [i_5 + 2] [i_6] [(unsigned short)4]));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 2; i_7 < 11; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((signed char) var_4));
                            arr_22 [i_5] [i_6] = ((/* implicit */unsigned int) var_6);
                            arr_23 [i_0] [i_0] [i_1] [i_5] [i_1] [i_6] = var_4;
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((signed char) arr_7 [i_0] [i_1] [i_6 + 2] [i_6 + 2])))));
                            var_20 = arr_27 [i_0] [i_1] [i_0] [i_6] [i_8];
                        }
                    }
                    arr_28 [i_5] [i_5] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (var_8)))), ((+(var_13)))));
                }
                for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_8 [i_9] [i_1] [i_0] [i_0]))));
                    arr_32 [i_0] [0LL] [0LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_14 [i_9] [i_1] [i_0] [i_0]))))));
                    var_22 *= (-(var_11));
                }
                var_23 = ((/* implicit */long long int) var_1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (unsigned short i_11 = 1; i_11 < 22; i_11 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                            {
                                arr_45 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_39 [i_11 - 1] [i_11 + 1])))));
                                var_24 ^= ((/* implicit */unsigned long long int) var_3);
                            }
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(((/* implicit */int) var_5)))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
                            {
                                arr_48 [i_10] [i_11] [i_12] [i_13] [i_15] [i_11] = (+(var_4));
                                var_26 = arr_34 [2ULL];
                            }
                            for (long long int i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
                            {
                                var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)30704))));
                                arr_53 [15ULL] [i_11] [i_11] [i_13] = (~(((unsigned long long int) arr_50 [i_11] [i_11] [i_12] [i_11])));
                            }
                            for (unsigned char i_17 = 4; i_17 < 21; i_17 += 4) 
                            {
                                arr_56 [i_10] [i_11] [i_12] [i_11] [i_17] = ((unsigned long long int) max((var_4), (arr_47 [11ULL] [11ULL] [11ULL] [i_17 - 1] [i_17 - 2])));
                                var_28 &= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_47 [i_11 + 1] [9U] [(_Bool)1] [i_17 + 1] [i_17])), (var_13))), (((/* implicit */unsigned long long int) ((long long int) arr_47 [i_11 - 1] [i_17 - 1] [i_17] [i_17 - 3] [i_17])))));
                                var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_49 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))));
                                var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((unsigned long long int) var_3)), (((unsigned long long int) 6676170935340063768LL)))))));
                            }
                        }
                    } 
                } 
                arr_57 [i_11] = ((/* implicit */short) (~(((/* implicit */int) arr_37 [i_11 + 1] [i_11 + 1] [i_11 + 1]))));
                var_31 = ((/* implicit */unsigned char) arr_36 [i_10]);
            }
        } 
    } 
}
