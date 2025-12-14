/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31063
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
    var_10 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_11 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        arr_10 [11] [i_2] [11] [i_1] [i_0] = ((/* implicit */signed char) var_3);
                        arr_11 [i_0 - 2] [i_1] = ((/* implicit */int) (~(var_8)));
                    }
                    arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 + 2]))));
                }
            } 
        } 
        arr_13 [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_12 -= ((/* implicit */unsigned long long int) (-(arr_15 [i_0 - 2])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        arr_23 [i_6] = (-(((/* implicit */int) var_4)));
                        arr_24 [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (int i_8 = 1; i_8 < 15; i_8 += 3) 
                {
                    for (int i_9 = 3; i_9 < 16; i_9 += 1) 
                    {
                        {
                            arr_32 [i_0 + 2] [i_4] [i_7] [i_8] [i_9] = arr_18 [i_0];
                            arr_33 [i_0] [16U] [i_0] [i_0 + 3] = arr_14 [i_0 - 2] [i_7];
                            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                            var_14 = arr_31 [4U] [4U] [i_7] [0] [i_0];
                            arr_34 [i_0] [i_0] [i_7] [i_7] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        {
                            arr_43 [10U] [i_10] [i_11] = ((/* implicit */unsigned short) arr_18 [i_11]);
                            arr_44 [(signed char)0] [2] [i_10] [i_11] [i_11] [i_11] [i_12] = ((/* implicit */signed char) (-((+(var_7)))));
                            arr_45 [i_0 + 3] [i_11] = ((/* implicit */signed char) (~(arr_17 [i_0 + 3] [i_0 + 2])));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) (~(arr_7 [i_0] [i_0 + 2] [(signed char)16] [i_0 + 2] [i_0] [16U])));
                var_16 |= ((/* implicit */unsigned long long int) var_9);
                var_17 = ((/* implicit */signed char) arr_7 [i_0] [(signed char)14] [i_10] [i_4] [i_0] [(signed char)14]);
            }
            var_18 = (+(arr_40 [8U] [9] [8U] [i_0] [i_0 - 1]));
        }
        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            arr_48 [16] [16] = (~(var_8));
            var_19 = ((/* implicit */signed char) (+(arr_6 [i_0] [i_0] [16])));
            /* LoopSeq 4 */
            for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                var_20 -= ((/* implicit */unsigned int) (+((-(var_2)))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 3) 
                {
                    for (long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        {
                            arr_57 [i_0] [i_0] [i_13] [i_0] [i_0] [(signed char)0] = ((/* implicit */int) var_8);
                            arr_58 [i_0] [i_0] [i_14] [i_0] = ((/* implicit */unsigned int) arr_31 [i_0] [i_0] [(signed char)1] [i_0] [i_0]);
                            var_21 = ((/* implicit */int) max((var_21), (var_1)));
                        }
                    } 
                } 
                arr_59 [i_0] [i_13] [i_14] [i_0] = ((/* implicit */signed char) var_6);
            }
            for (long long int i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                var_22 = ((/* implicit */int) arr_26 [(signed char)4] [i_17] [i_0 + 3] [i_0]);
                var_23 = var_0;
                arr_63 [i_13] [i_13] [i_13] [4] |= arr_40 [i_0] [i_13] [i_13] [16U] [i_17];
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 4) 
                {
                    var_24 ^= arr_18 [i_17];
                    var_25 ^= ((/* implicit */int) (+(arr_8 [i_0] [i_13] [i_17])));
                }
            }
            for (int i_19 = 1; i_19 < 14; i_19 += 3) 
            {
                arr_68 [i_13] [i_19] = (+(((/* implicit */int) arr_20 [i_0] [i_0] [i_13] [0U])));
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [6ULL] [i_13] [i_13])))))));
            }
            for (int i_20 = 1; i_20 < 15; i_20 += 3) 
            {
                arr_72 [i_0] [i_0] [i_0] [i_0] |= (+(((/* implicit */int) var_6)));
                var_27 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_50 [i_0] [i_13] [i_13] [i_0]))))));
                /* LoopSeq 3 */
                for (unsigned int i_21 = 0; i_21 < 17; i_21 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */int) var_7);
                    var_29 ^= var_2;
                }
                for (unsigned int i_22 = 0; i_22 < 17; i_22 += 3) /* same iter space */
                {
                    arr_77 [(unsigned short)12] [(unsigned short)12] [i_13] [(unsigned short)12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_69 [i_0 + 2] [i_0 + 3] [i_0 + 4]))));
                    arr_78 [13] [1] [16LL] [16LL] = (~(var_3));
                    var_30 = ((/* implicit */signed char) (+(((/* implicit */int) arr_74 [i_0] [i_0] [i_22] [i_20 + 1]))));
                }
                for (int i_23 = 3; i_23 < 16; i_23 += 3) 
                {
                    var_31 = ((/* implicit */long long int) var_6);
                    arr_81 [i_0] [11] [i_0] [i_23] = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
                }
            }
        }
    }
    var_32 = ((/* implicit */unsigned int) max((var_2), (((/* implicit */int) var_5))));
    var_33 = (~(var_2));
}
