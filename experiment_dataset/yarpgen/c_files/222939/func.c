/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222939
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */_Bool) arr_5 [i_2] [i_2 + 1] [i_2 + 1]);
                    var_18 += ((/* implicit */unsigned long long int) var_15);
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 16; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) max(((signed char)-79), (arr_8 [i_4] [i_3 - 1] [i_2] [i_1] [i_0 + 2] [i_0])));
                            arr_11 [i_1] [i_3] [i_1] [i_1] = min((arr_10 [i_3 + 1] [i_1] [i_3] [i_3] [i_1] [i_3]), (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_4))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_1] = ((/* implicit */signed char) var_6);
                            var_20 = ((/* implicit */int) max((var_20), ((~(((/* implicit */int) min((var_10), (((/* implicit */short) var_3)))))))));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((var_0) & (((/* implicit */int) (signed char)-32)))), ((-(((/* implicit */int) var_9))))))), (var_7)));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                            arr_16 [i_0] [i_5] [13ULL] [i_3 - 1] [i_1] = ((/* implicit */short) ((arr_14 [i_0 - 1] [i_2 + 1]) << (((((/* implicit */int) (signed char)66)) - (42)))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2]);
                            arr_21 [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)1023))));
                            var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) * (((/* implicit */int) arr_17 [i_1] [i_3 - 1] [i_2 + 1] [i_3] [i_6] [i_3])))) >= ((~(((/* implicit */int) var_3))))));
                            arr_22 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */signed char) arr_0 [i_0] [i_1])), (arr_17 [i_1] [i_1] [i_1] [i_3] [i_3] [i_3])))), (arr_14 [i_1] [12ULL])))) / (max((((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) min((((/* implicit */int) var_14)), (var_15))))))));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_2 + 1])) == ((+((+(((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]))))))));
                        arr_23 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (short)1027)) >= (((/* implicit */int) arr_0 [i_2] [i_1]))))), (((((/* implicit */int) arr_0 [i_0 - 1] [i_1])) * (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    }
                    for (short i_7 = 1; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        arr_26 [i_1] = ((/* implicit */_Bool) var_10);
                        var_24 = ((/* implicit */short) arr_24 [i_0] [i_0] [i_0]);
                    }
                }
            } 
        } 
        arr_27 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((77889616U) << (((((/* implicit */int) var_12)) - (1691))))) >= (var_7)))) == (((/* implicit */int) var_5))));
    }
    for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_9 = 2; i_9 < 9; i_9 += 2) 
        {
            var_25 += var_9;
            var_26 = ((/* implicit */unsigned char) (!(((arr_15 [i_9 - 2] [(unsigned short)4] [(unsigned short)4] [i_9] [i_9] [i_9] [i_9]) && (var_3)))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((var_11) == (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_28 [i_10])))), (((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_8] [i_10] [i_8])), (var_8))))))))))));
            /* LoopNest 2 */
            for (short i_11 = 2; i_11 < 9; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    {
                        arr_42 [i_11] [i_11] [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) var_6);
                        arr_43 [i_8] [i_8] [i_8] [i_8] [i_8] &= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_15 [i_8] [i_11 - 1] [i_11 + 1] [i_12] [i_8] [i_12] [i_12])))) | (((/* implicit */int) max((var_10), (((/* implicit */short) arr_15 [i_8] [i_11 - 1] [i_8] [i_11 - 1] [i_8] [i_8] [i_11 - 1])))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) var_13);
        }
        var_29 = ((/* implicit */unsigned char) var_9);
    }
    /* vectorizable */
    for (unsigned char i_13 = 1; i_13 < 7; i_13 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_13 + 3] [i_13] [i_13] [i_13] [i_13 + 1]))));
        var_31 = ((/* implicit */unsigned char) var_2);
        /* LoopSeq 3 */
        for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 1) 
        {
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) << (((((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) arr_49 [i_13])))) - (243)))));
            var_33 = ((/* implicit */long long int) arr_10 [i_13] [(unsigned char)4] [i_13] [i_13] [i_13] [i_14]);
        }
        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                var_34 += ((/* implicit */unsigned long long int) (short)1023);
                var_35 ^= ((/* implicit */signed char) ((((/* implicit */int) var_4)) == (((/* implicit */int) (unsigned short)65535))));
                arr_54 [i_13] [i_15] = ((/* implicit */unsigned long long int) var_2);
                var_36 = var_5;
            }
            for (long long int i_17 = 4; i_17 < 10; i_17 += 4) 
            {
                arr_58 [i_13] [i_13] [i_13] = arr_15 [i_13] [i_13] [i_13] [i_15] [i_17] [i_17] [i_17];
                var_37 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_51 [i_13 + 3]))));
            }
            var_38 |= ((/* implicit */unsigned char) var_1);
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (int i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    {
                        arr_64 [(unsigned short)0] [i_15] [i_15] [(unsigned short)0] = arr_24 [i_19] [i_19] [i_19];
                        arr_65 [i_13] [i_13] [(signed char)10] [i_13] [i_13 + 3] = ((/* implicit */unsigned short) (short)1033);
                    }
                } 
            } 
        }
        for (unsigned short i_20 = 0; i_20 < 11; i_20 += 3) 
        {
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_7 [i_13] [i_20] [i_20] [i_20]))))) | (arr_60 [i_13 + 4])));
            arr_70 [i_13] [i_13] [i_13] |= ((/* implicit */unsigned int) var_15);
            /* LoopNest 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (long long int i_22 = 0; i_22 < 11; i_22 += 3) 
                {
                    {
                        arr_76 [i_13] [i_13] [i_21] [i_21] [i_21] [i_22] = ((/* implicit */_Bool) ((((/* implicit */int) arr_69 [i_13] [i_13] [i_13])) | (arr_25 [i_13] [i_13] [i_21] [i_22] [i_21] [(unsigned char)8])));
                        arr_77 [i_13] [i_21] = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_13] [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13] [i_13 + 4]))));
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_13 + 4]))) ^ (var_11)))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_23 = 1; i_23 < 7; i_23 += 3) /* same iter space */
    {
        arr_81 [i_23] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_69 [i_23] [i_23 + 1] [i_23]))));
        var_41 = ((/* implicit */unsigned int) var_6);
    }
    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) | (min((((/* implicit */int) var_5)), (((var_15) << (((((/* implicit */int) var_9)) - (32138))))))))))));
}
