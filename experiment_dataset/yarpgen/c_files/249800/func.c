/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249800
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
    var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((((/* implicit */int) var_2)) + (var_11))) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (signed char)-25)))) : (var_11)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)208)) >> (max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) <= (((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
        {
            arr_7 [7LL] [i_0] = (-(((((/* implicit */_Bool) var_12)) ? (((arr_4 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))));
            var_18 = ((/* implicit */signed char) max(((-(((long long int) arr_0 [12ULL])))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)25)))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) (~(arr_6 [i_0 + 2] [i_1 + 1])));
            arr_9 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */short) max((var_5), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_1 - 1])), (-5761860114310959221LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))) : (((/* implicit */int) arr_2 [i_0])))))));
            var_19 &= ((/* implicit */int) ((arr_5 [8LL]) < (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)26)) / (-601952459))))));
        }
        /* vectorizable */
        for (short i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
        {
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_8) : (((/* implicit */int) (unsigned char)162))))) ? (((arr_2 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_2])))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_10 [i_2]))))));
            arr_14 [0] |= ((/* implicit */unsigned short) var_11);
            arr_15 [i_0] = ((unsigned char) arr_11 [i_0 + 1] [i_0]);
            /* LoopSeq 3 */
            for (unsigned int i_3 = 2; i_3 < 18; i_3 += 2) 
            {
                arr_18 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) 1952422095963175135LL);
                /* LoopSeq 3 */
                for (int i_4 = 3; i_4 < 19; i_4 += 3) 
                {
                    arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_4 + 1] [i_2] [i_2] [i_2 + 3] [i_2])) && (((/* implicit */_Bool) (unsigned char)3))));
                    arr_23 [i_3] [i_3] [i_3] [i_4] |= ((/* implicit */unsigned short) (short)9255);
                }
                for (short i_5 = 2; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    arr_27 [i_3] [i_3] [i_3] [(short)0] &= ((/* implicit */_Bool) var_9);
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) (~(arr_5 [i_0])));
                        arr_30 [i_0] [i_2] [i_2 + 1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_0])))) ? (((/* implicit */int) ((arr_29 [i_0] [i_2] [i_6]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-9238)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) <= (arr_5 [i_0]))))));
                        arr_31 [i_0] [i_2 + 4] [i_0] [i_2 + 4] [i_2] = arr_26 [i_0 + 1] [i_3 + 3];
                        arr_32 [i_0] [i_2] [i_0] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(signed char)2] [i_5] [i_2] [i_0 + 1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_6]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42678))) - (18446744073709551615ULL)))));
                        arr_33 [i_0] [i_2 + 4] [i_3] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_26 [i_3] [i_5]);
                    }
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                    {
                        arr_36 [i_5] [i_2 + 3] [i_3] [i_5 + 1] [i_7] &= var_10;
                        arr_37 [i_0] = ((/* implicit */unsigned char) var_7);
                        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-20)) + (2147483647))) >> (((((/* implicit */int) (short)23398)) - (23382)))));
                        arr_38 [(signed char)4] [i_5] [i_0] = ((/* implicit */unsigned short) arr_35 [i_0 - 1] [i_5] [(unsigned short)19] [i_3] [i_0]);
                    }
                }
                for (short i_8 = 2; i_8 < 18; i_8 += 2) /* same iter space */
                {
                    arr_43 [i_0 + 3] [i_0] [i_3 + 3] [i_8] = ((/* implicit */unsigned char) arr_35 [i_0] [i_2] [i_2] [(unsigned char)5] [i_0]);
                    arr_44 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_3] [i_3 - 2] [(signed char)12] [i_3 - 2])) || (((/* implicit */_Bool) arr_19 [i_3] [i_3 + 3] [i_3] [i_3 + 3]))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_3 - 1] [i_3] [i_3 + 3] [17LL])) && (((/* implicit */_Bool) -9223372036854775807LL))));
                }
            }
            for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                arr_47 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)-29281))));
                var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_41 [i_0] [(signed char)2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_9])) && (((/* implicit */_Bool) (short)-11339))))) : (((/* implicit */int) ((((/* implicit */_Bool) 3619272697U)) || (((/* implicit */_Bool) (unsigned short)11116)))))));
                var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) 65534U)) ? (((/* implicit */int) (short)20446)) : (((/* implicit */int) (unsigned char)255))));
            }
            for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    arr_53 [i_0] [i_0] = ((/* implicit */int) arr_34 [i_0 - 1] [i_2 + 4] [i_0 - 1] [i_11] [i_11] [i_11] [i_10 - 1]);
                    arr_54 [i_0 + 3] [(signed char)0] [i_2] [i_2] [(unsigned char)12] [i_11] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_10 + 1] [i_2 - 1] [i_10] [i_10 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_10 - 1] [i_2 + 2] [i_10] [i_10]))) : (-6218465773408164810LL)));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 3; i_12 < 19; i_12 += 1) 
                    {
                        arr_57 [i_0] [i_0] [i_10] [15] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32746)) ? (-9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-27)))));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))) : (var_14)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
                    {
                        arr_61 [i_0] [i_0] = ((/* implicit */unsigned char) arr_40 [i_0] [i_2] [i_2 - 1] [8] [i_2 - 1] [i_2]);
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) 9986559062521579512ULL))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) ((arr_59 [i_0] [i_11] [i_11] [i_10] [i_2] [i_0]) & (arr_59 [i_0] [i_2] [i_10] [i_11] [i_0] [i_0])));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_16))));
                    }
                }
                var_29 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-75)) & (((/* implicit */int) (unsigned char)93)))))));
                /* LoopSeq 1 */
                for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    var_30 |= ((/* implicit */int) ((((/* implicit */int) (unsigned char)92)) != (((/* implicit */int) var_10))));
                    var_31 = ((/* implicit */unsigned char) (short)-11339);
                    arr_66 [i_0] [i_2 + 2] [i_0] = ((/* implicit */int) ((arr_29 [i_0] [i_10] [i_15]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [18LL] [i_2 + 4] [i_2 + 4] [i_2] [i_2] [i_2] [i_2])))));
                }
                var_32 |= ((/* implicit */unsigned short) var_5);
            }
        }
    }
    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) 
    {
        var_33 = ((/* implicit */unsigned int) max((var_33), (max((((/* implicit */unsigned int) min((arr_19 [i_16] [i_16] [i_16] [i_16]), (arr_19 [i_16] [i_16] [i_16] [i_16])))), (((((/* implicit */_Bool) arr_19 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_16] [i_16] [i_16] [i_16]))) : (var_14)))))));
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_16] [i_16]))) : (arr_64 [i_16])))) >= (var_15)))) : (((/* implicit */int) var_1))));
        arr_71 [i_16] = ((((((/* implicit */_Bool) (short)2795)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (signed char)-121)))) - (((/* implicit */int) arr_60 [i_16] [3] [i_16] [i_16] [i_16] [i_16] [i_16])));
    }
    var_35 = ((/* implicit */short) var_7);
}
