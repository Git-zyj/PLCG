/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4770
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
    var_19 = (~(var_2));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) max(((short)12421), ((short)7290))))))) ? (((/* implicit */int) (short)-26917)) : (((/* implicit */int) (unsigned char)72))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) var_3);
        var_22 ^= ((((/* implicit */_Bool) var_13)) ? (1082130201) : (((/* implicit */int) ((((/* implicit */int) arr_0 [(short)9])) == (((/* implicit */int) (unsigned short)29787))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_23 = ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) != (var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29787))) : (1990644886U))) << (((max((((/* implicit */unsigned long long int) arr_2 [(unsigned char)8])), (123384024176168766ULL))) - (123384024176168753ULL))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (((+(2304322407U))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))) >> (((18210971423336012513ULL) - (18210971423336012492ULL)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29796))) + (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [5LL]))) - (arr_7 [i_2]))), (2304322407U)))));
            var_26 = ((/* implicit */unsigned char) max((min((min((arr_5 [i_2]), (((/* implicit */unsigned int) (unsigned short)22974)))), (((2304322407U) + (var_1))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_8 [i_3]))))) + (((/* implicit */int) arr_2 [i_2])))))));
            var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) > (((2606059594U) + (1990644880U))))))) : (11915745515358088644ULL)));
        }
        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            var_28 = ((/* implicit */signed char) var_2);
            arr_13 [12] = arr_5 [i_2];
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((1990644886U), (((/* implicit */unsigned int) -1))))) * (((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */unsigned long long int) 4294967268U)) : (11915745515358088643ULL)))));
                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10111)) << (((var_2) - (18418153689025114183ULL)))));
                arr_18 [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) (signed char)118);
            }
            for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    arr_24 [9LL] [9LL] [(unsigned short)10] [i_7] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4 + 2] [i_4 + 2] [i_4 + 3]))) : (arr_11 [i_4 - 1] [i_4 + 2])));
                    var_30 += ((/* implicit */unsigned short) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        var_31 &= ((/* implicit */int) ((((arr_14 [(_Bool)1] [(_Bool)1] [i_6] [i_6]) - (((/* implicit */unsigned long long int) var_5)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [(_Bool)1] [i_2])))));
                        arr_28 [i_2] [i_2] [i_6] [i_4 + 1] [i_8] [i_8] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_7 [i_2]))))) : (((((/* implicit */_Bool) 1990644886U)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (unsigned short)65532))))));
                        var_32 = ((/* implicit */unsigned int) (-(9223372036854775807LL)));
                    }
                }
                for (int i_9 = 2; i_9 < 11; i_9 += 2) 
                {
                    /* LoopSeq 4 */
                    for (int i_10 = 1; i_10 < 13; i_10 += 3) 
                    {
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) arr_7 [i_2]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532))) : (arr_7 [i_2]))) : (((((/* implicit */_Bool) 8)) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_10] [i_10])))))));
                        var_34 |= ((/* implicit */short) (+(((max((arr_27 [(_Bool)1] [i_4 + 3] [i_4 + 3]), (((/* implicit */unsigned long long int) (_Bool)1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)0), (((/* implicit */short) (_Bool)1))))))))));
                    }
                    for (unsigned int i_11 = 3; i_11 < 11; i_11 += 2) /* same iter space */
                    {
                        arr_38 [i_2] [i_2] [i_2] = (-(arr_26 [i_2] [i_2] [i_2] [8U] [i_2]));
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((((/* implicit */int) (short)-524)) + (2147483647))) << (((9223372036854775807LL) - (9223372036854775807LL))))))));
                        arr_39 [i_2] [i_2] [i_2] [5LL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_29 [i_2] [(unsigned short)9] [i_4 + 1] [i_6] [i_9 + 2] [i_11]);
                    }
                    for (unsigned int i_12 = 3; i_12 < 11; i_12 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [i_9 + 1] [i_4 + 3])))) ? (2606059594U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_12] [i_2])))));
                        var_37 = ((/* implicit */int) max((max((var_6), (((/* implicit */unsigned long long int) arr_34 [i_4] [i_4] [(short)1] [i_4 + 1] [i_4 + 3])))), (max((((var_6) >> (((var_6) - (14057570908501301358ULL))))), (((/* implicit */unsigned long long int) (+(arr_20 [i_4] [i_4]))))))));
                        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_23 [i_4] [i_6] [i_9] [i_12])) / (-2)))))) || (((/* implicit */_Bool) arr_22 [i_4 - 1] [(unsigned char)6] [i_9 + 2])))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 3; i_13 < 11; i_13 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned short) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2]);
                        var_40 ^= ((/* implicit */unsigned int) ((((arr_32 [i_6] [(unsigned short)10] [i_9] [i_4 + 1]) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (1LL))) + (30085LL)))));
                    }
                    var_41 = ((/* implicit */unsigned long long int) max((var_41), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_2] [i_2] [i_4] [i_4] [i_9 - 1]))) ^ (var_14)))));
                }
                var_42 = ((/* implicit */short) (~(4094931670U)));
                var_43 = ((/* implicit */short) ((var_6) < (((/* implicit */unsigned long long int) arr_10 [4U]))));
                var_44 |= ((/* implicit */unsigned char) var_13);
            }
            var_45 = 1;
            var_46 = ((/* implicit */short) min((((/* implicit */int) (short)-23365)), (((((/* implicit */int) (unsigned char)203)) / (((((/* implicit */_Bool) arr_14 [5ULL] [i_4] [i_4] [i_4])) ? (189871553) : (((/* implicit */int) arr_43 [6U] [i_4] [i_4 + 1]))))))));
        }
        var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2] [i_2])) * (((((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_2] [i_2])) - (((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [(unsigned char)9] [i_2])))))))));
    }
    for (short i_14 = 0; i_14 < 24; i_14 += 2) 
    {
        arr_47 [i_14] |= ((((/* implicit */_Bool) 6530998558351462982ULL)) ? (((/* implicit */int) ((var_18) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) : (2));
        arr_48 [(short)20] = ((/* implicit */unsigned char) arr_45 [i_14] [i_14]);
    }
    var_48 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19)) - (((/* implicit */int) (unsigned short)36091))));
    var_49 = ((/* implicit */unsigned char) var_13);
}
