/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29184
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_0))));
    var_13 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0))))))))));
        var_14 += (!(((/* implicit */_Bool) var_2)));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [10] [i_3] [i_2] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_6))))));
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_1))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */int) (+((-(var_7)))));
    }
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        arr_14 [i_4] = ((/* implicit */_Bool) var_1);
        var_17 = ((/* implicit */int) (~((+(var_8)))));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
            var_19 -= ((/* implicit */long long int) (-((+(var_7)))));
        }
        for (short i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_21 [i_4] &= (~((~(-730941395))));
            arr_22 [i_6] [(short)3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
            arr_23 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (~((-(var_7)))));
        }
        /* LoopNest 3 */
        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 2) 
        {
            for (int i_8 = 1; i_8 < 13; i_8 += 3) 
            {
                for (int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    {
                        arr_33 [i_9] [i_7] [i_7] [i_4] = var_3;
                        /* LoopSeq 2 */
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            arr_36 [i_4] [7] [i_4] [11ULL] [i_4] = ((/* implicit */long long int) (~((+(((/* implicit */int) var_0))))));
                            arr_37 [i_10] [i_8] [i_4] [i_8 + 1] [i_10] = ((/* implicit */long long int) var_3);
                        }
                        for (int i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            arr_40 [i_9] [i_11] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (short)-573))))));
                            arr_41 [i_4] [i_11] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_10);
                            var_20 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
                            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
                        }
                        arr_42 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) (~((+((-(var_8)))))));
                        arr_43 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) var_9);
                        arr_44 [i_4] [i_7] [i_8] [12ULL] = var_7;
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) var_2);
    }
    for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_14 = 1; i_14 < 17; i_14 += 3) 
            {
                arr_53 [i_14] [i_14] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                var_24 = ((/* implicit */unsigned long long int) var_5);
            }
            /* LoopNest 3 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                for (long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    for (short i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        {
                            arr_61 [i_12] [i_15] [i_12] = ((/* implicit */short) (-((+(((/* implicit */int) var_3))))));
                            arr_62 [i_12] [i_13] [i_15] [i_16] [i_12] = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                            var_25 = ((/* implicit */int) (~((-(var_1)))));
                        }
                    } 
                } 
            } 
            arr_63 [i_13] = var_2;
            /* LoopNest 3 */
            for (unsigned int i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                for (long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    for (int i_20 = 0; i_20 < 20; i_20 += 1) 
                    {
                        {
                            arr_74 [i_20] [i_20] [i_12] [i_18] [i_13] [i_12] &= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_6))))));
                            var_26 += ((/* implicit */unsigned int) var_11);
                            var_27 = ((/* implicit */_Bool) max((var_27), ((!(((/* implicit */_Bool) (-(var_10))))))));
                            var_28 = var_5;
                            arr_75 [i_13] [i_13] [i_13] [i_13] |= (+((+((+(((/* implicit */int) (short)572)))))));
                        }
                    } 
                } 
            } 
            arr_76 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) (-((~(var_9)))));
        }
        for (int i_21 = 0; i_21 < 20; i_21 += 4) 
        {
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                for (unsigned int i_23 = 0; i_23 < 20; i_23 += 2) 
                {
                    for (int i_24 = 0; i_24 < 20; i_24 += 3) 
                    {
                        {
                            arr_89 [(short)6] [i_21] [i_22] [i_23] [i_23] [i_24] |= ((/* implicit */long long int) var_6);
                            arr_90 [i_24] [i_24] [i_21] [i_22] [i_21] [i_21] [(_Bool)1] = ((/* implicit */int) (+((-(var_8)))));
                        }
                    } 
                } 
            } 
            arr_91 [i_12] [i_12] [i_12] = var_5;
            /* LoopSeq 1 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_26 = 2; i_26 < 19; i_26 += 2) 
                {
                    arr_99 [i_12] [i_21] [10] [i_26] [i_26] [i_26] |= ((/* implicit */short) (-(((/* implicit */int) (short)-548))));
                    arr_100 [i_12] = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_27 = 2; i_27 < 17; i_27 += 1) 
                {
                    arr_103 [i_27] [i_25] [i_21] [i_12] &= ((/* implicit */int) (-(6123460605082181785LL)));
                    arr_104 [i_12] [i_21] [i_21] [i_25] [i_25] [i_27] = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                }
            }
        }
        for (int i_28 = 1; i_28 < 18; i_28 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_29 = 1; i_29 < 18; i_29 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_30 = 1; i_30 < 19; i_30 += 1) 
                {
                    arr_113 [i_30 + 1] [i_29] [i_28] [i_29] [i_12] = ((/* implicit */_Bool) var_8);
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_5))));
                }
                arr_114 [i_29] [i_29] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                /* LoopNest 2 */
                for (unsigned int i_31 = 0; i_31 < 20; i_31 += 2) 
                {
                    for (long long int i_32 = 0; i_32 < 20; i_32 += 1) 
                    {
                        {
                            var_30 ^= ((/* implicit */short) (-((+(var_8)))));
                            arr_120 [i_29] [i_28] [19LL] [i_28 + 1] [i_29] = ((/* implicit */int) var_11);
                        }
                    } 
                } 
                arr_121 [i_29] [i_29] = ((/* implicit */unsigned int) var_4);
            }
            /* LoopSeq 1 */
            for (int i_33 = 4; i_33 < 19; i_33 += 2) 
            {
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (+((~(((/* implicit */int) var_6)))))))));
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (+((~(((/* implicit */int) var_2)))))))));
            }
            arr_124 [i_12] = ((/* implicit */short) var_5);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_34 = 4; i_34 < 19; i_34 += 2) 
        {
            /* LoopNest 3 */
            for (short i_35 = 0; i_35 < 20; i_35 += 3) 
            {
                for (int i_36 = 2; i_36 < 19; i_36 += 2) 
                {
                    for (int i_37 = 0; i_37 < 20; i_37 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) var_0);
                            var_34 = ((/* implicit */int) var_11);
                            var_35 = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_2))))));
                        }
                    } 
                } 
            } 
            arr_134 [i_34 - 3] [(_Bool)0] [i_34 - 3] = ((/* implicit */unsigned int) (+((-(var_8)))));
        }
    }
    var_36 = ((/* implicit */unsigned int) (+((-(var_9)))));
    var_37 = ((/* implicit */long long int) (~((+((+(var_7)))))));
}
