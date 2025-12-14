/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220569
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned short) var_14))), (arr_2 [i_0] [i_0])));
        var_20 &= ((/* implicit */long long int) ((unsigned char) var_16));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_21 *= ((/* implicit */unsigned short) max((arr_1 [i_0]), (((/* implicit */long long int) ((unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)4547))))))));
            var_22 *= (short)4531;
        }
    }
    for (short i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_23 = arr_11 [i_2] [i_2] [(short)0];
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] &= ((((/* implicit */_Bool) (unsigned short)7)) ? (((arr_9 [i_2] [i_2] [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) min(((short)4546), (arr_0 [20] [4LL])))))));
                        var_24 = ((/* implicit */unsigned int) (short)4546);
                    }
                    for (unsigned int i_7 = 1; i_7 < 22; i_7 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (var_17)));
                        var_26 ^= ((/* implicit */unsigned int) (unsigned short)65535);
                    }
                    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        arr_23 [i_5] [i_5] [i_5] [11] [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)5)))) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4] [i_4])))))));
                        var_27 ^= min((((/* implicit */long long int) ((((/* implicit */int) var_16)) >> (((var_2) - (388230644U)))))), ((~(min((arr_16 [i_2] [i_3] [i_2] [i_4] [i_5] [i_8]), (((/* implicit */long long int) arr_4 [i_2] [i_3] [12LL])))))));
                        arr_24 [i_5] [i_8] |= ((/* implicit */short) (+(((/* implicit */int) var_16))));
                    }
                    var_28 ^= ((((/* implicit */_Bool) (short)4546)) ? (((/* implicit */int) (unsigned short)65505)) : (((/* implicit */int) (unsigned short)65526)));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) var_10);
                        arr_27 [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_7 [i_2]) ^ (var_18)));
                    }
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                    {
                        arr_30 [i_10] [i_2] [i_2] [i_5] [5U] [i_5] &= ((/* implicit */long long int) ((-5813136662826764474LL) > (var_7)));
                        var_31 = var_4;
                        var_32 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2147483647)))) ? ((-((+(arr_14 [i_2] [(short)9] [i_5]))))) : (arr_1 [i_4])));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                    {
                        var_33 = ((var_17) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_2]))));
                        var_34 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-4531))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned int) arr_0 [(unsigned short)3] [i_5]);
                        arr_36 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)12833)) && (((/* implicit */_Bool) 9223372036854775807LL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_32 [i_2] [i_3] [i_4] [i_5] [20U] [i_12]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-5))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? ((-(10LL))) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)33655)), (arr_17 [9LL] [i_5]))))))));
                        var_36 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_29 [i_5] [18U] [i_5] [i_5] [i_5])) ? (arr_15 [i_12] [i_12] [i_12] [i_5] [i_12]) : (((/* implicit */long long int) var_2)))) + (((/* implicit */long long int) (+(arr_34 [i_2] [(short)9] [(short)9] [i_5] [i_12]))))))) ? (((unsigned int) ((unsigned int) arr_1 [i_12]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (arr_9 [i_2] [i_2] [i_5]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)3)) ? (var_14) : (((/* implicit */int) var_0)))))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
                    {
                        arr_41 [i_2] [i_2] [i_2] [(_Bool)1] [9U] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned int) (-(((((/* implicit */_Bool) (signed char)21)) ? (arr_15 [i_2] [i_3] [i_3] [i_3] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_19))))))));
                        var_37 = ((/* implicit */unsigned int) ((unsigned long long int) 4294967295U));
                    }
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
                    {
                        var_38 = ((long long int) (-(((((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_3] [i_5] [i_14] [i_14])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (-508554303)))));
                        arr_46 [i_2] [i_2] [i_2] [i_2] [i_14] = ((/* implicit */unsigned int) arr_29 [i_5] [i_5] [i_4] [i_3] [i_2]);
                    }
                }
                for (unsigned int i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) arr_29 [10LL] [i_4] [i_4] [i_3] [15])))));
                    var_40 ^= ((/* implicit */unsigned short) 0U);
                }
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
                {
                    arr_51 [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_31 [i_3]) | (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_2] [5LL] [i_2] [i_2])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26777)))))));
                    var_41 |= arr_32 [i_2] [i_2] [i_2] [i_2] [19LL] [i_2];
                    var_42 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_15 [i_2] [i_3] [i_2] [i_4] [i_16])))));
                    arr_52 [i_16] [i_4] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (short)26775);
                }
                /* vectorizable */
                for (unsigned int i_17 = 0; i_17 < 23; i_17 += 3) /* same iter space */
                {
                    arr_57 [i_2] [i_3] [12] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31110)) || (((/* implicit */_Bool) arr_9 [(unsigned char)3] [i_3] [i_2]))))) : (((/* implicit */int) (signed char)104))));
                    /* LoopSeq 4 */
                    for (unsigned char i_18 = 3; i_18 < 22; i_18 += 3) 
                    {
                        arr_60 [i_4] [i_18 - 2] = ((/* implicit */int) var_2);
                        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((arr_20 [i_18 - 1] [i_18 - 2] [i_18 + 1] [i_18 - 2] [i_18 + 1] [i_18 - 1] [i_18 - 2]) | (((/* implicit */long long int) arr_25 [i_2] [i_2] [i_18 - 2] [i_2] [(signed char)6])))))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 23; i_19 += 1) 
                    {
                        var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_17))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_19))))) : (arr_48 [i_2] [7U] [i_17] [i_17] [i_19])));
                        var_45 = ((/* implicit */long long int) var_13);
                        var_46 = ((/* implicit */unsigned int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_43 [i_2] [i_3] [i_4] [i_17]))));
                    }
                    for (unsigned int i_20 = 3; i_20 < 21; i_20 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned short) ((short) var_13));
                        var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) var_10))));
                    }
                    for (int i_21 = 0; i_21 < 23; i_21 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_13)))))))));
                        arr_69 [15U] [i_3] [i_4] [i_17] [i_17] [i_4] = ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) (+(((/* implicit */int) var_16)))))));
                        arr_70 [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 6671961078751324195ULL)))))) : (var_2)));
                    }
                }
            }
            for (signed char i_22 = 0; i_22 < 23; i_22 += 4) 
            {
                arr_75 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_54 [i_22] [i_22] [9LL] [i_2] [i_2])))))));
                arr_76 [i_2] [i_3] [i_22] |= ((/* implicit */short) (-(((/* implicit */int) var_12))));
                var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) ((min((arr_2 [i_2] [i_3]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [12LL] [21ULL]))))))) != (((/* implicit */long long int) var_17)))))));
                arr_77 [i_2] [i_3] [i_22] [i_22] = ((/* implicit */long long int) (-(arr_48 [(unsigned char)13] [i_3] [i_22] [0] [0U])));
            }
            var_51 = ((/* implicit */int) min((var_51), (((((/* implicit */_Bool) arr_72 [i_3] [12LL] [i_3] [14])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (short)-4548)))))))) : (var_14)))));
            arr_78 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-9))));
            arr_79 [i_2] [i_3] [i_3] |= ((/* implicit */unsigned int) var_0);
        }
        for (short i_23 = 0; i_23 < 23; i_23 += 1) /* same iter space */
        {
            var_52 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */short) arr_61 [i_2] [(unsigned char)11] [(short)17] [i_23] [i_23] [i_23] [i_23])), (var_16)))) ? (((long long int) 9223372036854775807LL)) : (var_4))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))) : ((~(0U))))))));
            var_53 &= var_7;
            arr_82 [22] [i_23] = ((/* implicit */int) arr_53 [i_2] [i_2] [i_2] [(unsigned char)0]);
            var_54 += ((/* implicit */unsigned int) var_5);
        }
        for (short i_24 = 0; i_24 < 23; i_24 += 1) /* same iter space */
        {
            var_55 = ((/* implicit */unsigned short) arr_2 [i_2] [i_24]);
            var_56 = ((/* implicit */int) min((((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))), (((/* implicit */long long int) max(((~(arr_4 [i_2] [i_2] [i_2]))), (((/* implicit */int) (short)12439)))))));
        }
        var_57 += ((/* implicit */long long int) ((_Bool) arr_74 [i_2] [i_2] [i_2]));
        var_58 = ((/* implicit */int) max((var_58), (((/* implicit */int) arr_6 [i_2]))));
        arr_85 [(unsigned char)21] [i_2] = max((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (short)32767)) ? (4294967295U) : (((/* implicit */unsigned int) 536870912)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) var_1)));
    }
    var_59 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */short) (signed char)7)), (var_16))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967295U)), (10074081125266690824ULL)))) ? (((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520)))))));
}
