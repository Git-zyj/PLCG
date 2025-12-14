/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224522
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((+((~(11164402671277924338ULL))))) : (((/* implicit */unsigned long long int) var_7)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (var_16)))) ? (((((/* implicit */_Bool) arr_1 [9])) ? (1179461635U) : (((/* implicit */unsigned int) var_8)))) : ((-(var_16)))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-((~(2748229360U)))));
        var_21 = ((/* implicit */unsigned short) (-(1546737951U)));
        arr_3 [5] = ((/* implicit */int) (-(arr_1 [i_0])));
    }
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_22 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54))) : (15ULL))))))), (((1546737953U) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-7)) || (((/* implicit */_Bool) 9267358410487069151ULL)))))))));
        var_23 = ((((/* implicit */_Bool) (-(arr_5 [i_1 + 2] [i_1 - 1])))) ? (min((18446744073709551608ULL), (((/* implicit */unsigned long long int) (short)-1)))) : (((/* implicit */unsigned long long int) ((int) arr_5 [i_1 + 1] [i_1 + 2]))));
    }
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
    {
        var_24 -= ((/* implicit */unsigned long long int) arr_7 [i_2 + 3]);
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (unsigned short i_5 = 3; i_5 < 23; i_5 += 1) 
                {
                    {
                        arr_15 [i_2 + 3] &= ((/* implicit */signed char) (-(min(((-(var_16))), (((/* implicit */unsigned int) 1031540216))))));
                        arr_16 [i_2] [i_2] [i_4] [13ULL] = ((/* implicit */int) (signed char)-76);
                        arr_17 [0] [i_2 + 3] [0] [0] [i_2 + 3] [(unsigned char)14] = ((/* implicit */long long int) (signed char)-69);
                        var_25 = (~((((~(arr_4 [i_5]))) + (((((/* implicit */_Bool) arr_4 [11])) ? (((/* implicit */int) var_14)) : (var_8))))));
                    }
                } 
            } 
            var_26 = ((((/* implicit */_Bool) ((unsigned char) (+(2748229326U))))) ? (((unsigned long long int) (short)32740)) : (((/* implicit */unsigned long long int) ((int) 1546737957U))));
        }
        for (int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned long long int) 2748229364U);
            var_28 += ((/* implicit */int) (short)-12);
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 2) 
            {
                arr_25 [17] [17] [17] [17] = ((/* implicit */short) (unsigned char)58);
                arr_26 [i_2 + 2] [6LL] [22] = ((unsigned int) -118835050);
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    var_29 *= ((/* implicit */unsigned char) ((arr_5 [i_2 + 2] [i_2 + 3]) > (arr_5 [i_2 + 2] [i_2 + 2])));
                    var_30 = ((/* implicit */int) (unsigned char)240);
                    var_31 = ((/* implicit */short) ((int) 17063536546027552047ULL));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    var_32 ^= ((/* implicit */unsigned short) (+(131008U)));
                    /* LoopSeq 4 */
                    for (long long int i_10 = 2; i_10 < 23; i_10 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) arr_8 [i_2 + 1] [i_2]))));
                        arr_33 [5] [i_7 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) 8416915365173661800ULL)) ? (337918849682636629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1)))));
                        arr_34 [(short)2] [i_6] [(short)2] [22] [i_10 + 1] [i_6] [(unsigned char)9] |= ((/* implicit */short) ((int) var_12));
                    }
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_7 + 1] [i_2 + 1]))));
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 1203673399))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)384))) : (268435454U))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        var_36 -= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)29))))));
                        var_37 = ((/* implicit */unsigned long long int) ((arr_18 [i_7 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_29 [0] [0])) >= (1869750063)))))));
                    }
                    for (unsigned int i_13 = 1; i_13 < 23; i_13 += 1) 
                    {
                        arr_41 [i_2 + 2] [i_2 + 2] [i_7 - 1] [20ULL] [i_13 - 1] = ((/* implicit */short) (-(((/* implicit */int) arr_29 [i_2 + 2] [i_6]))));
                        arr_42 [i_2 + 1] [i_6] [(signed char)12] [i_9] [i_2 + 1] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned char) ((arr_40 [i_2 + 3] [i_6] [8ULL] [i_9] [(unsigned char)1]) & (arr_24 [15])));
                    }
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1044299536)) ? (arr_28 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2 + 2] [i_6])))))) ? (-1) : (((/* implicit */int) ((unsigned short) arr_14 [i_2] [i_2] [i_2] [i_2 + 3]))))))));
                }
                for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                    {
                        var_39 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_32 [i_15] [i_15] [i_14 + 1] [i_14 - 1] [10ULL] [i_7 + 1]))));
                        var_40 ^= ((/* implicit */signed char) ((arr_21 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) <= (arr_21 [i_7] [i_7 - 1] [17] [i_7 + 1])));
                        arr_48 [i_15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_46 [i_2 - 1] [(unsigned short)6] [i_2 - 1] [i_14 + 1] [16]))));
                    }
                    for (int i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned short) ((((int) 3359199471U)) == (((/* implicit */int) (unsigned short)62568))));
                        arr_51 [i_16] [8] [3] [i_7 + 1] [i_6] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_27 [i_6] [i_6] [i_14 + 2] [19U] [i_14 + 2])))) ? (max((arr_27 [i_2] [i_2] [i_2] [i_6] [i_14 - 1]), (arr_27 [i_6] [i_6] [i_6] [i_6] [i_14 - 1]))) : (min((arr_27 [i_2 + 2] [8] [i_6] [(unsigned char)6] [i_14 + 2]), (arr_27 [20ULL] [12ULL] [20ULL] [(unsigned char)12] [i_14 + 3])))));
                    }
                    arr_52 [(unsigned char)22] [(unsigned char)22] [(unsigned char)4] [(unsigned char)22] = ((((/* implicit */int) ((unsigned char) (unsigned char)229))) >> ((((-(arr_45 [i_2 + 2] [15ULL] [i_6] [5U] [i_14 + 1]))) + (1146773169))));
                    /* LoopSeq 3 */
                    for (int i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) var_9);
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_14])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30474))) >= (935767836U)))) : (arr_4 [18])));
                        var_44 = ((/* implicit */unsigned short) min((((/* implicit */long long int) 837128062U)), (6056075710132736554LL)));
                        var_45 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) (~(4294836300U)))) + (((unsigned long long int) arr_22 [i_2 - 1] [i_6] [i_6] [i_6]))))));
                    }
                    for (int i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        var_46 -= ((/* implicit */unsigned char) (-((~(4294836289U)))));
                        var_47 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 131032U))) ? (((/* implicit */long long int) arr_37 [i_14 + 2] [14ULL] [(short)10] [(short)10])) : (min((((/* implicit */long long int) 4294836264U)), (var_1)))))) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 6ULL)) && (((/* implicit */_Bool) arr_37 [i_2 + 2] [(short)11] [1ULL] [i_18]))))))));
                        arr_57 [i_2] [10] [i_2 - 1] [i_2 + 2] [10] = 18446744073709551599ULL;
                        arr_58 [i_18] [1] [5] [1] [(unsigned short)8] = min((131001U), (((/* implicit */unsigned int) ((arr_32 [i_14 + 3] [i_14 + 3] [i_7 - 1] [22] [i_18] [2ULL]) < (((/* implicit */int) (short)-32763))))));
                        arr_59 [13] [13] [13] [i_14 + 3] [13] [i_14 + 3] [i_14 + 1] |= (-(2472013954025064408ULL));
                    }
                    for (unsigned char i_19 = 3; i_19 < 22; i_19 += 2) 
                    {
                        arr_62 [i_2 + 1] [i_6] [i_2 + 1] [i_14 - 1] [20U] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) arr_8 [i_7 - 1] [i_7 - 1]))) > (min((2490930124325794417ULL), (14ULL)))));
                        arr_63 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) 1538961849))) && (((/* implicit */_Bool) arr_35 [i_14 + 3] [i_14 + 3] [i_14 + 3] [i_14 + 3] [15] [i_14 + 3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_2 - 1] [i_14 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 14448032436263136363ULL))))) : (((/* implicit */int) (short)-32758)))))));
                    }
                }
            }
            /* LoopSeq 1 */
            for (int i_20 = 1; i_20 < 22; i_20 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_21 = 2; i_21 < 23; i_21 += 1) 
                {
                    arr_68 [i_21] [15] [(unsigned char)15] [i_21 - 1] = ((/* implicit */unsigned char) ((131030U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(signed char)1] [(signed char)1] [5])))));
                    arr_69 [i_2 + 2] [i_2 + 2] [(unsigned char)1] [i_21] [(short)7] = (unsigned short)43075;
                    arr_70 [i_2] [i_21] [1LL] = 532575944704ULL;
                    var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 2147483647))) ? (min((arr_56 [i_2 - 1] [i_2 - 1] [i_20 + 2] [i_20 + 1]), (arr_56 [i_6] [i_2 + 3] [10] [i_20 + 2]))) : (((arr_66 [i_2] [i_20 + 2] [i_20 + 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55)))))));
                }
                arr_71 [i_2] [3ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))) <= (((((/* implicit */_Bool) arr_31 [i_2] [i_6] [i_20 + 2])) ? (arr_13 [i_2 + 1]) : (((/* implicit */unsigned long long int) 4294836288U)))))) ? (min((((/* implicit */unsigned int) ((int) arr_22 [22] [i_2] [19] [i_2]))), (((130980U) + (arr_22 [(short)5] [i_6] [i_20 - 1] [i_2 + 1]))))) : (min((((/* implicit */unsigned int) ((int) 130999U))), (arr_22 [i_2 + 3] [i_2 + 3] [i_20 - 1] [i_20 + 2])))));
                arr_72 [i_2 + 2] [i_6] [i_6] [(short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-65)) || (((/* implicit */_Bool) 13325074612984081049ULL))));
            }
        }
    }
    var_49 = ((/* implicit */unsigned char) 532676608U);
    var_50 = ((/* implicit */unsigned long long int) min(((((!(((/* implicit */_Bool) (signed char)-37)))) ? (4294836311U) : (426944665U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_17)))))));
}
