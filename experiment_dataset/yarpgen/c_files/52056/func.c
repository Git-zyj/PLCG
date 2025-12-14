/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52056
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
    var_12 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9))))) == (((/* implicit */unsigned int) ((var_2) / (((/* implicit */int) var_1)))))));
    var_13 = ((/* implicit */short) ((((/* implicit */int) var_7)) << ((((+(var_9))) - (2597700131U)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */short) (~(arr_1 [i_0 - 2])));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_2))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) & (arr_0 [(short)7] [i_2])));
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                for (int i_4 = 2; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_6 [i_1] [i_4 - 1] [i_3]) : (((/* implicit */int) var_10))));
                        var_18 = ((/* implicit */unsigned short) (~(arr_6 [i_3 + 1] [i_4] [i_3])));
                        var_19 = ((((var_5) - (((/* implicit */int) arr_10 [i_1] [4U] [13])))) + (((/* implicit */int) var_7)));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            var_20 = arr_5 [i_3 + 2];
                            var_21 = (-(var_5));
                        }
                        for (int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) (+(var_3)));
                            arr_17 [i_3] [i_2] [i_3 + 2] [6U] [i_6] = ((((/* implicit */_Bool) arr_13 [i_2] [i_4 - 2] [i_3] [7U] [i_6] [i_3 - 1] [i_3 + 2])) ? (var_0) : (((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 1] [i_3 + 2])));
                            var_23 = ((/* implicit */int) var_7);
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 2) /* same iter space */
        {
            arr_20 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) max((arr_8 [i_1]), (var_7))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((var_6), (arr_15 [i_7 + 2] [i_7 + 2] [i_7 - 1]))))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) 
            {
                var_24 = ((/* implicit */unsigned int) var_10);
                var_25 = ((/* implicit */int) arr_8 [i_8 - 1]);
            }
        }
        for (unsigned short i_9 = 1; i_9 < 11; i_9 += 2) /* same iter space */
        {
            var_26 = arr_8 [i_1];
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    {
                        var_27 = ((/* implicit */int) var_11);
                        /* LoopSeq 3 */
                        for (short i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            var_28 = ((/* implicit */short) var_5);
                            arr_33 [9U] [i_10] [i_9] [i_1] = var_6;
                            arr_34 [(short)6] [i_12] [i_12] [i_11] [i_10] [i_9 + 3] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_12 [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9 + 1]), (arr_12 [i_9 + 1] [i_9 - 1] [i_9 + 3] [i_9 + 2]))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */int) var_1)) | (var_5)));
                        }
                        for (unsigned int i_13 = 2; i_13 < 12; i_13 += 1) 
                        {
                            var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                            var_31 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_9 - 1] [i_9 + 3])) || (((/* implicit */_Bool) var_2)))))));
                        }
                        for (int i_14 = 0; i_14 < 14; i_14 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned int) var_10))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_25 [i_1]) << (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_14] [i_11] [i_10])) || (((/* implicit */_Bool) arr_1 [i_14])))))))) && (((/* implicit */_Bool) (~((-(var_9))))))));
                            arr_40 [(short)10] [7] [i_10] [i_10] [i_10] = ((/* implicit */short) (~(((var_2) >> (((((/* implicit */int) arr_27 [i_1] [i_9] [i_9 + 2])) - (52421)))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                var_34 = ((/* implicit */short) min((((unsigned int) var_2)), (((/* implicit */unsigned int) ((unsigned short) var_8)))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 1; i_16 < 13; i_16 += 2) 
                {
                    for (short i_17 = 1; i_17 < 11; i_17 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_38 [i_17 + 2] [(unsigned short)5] [i_15] [i_9 + 1] [i_17]) | (arr_38 [i_17 + 2] [i_9 - 1] [i_15] [i_9 + 1] [i_17])))) ? (((var_3) + (arr_4 [i_17 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                            arr_48 [i_16 + 1] [i_17] = ((/* implicit */short) var_0);
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */int) arr_35 [i_9 - 1] [i_9 + 3]);
        }
        for (short i_18 = 0; i_18 < 14; i_18 += 2) 
        {
            arr_53 [i_18] = (+(max((min((var_9), (((/* implicit */unsigned int) arr_26 [(short)0] [i_18] [i_18] [i_1])))), (((/* implicit */unsigned int) ((unsigned short) var_9))))));
            /* LoopSeq 1 */
            for (short i_19 = 3; i_19 < 12; i_19 += 2) 
            {
                var_37 = var_7;
                /* LoopNest 2 */
                for (unsigned short i_20 = 4; i_20 < 11; i_20 += 2) 
                {
                    for (short i_21 = 0; i_21 < 14; i_21 += 3) 
                    {
                        {
                            var_38 = var_4;
                            var_39 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_21] [i_20] [i_20 - 4] [i_19 - 2] [i_19 - 3] [i_18] [i_18])))))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */int) var_11);
            }
        }
        var_41 -= ((/* implicit */short) (+(((((/* implicit */int) var_4)) + (arr_50 [i_1])))));
        /* LoopNest 2 */
        for (unsigned int i_22 = 1; i_22 < 11; i_22 += 2) 
        {
            for (short i_23 = 1; i_23 < 12; i_23 += 3) 
            {
                {
                    var_42 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_13 [i_1] [i_22] [i_22] [i_22 + 1] [i_22] [i_22 + 3] [i_23]), (arr_13 [i_22 - 1] [i_22 + 1] [0U] [i_22 - 1] [i_23] [13U] [1]))))));
                    var_43 = var_4;
                    var_44 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((int) var_9)))))));
                }
            } 
        } 
        var_45 = ((/* implicit */int) var_9);
        /* LoopSeq 4 */
        for (short i_24 = 0; i_24 < 14; i_24 += 4) 
        {
            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_6))))) ? (max((var_0), (((/* implicit */int) var_4)))) : (((int) arr_44 [i_1]))));
            var_47 = ((/* implicit */short) (((~(arr_2 [i_24]))) > (((/* implicit */unsigned int) (+(arr_59 [i_1] [i_1] [i_24] [i_24]))))));
        }
        for (unsigned int i_25 = 0; i_25 < 14; i_25 += 2) 
        {
            arr_74 [i_1] = ((/* implicit */int) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) var_2)))))) <= ((+(((var_9) - (((/* implicit */unsigned int) var_0))))))));
            /* LoopSeq 1 */
            for (short i_26 = 0; i_26 < 14; i_26 += 1) 
            {
                arr_78 [i_26] [8] [i_26] = (~((~(arr_32 [i_26] [(short)10] [9] [6] [i_1]))));
                var_48 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_47 [(short)13] [i_26] [i_26] [i_25] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_25]))))));
            }
            /* LoopNest 2 */
            for (short i_27 = 0; i_27 < 14; i_27 += 2) 
            {
                for (unsigned int i_28 = 0; i_28 < 14; i_28 += 1) 
                {
                    {
                        var_49 = ((/* implicit */short) arr_2 [i_28]);
                        var_50 = ((/* implicit */short) (((((-(((/* implicit */int) arr_42 [i_28] [i_27] [i_25])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    }
                } 
            } 
            var_51 = var_11;
        }
        for (unsigned int i_29 = 2; i_29 < 13; i_29 += 1) 
        {
            var_52 = (~(max(((-(arr_83 [i_29 - 2] [i_29 - 1] [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) ((unsigned short) arr_16 [i_1] [i_1] [i_1] [0U] [i_29 + 1]))))));
            arr_88 [i_1] = var_4;
            var_53 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))) << (((((/* implicit */int) var_1)) + (32598)))));
            arr_89 [6U] [1] = arr_51 [i_1];
        }
        for (short i_30 = 0; i_30 < 14; i_30 += 4) 
        {
            var_54 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) var_1)))));
            var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_1]))) ? (((/* implicit */int) arr_8 [i_1])) : (((((/* implicit */int) arr_8 [i_1])) - (((/* implicit */int) arr_8 [i_1]))))));
        }
    }
    for (unsigned short i_31 = 0; i_31 < 23; i_31 += 3) 
    {
        var_56 = ((/* implicit */int) (-(((unsigned int) var_10))));
        var_57 = ((/* implicit */unsigned int) min(((((~(var_0))) | (((((/* implicit */int) var_1)) % (((/* implicit */int) var_6)))))), ((~((+(((/* implicit */int) var_10))))))));
        /* LoopSeq 1 */
        for (int i_32 = 0; i_32 < 23; i_32 += 4) 
        {
            var_58 -= ((/* implicit */unsigned short) max((((int) arr_95 [i_31] [i_32])), ((+(var_0)))));
            var_59 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
            var_60 = ((/* implicit */unsigned short) var_7);
        }
    }
    var_61 = ((/* implicit */int) var_9);
}
