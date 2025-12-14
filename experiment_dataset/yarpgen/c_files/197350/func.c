/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197350
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23162))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(signed char)4] [i_1] [i_1] [i_1] [(signed char)4] [i_1]))))) : (((/* implicit */int) arr_3 [i_0 - 2] [i_1])))) : (((/* implicit */int) (unsigned short)42373)))))));
                            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_0])) != (((/* implicit */int) ((min((((/* implicit */long long int) (unsigned short)23162)), (arr_8 [12LL] [12LL] [i_2]))) < (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))));
                            var_13 ^= ((/* implicit */short) (signed char)(-127 - 1));
                        }
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */int) max((4108787684U), (((/* implicit */unsigned int) (unsigned char)112))));
                            arr_17 [i_0] [i_2] [i_3] [(unsigned short)10] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))))));
                        }
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1]))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2890642460U)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((int) var_5))) > (arr_8 [i_0 - 2] [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) (unsigned char)255))));
                        var_16 = ((/* implicit */unsigned long long int) (unsigned char)14);
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((long long int) ((((((/* implicit */int) arr_11 [i_0] [i_0 + 2] [i_0] [i_0 - 1] [i_3] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 3] [i_0] [i_0 - 2] [(_Bool)1] [i_0])) + (111))) - (30)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 4; i_6 < 24; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_6 - 4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)95)) <= (((/* implicit */int) (signed char)-24))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)112)) || (((/* implicit */_Bool) arr_19 [11LL])))))));
                            arr_27 [i_0] [i_0] [i_2] [i_6] [i_7] = ((/* implicit */unsigned short) (+(arr_12 [i_0])));
                            arr_28 [i_0 + 2] = ((/* implicit */long long int) var_3);
                            arr_29 [i_7] [i_6 - 4] [i_2] [i_1] [16ULL] = ((/* implicit */unsigned long long int) arr_12 [i_0 - 2]);
                        }
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) (((+(arr_13 [0U] [i_1] [i_2] [i_6] [i_8]))) == (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0])))))));
                            var_20 = ((/* implicit */_Bool) (-(arr_31 [i_0] [i_1] [i_6 - 4] [i_6] [i_0 + 3] [21ULL])));
                            arr_34 [i_0] [i_1] [i_2] [i_8] [i_8] = ((/* implicit */unsigned int) var_4);
                            var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (arr_10 [i_0]) : (arr_15 [i_0] [i_0])));
                            arr_35 [i_0] [i_8] &= ((/* implicit */int) (+(8298593663694750322LL)));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) (short)10661)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (unsigned char)24)))), (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) max(((short)-19745), (((/* implicit */short) arr_2 [i_0 - 2])))))));
                        arr_39 [i_1] [i_1] [i_2] = ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */int) (signed char)83)) < (((/* implicit */int) (unsigned char)9))))), (arr_19 [i_0 + 2])));
                    }
                    for (short i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                        {
                            arr_45 [i_10] [i_1] = ((/* implicit */long long int) arr_32 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0]);
                            arr_46 [i_0] [i_10] [i_0 + 2] [14ULL] [i_0 + 1] [i_0 + 3] [i_0] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) (short)24257)))))), (max((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_30 [i_0] [i_1] [(signed char)20] [i_1] [i_10] [i_11])))), ((!(((/* implicit */_Bool) (unsigned short)42373))))))));
                            arr_47 [i_0] [i_11] [i_0 - 2] [i_0] [i_0] [i_11] [i_0 + 3] |= ((/* implicit */long long int) min(((+(((((/* implicit */_Bool) arr_24 [i_0 + 1] [i_1] [1LL] [i_0 + 1] [(signed char)16])) ? (1453797115622999118ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_10]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_2 [i_0 + 2]))))) != (var_8))))));
                        }
                        for (short i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
                        {
                            arr_51 [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_0 + 2] [i_0 + 3])) ? (((/* implicit */int) ((unsigned short) 10772201556530479583ULL))) : (((/* implicit */int) min((min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)247)))), (((/* implicit */unsigned short) (short)-17892)))))));
                            var_23 = ((/* implicit */short) arr_15 [15ULL] [(_Bool)1]);
                        }
                        for (short i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) (~((((!((_Bool)1))) ? (max((arr_12 [i_13]), (((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_10] [(unsigned char)10])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (15LL))))))));
                            var_25 = ((/* implicit */unsigned long long int) 4108787689U);
                        }
                        var_26 = ((/* implicit */short) max((((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) (unsigned char)255)))))), (((unsigned short) ((short) (signed char)-81)))));
                    }
                    arr_54 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) min(((short)17892), (((/* implicit */short) (_Bool)1))));
                }
            } 
        } 
    } 
    var_27 += ((/* implicit */signed char) var_8);
    var_28 = ((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((((((/* implicit */int) var_7)) + (2147483647))) >> (((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (unsigned int i_14 = 4; i_14 < 22; i_14 += 2) 
    {
        arr_57 [i_14 + 2] = ((/* implicit */long long int) var_8);
        arr_58 [i_14] [i_14] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */int) arr_7 [i_14])), ((-(((/* implicit */int) (unsigned short)17747)))))));
    }
}
