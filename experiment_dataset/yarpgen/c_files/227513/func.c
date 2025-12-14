/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227513
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_5))))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) var_13)), (var_1))), (((/* implicit */unsigned int) var_11))));
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
            arr_8 [2LL] [i_0] [2LL] &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_8)))));
            arr_9 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
        }
        arr_10 [0LL] |= ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-62)))) | (((/* implicit */int) (short)-6932))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((-1LL) - (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_18 -= ((/* implicit */signed char) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_14))));
            arr_16 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) var_3);
            var_19 = ((/* implicit */long long int) var_7);
        }
        for (short i_4 = 1; i_4 < 11; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    {
                        arr_25 [i_4] [i_6] [i_5] [i_4] [i_4] = (-(((/* implicit */int) var_4)));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_14))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_7] [i_7] [i_4] [i_7] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (var_7))) / (var_7)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            var_22 ^= var_0;
                            var_23 = ((/* implicit */unsigned long long int) var_0);
                            arr_32 [i_6] [i_4] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_9))));
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */short) (+(var_8)));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    {
                        var_25 = ((/* implicit */short) var_8);
                        var_26 &= ((/* implicit */_Bool) var_14);
                    }
                } 
            } 
            var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (unsigned short)4))))) * (((/* implicit */int) ((((/* implicit */int) var_0)) != (-840865135))))));
        }
        arr_37 [i_2] = (+((~(((/* implicit */int) (signed char)-1)))));
        /* LoopSeq 1 */
        for (signed char i_11 = 2; i_11 < 11; i_11 += 1) 
        {
            arr_40 [i_2] = ((/* implicit */long long int) var_0);
            arr_41 [i_11] [i_2] = ((/* implicit */unsigned char) var_16);
        }
    }
    var_28 += ((/* implicit */short) var_9);
    /* LoopSeq 3 */
    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
    {
        arr_45 [i_12] [i_12] = ((/* implicit */signed char) var_11);
        arr_46 [i_12] = ((/* implicit */signed char) min(((-(var_7))), (((/* implicit */unsigned long long int) var_3))));
    }
    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            for (signed char i_15 = 3; i_15 < 24; i_15 += 1) 
            {
                {
                    var_29 |= ((/* implicit */signed char) var_11);
                    var_30 = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) var_4)) == (((((/* implicit */int) var_4)) ^ ((+(((/* implicit */int) var_3)))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        arr_60 [i_13] [i_14] [i_13] [i_16] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)2))));
                        /* LoopSeq 3 */
                        for (unsigned char i_17 = 0; i_17 < 25; i_17 += 4) 
                        {
                            var_32 ^= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_15))))), (((var_10) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) var_6))));
                        }
                        for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
                        {
                            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) var_14))));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)16))))) ^ (((/* implicit */int) var_4))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 4) 
                        {
                            arr_69 [i_13] [i_13] [i_14] [i_15] [i_15] [i_16] [i_19] = ((/* implicit */unsigned int) (+(167324647925277879ULL)));
                            arr_70 [i_19] [i_16] [i_15] [i_14] [i_13] &= ((/* implicit */signed char) (-(((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                        }
                    }
                    for (unsigned char i_20 = 4; i_20 < 23; i_20 += 1) 
                    {
                        var_36 -= ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                        arr_75 [i_20] [i_15] [i_14] [i_20] = ((/* implicit */unsigned char) var_10);
                        arr_76 [i_13] [i_20] [i_15] [i_20] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    }
                }
            } 
        } 
        var_37 ^= ((/* implicit */unsigned short) (+(((-30) ^ (var_6)))));
        arr_77 [i_13] = ((/* implicit */long long int) (+(max((var_1), (((/* implicit */unsigned int) var_12))))));
        arr_78 [i_13] = ((/* implicit */long long int) var_14);
        arr_79 [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_16)))))));
    }
    for (long long int i_21 = 0; i_21 < 12; i_21 += 1) 
    {
        arr_83 [i_21] = var_9;
        var_38 = ((/* implicit */unsigned char) var_6);
        /* LoopSeq 2 */
        for (short i_22 = 2; i_22 < 11; i_22 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                for (long long int i_24 = 0; i_24 < 12; i_24 += 1) 
                {
                    {
                        var_39 |= ((/* implicit */short) var_9);
                        arr_92 [i_23] [i_21] [i_23] = ((/* implicit */unsigned short) var_13);
                    }
                } 
            } 
            arr_93 [(short)4] |= ((/* implicit */int) var_2);
        }
        for (signed char i_25 = 0; i_25 < 12; i_25 += 4) 
        {
            var_40 = ((/* implicit */short) (+(min((((/* implicit */unsigned int) var_0)), (var_1)))));
            /* LoopSeq 2 */
            for (unsigned short i_26 = 3; i_26 < 9; i_26 += 4) 
            {
                var_41 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) ^ (((((/* implicit */int) var_4)) & (((/* implicit */int) var_4))))));
                arr_99 [i_25] [i_21] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (958233181U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)215), (((/* implicit */unsigned char) (_Bool)1))))))));
                /* LoopSeq 1 */
                for (unsigned int i_27 = 0; i_27 < 12; i_27 += 1) 
                {
                    arr_103 [i_21] = ((/* implicit */signed char) var_1);
                    var_42 = ((/* implicit */short) var_9);
                    var_43 ^= ((/* implicit */int) var_10);
                }
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 12; i_28 += 4) 
                {
                    for (unsigned char i_29 = 0; i_29 < 12; i_29 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */short) ((((/* implicit */int) (short)30325)) ^ ((+(((/* implicit */int) var_11))))));
                            arr_108 [i_21] [i_25] [i_21] [i_28] [i_29] [i_26] = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
            }
            for (signed char i_30 = 0; i_30 < 12; i_30 += 1) 
            {
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 12; i_31 += 3) 
                {
                    for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */_Bool) var_0);
                            var_46 = ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_33 = 2; i_33 < 9; i_33 += 1) /* same iter space */
                {
                    var_47 = ((/* implicit */_Bool) var_11);
                    var_48 = ((/* implicit */unsigned short) var_13);
                    var_49 = ((/* implicit */unsigned char) var_8);
                }
                for (unsigned long long int i_34 = 2; i_34 < 9; i_34 += 1) /* same iter space */
                {
                    arr_124 [i_34] [i_30] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */short) var_0);
                    /* LoopSeq 3 */
                    for (short i_35 = 2; i_35 < 11; i_35 += 4) 
                    {
                        var_50 *= ((/* implicit */unsigned char) var_13);
                        arr_129 [i_21] [i_25] [i_30] [i_21] [i_35] [i_21] [i_30] = ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_12)));
                        arr_130 [i_21] [i_25] [i_21] [i_34] [i_35] [i_35] [i_30] = var_10;
                        var_51 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-1))));
                    }
                    for (long long int i_36 = 1; i_36 < 10; i_36 += 1) 
                    {
                        arr_134 [i_36] [i_21] [i_30] [i_21] [i_21] = ((/* implicit */signed char) min(((unsigned short)28072), (var_3)));
                        var_52 = ((/* implicit */unsigned char) (~((~(var_1)))));
                        arr_135 [i_21] [i_25] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                    }
                    for (unsigned short i_37 = 2; i_37 < 9; i_37 += 3) 
                    {
                        arr_138 [i_21] [i_25] [i_21] [i_34] [i_34] = ((/* implicit */unsigned char) (~(var_1)));
                        var_53 ^= ((/* implicit */unsigned short) var_0);
                    }
                    arr_139 [i_21] [i_30] [i_21] = ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))))), (var_0)));
                }
                for (unsigned long long int i_38 = 2; i_38 < 9; i_38 += 1) /* same iter space */
                {
                    var_54 = ((/* implicit */unsigned long long int) var_10);
                    var_55 *= ((/* implicit */short) var_11);
                    var_56 = ((/* implicit */long long int) (~(var_7)));
                }
            }
            arr_143 [i_21] [i_21] [i_25] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)1)))) / (var_6)));
        }
        var_57 += ((/* implicit */signed char) var_13);
    }
}
