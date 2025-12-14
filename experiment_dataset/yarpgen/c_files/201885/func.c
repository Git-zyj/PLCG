/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201885
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 3757709561U)) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)67)) >> (((((/* implicit */int) (unsigned char)255)) - (229))))))));
            var_19 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned char)122)))), (((((/* implicit */int) (unsigned char)15)) / (max((var_16), (((/* implicit */int) var_2))))))));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
            {
                arr_8 [i_0] = ((/* implicit */int) (unsigned char)255);
                arr_9 [9] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)2122))));
                arr_10 [i_0] [i_2] [0] [i_0] = ((/* implicit */unsigned long long int) var_14);
                arr_11 [i_0] [(unsigned short)3] = var_16;
            }
            for (short i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
            {
                arr_14 [i_0] = 1972731015;
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            arr_20 [1ULL] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) var_5);
                            var_20 |= ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-86)), ((unsigned char)255))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (var_12)));
                            arr_21 [i_0] [i_0] [(short)6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)-25337)), ((+(9268773156975286760ULL)))));
                        }
                    } 
                } 
            }
            for (short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
            {
                var_22 = (_Bool)0;
                arr_24 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~((~((+(((/* implicit */int) (signed char)-1))))))));
            }
        }
        /* vectorizable */
        for (unsigned char i_7 = 2; i_7 < 8; i_7 += 1) /* same iter space */
        {
            arr_28 [0ULL] [(unsigned short)4] &= ((/* implicit */_Bool) 3757709561U);
            /* LoopSeq 3 */
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    for (short i_10 = 2; i_10 < 8; i_10 += 3) 
                    {
                        {
                            arr_38 [7ULL] [i_7 + 1] [i_0] [i_9] [i_10 + 1] = ((/* implicit */_Bool) var_17);
                            arr_39 [i_0] [i_0] [i_8] [i_9] [i_0] [(_Bool)1] [i_7] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-2))));
                            arr_40 [(unsigned char)4] [i_7] |= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> ((((~(((/* implicit */int) var_2)))) + (69)))));
                            arr_41 [(signed char)2] [(unsigned char)6] [(unsigned char)6] [i_9] [(_Bool)1] |= ((/* implicit */short) var_13);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) ((var_9) < (((/* implicit */unsigned int) 1148940566))))))))));
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        {
                            arr_48 [(unsigned short)0] [i_7] [i_0] [i_7 + 1] = ((/* implicit */unsigned int) (((-(4294967295U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243)))));
                            arr_49 [i_0] [i_11] [i_0] = ((/* implicit */unsigned char) var_14);
                            arr_50 [i_0] [i_8] [i_12] [i_8] [i_11] = ((/* implicit */_Bool) (unsigned char)218);
                            arr_51 [i_0] [(short)0] [0] [i_11] [i_11] [i_0] [i_12] = var_3;
                        }
                    } 
                } 
            }
            for (int i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                arr_56 [i_0] = ((/* implicit */int) ((((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((79563178) / (2147483625))))));
                arr_57 [i_0] [i_0] [i_7 + 2] [i_0] = ((/* implicit */short) var_12);
            }
            for (int i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                arr_60 [i_0] = (~(((/* implicit */int) (unsigned char)238)));
                arr_61 [i_0] = ((/* implicit */_Bool) ((537257735U) >> (((((/* implicit */int) (short)1753)) - (1724)))));
                arr_62 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] &= ((/* implicit */int) var_1);
            }
        }
        for (unsigned char i_15 = 2; i_15 < 8; i_15 += 1) /* same iter space */
        {
            var_24 -= ((/* implicit */int) (short)7111);
            var_25 = ((/* implicit */unsigned short) (unsigned char)243);
            arr_65 [i_15] [i_15] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)177))))));
            arr_66 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)124)) - (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) (unsigned char)255))))))))));
        }
        for (unsigned char i_16 = 2; i_16 < 8; i_16 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_17 = 1; i_17 < 7; i_17 += 1) 
            {
                arr_73 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_14)) != (var_7)))) & (((/* implicit */int) (signed char)-23))));
                /* LoopSeq 1 */
                for (unsigned char i_18 = 1; i_18 < 8; i_18 += 2) 
                {
                    arr_77 [(signed char)9] [(short)5] [i_0] [i_18] = ((/* implicit */unsigned char) var_11);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        arr_82 [i_0] [i_16 + 1] [i_0] [(unsigned short)3] [i_19] [i_19] [i_19] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                        arr_83 [i_0] [i_16] [i_0] = ((/* implicit */short) (+(var_9)));
                        arr_84 [i_19] [i_0] [0ULL] [i_16] [i_16 + 2] [i_0] [i_0] = ((/* implicit */unsigned int) (short)1753);
                        var_26 += ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned char)7))))));
                    }
                    arr_85 [i_0] = ((/* implicit */unsigned char) min(((((-(2147483647))) | ((+(((/* implicit */int) (unsigned char)212)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                }
            }
            for (signed char i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                var_27 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) (unsigned char)14)), (13143611200382262472ULL)))));
                arr_88 [i_0] = ((/* implicit */unsigned int) (~((-(min((var_7), (((/* implicit */int) (unsigned char)41))))))));
                arr_89 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(var_5)))) / (min((var_3), (7122249657927141558ULL)))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((13143611200382262465ULL) >> (((((/* implicit */int) (unsigned short)59450)) - (59445))))))))), (max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (4294967295U)))))))))));
            }
            for (unsigned short i_21 = 0; i_21 < 10; i_21 += 2) 
            {
                arr_94 [i_0] [(unsigned char)8] [(unsigned char)3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (-1228788171)));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 10; i_22 += 3) 
                {
                    for (int i_23 = 0; i_23 < 10; i_23 += 4) 
                    {
                        {
                            arr_99 [i_0] [i_16] [(unsigned short)0] [i_16] [i_16] [9U] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) var_15)))), (((/* implicit */int) ((((((/* implicit */int) var_10)) | (-1228788156))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned char)212))))))))));
                            arr_100 [i_0] [i_0] [i_16] [i_0] [i_21] [(unsigned char)0] [i_23] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)24915))));
                            arr_101 [i_0] [i_16 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_11)) | ((-(var_3)))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned char) min((var_29), (max(((unsigned char)243), (((/* implicit */unsigned char) var_10))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 1; i_24 < 9; i_24 += 3) 
                {
                    arr_105 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max(((-(4846141737000872884ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(1085393095U)))))))));
                    arr_106 [i_24] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((1228788157), (((/* implicit */int) ((((/* implicit */int) (unsigned short)14464)) <= (((/* implicit */int) var_12)))))));
                    arr_107 [i_0] [(unsigned short)8] = ((/* implicit */unsigned int) 2147483646);
                }
            }
            var_30 = ((/* implicit */short) min((14244120625079067480ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned char)242))))) + (((/* implicit */int) var_0)))))));
            arr_108 [i_0] [i_16 + 2] [i_16 + 1] = var_4;
        }
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_7))))))))))));
        arr_109 [i_0] = ((/* implicit */int) ((((/* implicit */int) (signed char)-88)) <= ((~(374747816)))));
    }
    /* vectorizable */
    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
    {
        arr_113 [i_25] [i_25 - 1] = ((/* implicit */short) (_Bool)1);
        arr_114 [i_25] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) / ((~(2147483647U)))));
        arr_115 [i_25] [i_25] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    var_32 = ((/* implicit */signed char) (unsigned short)65535);
}
