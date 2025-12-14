/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40145
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    arr_8 [(unsigned short)22] [i_0] [(unsigned short)22] [i_2] |= ((/* implicit */unsigned long long int) ((((long long int) (signed char)-119)) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)12] [(unsigned short)0] [(unsigned short)12])))));
                    arr_9 [i_2] [i_0] [i_2] = ((/* implicit */signed char) arr_4 [20ULL]);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_13 [(_Bool)1] [i_0] [i_2] [i_3] = arr_1 [i_3];
                        var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)118))));
                        arr_14 [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 3] [i_1 + 1])) ? (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (arr_11 [(short)15] [i_0] [i_2] [i_0]))) : (((((/* implicit */_Bool) arr_3 [(signed char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9706))) : (var_14)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            arr_21 [(signed char)13] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                            arr_22 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)54))));
                            var_20 = ((/* implicit */_Bool) ((unsigned short) var_11));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_27 [i_4] [i_1] [i_4] [i_4] [i_6] [i_0] [i_4] = ((/* implicit */short) ((var_18) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                            arr_28 [i_0] [i_0] [i_1 + 1] [i_1 + 4] [i_2] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_6 [i_1 + 3] [i_1 + 4] [i_1 + 3])) : (((((/* implicit */_Bool) (short)32743)) ? (((/* implicit */int) (unsigned short)13234)) : (((/* implicit */int) (signed char)127))))));
                            arr_29 [i_0] [2ULL] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_4 [i_1]) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (short)-32744))));
                        }
                        for (short i_7 = 2; i_7 < 23; i_7 += 1) 
                        {
                            arr_32 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [7ULL] [i_4])) ? (((/* implicit */int) (short)-32744)) : (((/* implicit */int) (unsigned short)15469))))) ? (arr_12 [i_0] [i_0] [i_0] [i_1 - 1]) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32744))) : (0ULL)))));
                            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_31 [i_0]);
                            var_21 = ((/* implicit */int) ((unsigned long long int) arr_7 [i_7 - 2] [i_7 + 1] [i_0]));
                        }
                        arr_34 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_1 - 1]) > (arr_1 [i_1 - 1])));
                        var_22 = ((/* implicit */unsigned short) min((var_22), ((unsigned short)8191)));
                        arr_35 [17ULL] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_4]))));
                    }
                    for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) -7649809848077355912LL)))));
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 2; i_9 < 22; i_9 += 3) 
                        {
                            arr_42 [i_0] [i_0] [(_Bool)1] [i_0] [i_9 + 2] = ((/* implicit */int) ((unsigned long long int) arr_41 [(short)3] [i_1] [i_1] [i_1] [i_1 + 4]));
                            arr_43 [(short)8] [i_8] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */signed char) arr_12 [i_8] [i_8] [i_2] [i_2]);
                        }
                        for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            arr_46 [i_0] [(unsigned char)11] [i_0] [i_10] = ((/* implicit */long long int) ((((arr_36 [i_0] [19] [i_0]) < (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [11] [i_1 - 1] [i_1 - 1] [i_1]))) : (arr_11 [i_1] [i_0] [i_1] [i_1])));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(arr_36 [i_1 + 2] [i_1 + 2] [i_10]))))));
                            arr_47 [i_0] [i_1] [i_2] [(short)15] [i_0] = ((/* implicit */unsigned char) ((arr_37 [i_0]) - (arr_37 [i_0])));
                            arr_48 [i_0] [19ULL] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) arr_16 [i_0] [i_8] [i_0] [5LL])))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            arr_52 [i_0] [i_11] [i_8] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_15);
                            arr_53 [i_2] [i_1] [i_0] [i_8] [i_2] [(short)11] [i_1] = ((arr_3 [22ULL]) ^ (((/* implicit */int) arr_44 [i_1] [i_1 + 2] [i_1 + 4] [i_1 + 2] [20LL] [i_1] [i_1 + 1])));
                            arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_8] [i_11]))))));
                        }
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_12 = 3; i_12 < 21; i_12 += 4) 
                    {
                        arr_57 [i_0] [i_1] [i_2] [i_12] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_12])))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_0])) ? (((/* implicit */int) arr_31 [i_0])) : (((/* implicit */int) arr_18 [i_1 - 1] [21ULL] [i_12]))));
                        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_36 [i_12 - 1] [i_12 - 3] [i_0]))));
                        arr_58 [i_0] [i_2] [i_1 + 3] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)50178))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((unsigned long long int) var_0)))));
                        arr_61 [i_0] [i_1] [i_0] [i_13] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_12))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
                    {
                        arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_1] [i_1 + 3] [i_1 + 2] [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30866))) : (arr_24 [i_1] [i_1 + 3] [i_1 + 2] [i_1 + 3])));
                        var_28 = ((/* implicit */unsigned char) ((arr_12 [i_0] [i_2] [i_1 + 4] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28425)))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) arr_37 [i_0]);
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((arr_1 [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [i_0] [(short)17] [i_0] [(unsigned char)14]))))) ? (((/* implicit */int) arr_19 [i_0] [i_0] [14ULL] [i_15] [i_15] [i_2] [14ULL])) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)124)))))))));
                        arr_69 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_1 + 4] [i_0] [i_0] [i_1 + 4]))));
                    }
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((var_14) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned short)7013)) : (((/* implicit */int) ((((/* implicit */int) arr_55 [i_0] [2ULL])) != (((/* implicit */int) arr_38 [i_0] [(_Bool)1] [i_2] [i_2]))))))))));
                }
                for (short i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
                {
                    arr_73 [i_0] [7LL] [i_16] [i_16] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_1 + 4] [i_1 + 3])) ? (-7649809848077355889LL) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_1 + 2] [i_1 + 2]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_65 [i_1 - 1] [i_1 + 3])) / (((/* implicit */int) arr_65 [i_1 + 4] [i_1 + 4])))))));
                    arr_74 [i_0] [i_16] = ((/* implicit */signed char) arr_70 [i_16] [(_Bool)1] [(_Bool)1]);
                }
                for (short i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                {
                    arr_77 [i_1] [i_1] [i_0] [12LL] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_1 + 2] [i_1 + 3] [i_1 + 4]))) + (var_0))) - (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_17])))));
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_80 [i_0] = ((/* implicit */signed char) max(((~(((long long int) arr_59 [i_0])))), (((/* implicit */long long int) (_Bool)1))));
                        arr_81 [i_0] = arr_75 [i_0] [i_0] [i_17] [i_18];
                        var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35625))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [(short)1] [i_18]))) * (var_11)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned short)4])))))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_2))))))) ? ((-(((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 + 2])))) : (1337740875)));
                    }
                }
                arr_82 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) - (((((/* implicit */int) (signed char)-58)) - (arr_3 [i_0])))))) ^ (max((var_0), (arr_79 [i_0] [i_0] [i_0] [(unsigned char)17])))));
                var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 6648051582011437716ULL))))) > (((/* implicit */int) max((arr_44 [i_1 + 4] [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]), (arr_44 [i_1 - 1] [i_1] [(signed char)18] [i_0] [22] [(short)9] [i_0]))))));
            }
        } 
    } 
    var_35 = 13460542954570483101ULL;
}
