/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41959
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
    var_11 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_6 [i_2] = ((/* implicit */long long int) ((var_1) << (((((/* implicit */int) (signed char)-122)) + (136)))));
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned short) ((int) arr_5 [i_1] [i_0 - 1] [i_0 - 1] [i_1]));
                }
                /* vectorizable */
                for (long long int i_3 = 4; i_3 < 22; i_3 += 4) /* same iter space */
                {
                    arr_11 [13LL] [i_1] [(unsigned short)3] = ((/* implicit */short) arr_9 [i_0 - 1]);
                    arr_12 [3U] [i_0] [3U] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [20ULL] [i_0 - 1])) ? (((/* implicit */long long int) arr_5 [i_3] [i_0] [i_3] [i_0 - 1])) : (var_6)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 3; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_17 [i_1] [(signed char)14] [(signed char)14] [(unsigned char)22] [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)57139)))) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) (unsigned short)52419))));
                                arr_18 [i_5] [i_4] [i_5] [i_5] [i_1] [i_0] = ((((/* implicit */int) arr_9 [i_3])) << (((((/* implicit */int) (short)32767)) - (32751))));
                            }
                        } 
                    } 
                }
                for (long long int i_6 = 4; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    arr_23 [i_6] [i_1] [i_0] [i_0 - 1] = ((/* implicit */int) var_2);
                    arr_24 [i_1] [i_1] [9LL] [i_1] = ((/* implicit */long long int) max(((~(var_0))), (((((/* implicit */_Bool) (short)-32767)) ? (min((((/* implicit */unsigned long long int) var_9)), (18446744073709551597ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_6 - 4])) && (((/* implicit */_Bool) (unsigned char)81))))))))));
                    arr_25 [i_6 - 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)127), ((signed char)122))))) : (-7499457109278757018LL)));
                }
                arr_26 [i_0] = ((/* implicit */unsigned long long int) (short)32762);
                /* LoopSeq 4 */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                arr_35 [i_0] [i_8] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_32 [2] [2] [2] [10ULL] [i_9]);
                                arr_36 [i_0] [i_0] [i_7] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_20 [(unsigned char)10] [i_1] [i_0 + 1]), (((/* implicit */unsigned short) var_7))))) ? (((((/* implicit */int) arr_29 [i_0] [i_1] [i_9])) / (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_0 [11ULL])) ? (((((/* implicit */_Bool) arr_32 [i_9] [i_8] [(short)4] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)50139)) : (((/* implicit */int) (unsigned short)50139)))) : (((/* implicit */int) max((arr_33 [(_Bool)1] [i_1] [i_7] [i_8] [i_1] [i_9]), (var_5))))))));
                            }
                        } 
                    } 
                    arr_37 [i_0] [(unsigned short)16] [6ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)50161)) : (((/* implicit */int) (signed char)84))));
                    arr_38 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0 - 1] [i_7])) ? ((~(arr_5 [i_1] [i_1] [i_0 - 1] [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50125)))))))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_41 [(_Bool)1] [i_1] [i_10] [11LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_6)))))))) ? (arr_10 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)102)))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 2) 
                        {
                            {
                                arr_48 [i_0] [i_1] [i_10] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */short) var_4)), (arr_29 [i_0 - 1] [i_0 - 1] [i_0 + 1])))), ((+(var_9)))));
                                arr_49 [i_0] [i_0] [i_10] [i_11] [(short)19] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_13 [i_1] [i_10] [i_11]), (((/* implicit */unsigned short) arr_46 [i_0] [i_1] [i_10] [i_1] [i_10] [i_11] [i_12]))))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))))));
                                arr_50 [i_0] [i_1] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)92)) ? ((~(((/* implicit */int) (signed char)-93)))) : (((((/* implicit */int) arr_1 [i_12])) ^ (((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                    arr_51 [i_0] = arr_33 [i_0] [i_0] [17LL] [i_0] [i_0] [i_0];
                }
                /* vectorizable */
                for (int i_13 = 4; i_13 < 21; i_13 += 3) 
                {
                    arr_54 [i_13] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)11916))))) ? ((~(arr_27 [i_1] [(unsigned char)14] [i_13 - 2]))) : (((/* implicit */unsigned long long int) arr_31 [5U] [i_1] [i_1] [5U] [5ULL]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        arr_57 [i_13] = ((/* implicit */short) var_3);
                        arr_58 [(_Bool)1] [(short)3] [(_Bool)1] [i_13] = ((/* implicit */unsigned short) arr_56 [i_13] [i_0 + 1] [i_1] [i_13 - 2]);
                        arr_59 [i_13] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_13 + 2] [i_13] [i_13] [i_13] [i_13] [i_13 + 2])) ? (arr_16 [i_0 - 1] [i_13 + 1] [i_14] [i_14] [i_14] [0] [14ULL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15397)))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
                    {
                        arr_62 [i_0] [i_0] [i_13] [i_13] = ((/* implicit */unsigned char) (~(var_10)));
                        arr_63 [i_0] [(unsigned char)20] [i_13 - 4] [i_1] = ((/* implicit */unsigned char) ((unsigned short) var_6));
                        arr_64 [i_0] [i_0] [i_13] [i_0] [i_15] = ((/* implicit */unsigned short) arr_14 [i_0] [i_0 - 1] [i_0 + 1]);
                        arr_65 [i_15] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) (-(arr_0 [i_0 + 1])));
                        arr_66 [i_13] = ((((/* implicit */_Bool) (unsigned short)50141)) ? (((/* implicit */int) arr_33 [i_13 - 2] [i_13 + 2] [i_13 + 1] [(signed char)1] [i_13 - 1] [i_13 - 3])) : (((/* implicit */int) arr_33 [i_13 - 4] [i_13 + 1] [i_13 + 2] [i_13 - 1] [i_13] [i_13 - 4])));
                    }
                }
                /* vectorizable */
                for (unsigned char i_16 = 3; i_16 < 20; i_16 += 4) 
                {
                    arr_69 [(signed char)20] [(signed char)20] [(signed char)20] [(signed char)20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)230)) : ((-(((/* implicit */int) (unsigned short)28266))))));
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 3) 
                        {
                            {
                                arr_77 [20LL] [6LL] [i_16] [i_17] [i_16] = ((/* implicit */signed char) arr_0 [i_0 + 1]);
                                arr_78 [i_0] [i_0 - 1] [i_0] [i_16] [12] [i_17] [i_18] = ((/* implicit */long long int) (((-(var_1))) >> (((((long long int) arr_13 [i_16 + 1] [i_1] [i_16])) - (26388LL)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
