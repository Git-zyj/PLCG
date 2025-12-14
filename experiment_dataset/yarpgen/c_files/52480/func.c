/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52480
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */unsigned char) (signed char)47);
                arr_5 [(signed char)19] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 3])) ? (((/* implicit */int) arr_0 [i_1 + 4] [i_1 + 1])) : (((/* implicit */int) (unsigned char)74)))), (((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 3])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((unsigned int) max(((~(((/* implicit */int) (signed char)-54)))), (((((/* implicit */int) (short)32512)) * (((/* implicit */int) (signed char)28)))))));
    var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) | (min((1965607193U), (((/* implicit */unsigned int) var_3))))))) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) (signed char)22))))) ? (var_1) : (((((/* implicit */_Bool) var_4)) ? (2199023255551LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)37)))))))));
    var_22 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 21; i_2 += 1) 
    {
        for (short i_3 = 4; i_3 < 22; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            arr_20 [i_2] [i_3 - 1] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) (signed char)-1);
                            arr_21 [i_2] [i_3] = ((long long int) max((((/* implicit */long long int) min((1965607193U), (((/* implicit */unsigned int) var_6))))), (arr_18 [i_2 - 3])));
                            var_23 &= ((/* implicit */int) arr_14 [i_2] [i_3 - 2] [i_4] [i_6]);
                            var_24 = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_5] [i_3] [i_2])))))))), (arr_2 [i_2 + 1])));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            arr_25 [i_7] [i_5] [i_4] [i_3] [i_2] = ((/* implicit */unsigned int) arr_24 [19U] [19U] [i_7]);
                            arr_26 [i_2] [i_3] [i_4] [i_5] [i_3] [i_7] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)47))));
                            arr_27 [i_2] [i_2 - 2] [i_3 - 1] [i_4] [i_2 - 2] [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_3])) ? (((/* implicit */long long int) arr_1 [i_2 + 1])) : (var_1)));
                            arr_28 [i_3] [6LL] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_7] [i_3 - 3] [i_2 - 2] [i_2])) ? (((/* implicit */int) arr_14 [i_3] [i_3 - 1] [i_2 - 3] [i_2])) : (((/* implicit */int) arr_14 [i_4] [i_3 - 4] [i_2 + 2] [i_2 + 2]))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_32 [i_2] [(unsigned char)12] [i_4] [i_5] [i_8] [15] [i_4] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) arr_4 [i_8])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 - 2] [i_3] [i_4] [i_8]))) - (var_11)))))));
                            arr_33 [i_2 - 3] [i_2 - 3] [i_2] [i_2 - 2] [i_2 - 3] = ((/* implicit */unsigned char) (~(arr_6 [i_3 + 1] [(unsigned short)20])));
                            arr_34 [i_2] [i_2] [i_2] [(signed char)21] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(arr_1 [i_5]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) 2329360099U)) : (min((min((((/* implicit */long long int) (short)-19124)), (var_2))), (((/* implicit */long long int) max((arr_6 [i_4] [i_4]), (((/* implicit */unsigned int) arr_22 [i_4])))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */int) max((((/* implicit */long long int) (signed char)47)), ((+(((((/* implicit */_Bool) arr_19 [i_2] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)97))) : (arr_16 [(unsigned short)13] [i_3 - 3] [i_3 - 3] [(unsigned char)20])))))));
                            arr_37 [i_2] [15U] [15U] [i_5] [22] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */int) max(((short)-19140), ((short)-19140)))) : (((((/* implicit */_Bool) arr_23 [i_9] [i_5] [i_4] [i_3] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2 + 2])) || (((/* implicit */_Bool) (unsigned char)181))))) : (var_9)))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_35 [i_3 + 1] [i_9] [i_9] [i_2 + 1] [i_3 - 4] [i_5]))));
                        }
                    }
                    for (short i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (short)-19156)) : (((/* implicit */int) (unsigned char)187))));
                            var_28 = ((/* implicit */short) ((((/* implicit */int) (short)19124)) & (((/* implicit */int) (signed char)-28))));
                            var_29 ^= ((/* implicit */short) var_15);
                        }
                        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            arr_47 [11LL] [i_10] [i_10] [i_10] [i_10] [i_10] [10LL] = ((/* implicit */short) var_14);
                            arr_48 [i_3 - 4] [i_3] [i_10] [i_10] [i_3] |= var_12;
                            var_30 = ((/* implicit */unsigned char) max((arr_2 [i_3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_18 [i_3 - 1]))) ? (((/* implicit */int) arr_4 [i_4])) : (((((/* implicit */_Bool) arr_38 [i_3] [i_10] [i_10] [i_10] [i_3] [i_2])) ? (-890957589) : (((/* implicit */int) arr_45 [i_2] [i_3] [i_4] [i_12])))))))));
                            arr_49 [i_10] = ((/* implicit */unsigned char) arr_4 [(unsigned char)0]);
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            arr_52 [i_2 - 1] [i_3] [i_4] [i_10] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)247)) <= (((((/* implicit */_Bool) 890957614)) ? (((/* implicit */int) (short)7689)) : (((/* implicit */int) (unsigned char)74))))));
                            arr_53 [i_2 - 1] [(short)14] [i_10] [i_4] [(short)14] [3] [i_13] = ((unsigned char) min((arr_6 [i_3 - 3] [i_2 - 1]), (arr_6 [i_3 + 1] [i_2 + 1])));
                            arr_54 [i_3] [i_4] [i_10] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)61))))) << (((((/* implicit */int) min((arr_14 [i_2] [i_4] [i_10] [i_13]), (var_12)))) + (6629))))))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_10] [i_10] [i_10] [i_10] [i_10] [(signed char)22])) ? (((((/* implicit */int) (unsigned short)24095)) >> (((((/* implicit */int) arr_3 [i_3] [i_10] [i_13])) - (18))))) : ((+(((/* implicit */int) (unsigned short)24095))))));
                        }
                        for (int i_14 = 0; i_14 < 23; i_14 += 4) 
                        {
                            var_32 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (min((min((((/* implicit */unsigned int) var_16)), (arr_38 [i_14] [i_10] [i_4] [i_4] [i_3] [i_2]))), (((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25201)))));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_7) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_39 [i_2] [i_3] [i_4] [i_10] [8LL] [i_14])) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) arr_35 [i_3] [i_10] [i_10] [i_4] [i_3] [i_2])))), (((/* implicit */int) var_18)))))));
                            var_34 = ((/* implicit */unsigned short) arr_55 [i_2 + 2] [i_10] [0LL] [i_10] [i_14]);
                        }
                        for (short i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            arr_60 [i_2 - 3] [i_3] [i_10] [i_10] = ((/* implicit */unsigned char) arr_9 [i_3 + 1] [(unsigned char)14]);
                            arr_61 [i_10] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)255))));
                        }
                    }
                    for (short i_16 = 0; i_16 < 23; i_16 += 1) /* same iter space */
                    {
                        arr_66 [i_16] [i_16] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)96)), (min((arr_19 [i_2 - 2] [i_2]), (((/* implicit */int) (short)25184))))))) : (arr_9 [i_2 - 2] [i_3])));
                        arr_67 [i_16] [i_16] [i_3 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-13), ((signed char)65)))))))));
                        arr_68 [i_16] [i_16] [(signed char)17] [i_16] [(unsigned char)22] = ((/* implicit */unsigned char) min((min((4294967295U), (((/* implicit */unsigned int) (unsigned char)63)))), (((/* implicit */unsigned int) arr_44 [i_2 - 3] [i_16] [i_4]))));
                        arr_69 [i_4] [i_4] &= ((/* implicit */short) min((arr_17 [i_2 - 2] [i_3] [i_4] [i_16] [i_3]), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_44 [i_3 + 1] [i_4] [i_2 - 2])), (arr_42 [i_4]))))));
                    }
                    var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_57 [i_4] [i_2] [i_2 - 3] [i_3 + 1] [i_4]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 3) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned char) var_1);
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_4] [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))) : (arr_18 [i_4])))) ? (min((arr_13 [i_2] [i_3] [i_4] [i_17]), (((/* implicit */unsigned int) arr_22 [i_4])))) : (arr_46 [i_4] [16LL])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2])) || (((/* implicit */_Bool) var_16)))))) - (min((((/* implicit */unsigned int) (signed char)43)), (2329360097U))))) : (min((((/* implicit */unsigned int) max((arr_57 [i_3] [i_3 - 2] [i_3] [(short)8] [i_3]), (((/* implicit */short) arr_70 [(short)21] [i_4]))))), (arr_38 [i_17] [i_3 - 1] [i_4] [i_4] [i_2 - 2] [i_2 - 2])))));
                        arr_72 [i_2] [i_2 - 3] [i_3] [i_4] [i_4] [i_17] = (unsigned char)255;
                    }
                    for (unsigned char i_18 = 0; i_18 < 23; i_18 += 3) /* same iter space */
                    {
                        arr_76 [i_18] [8U] [i_18] [i_18] |= ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (unsigned char)250)) >= (((/* implicit */int) max((arr_22 [i_18]), (((/* implicit */short) (unsigned char)182)))))))), (min((arr_8 [i_3 + 1] [2LL] [i_3 - 1]), (arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 3])))));
                        arr_77 [i_2 - 1] [i_2 + 1] [(signed char)9] [i_2 - 1] = ((/* implicit */short) (-(min((((/* implicit */int) arr_62 [i_2 + 1] [i_3 - 1] [i_18])), ((-(((/* implicit */int) (unsigned char)234))))))));
                        var_38 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) max(((short)-19158), (arr_10 [i_2] [i_3])))) ? (((/* implicit */int) min((arr_7 [i_3]), (((/* implicit */short) (unsigned char)0))))) : (((/* implicit */int) arr_31 [i_4])))));
                        var_39 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2] [i_3 - 4] [i_4])) & (((/* implicit */int) arr_0 [i_2 - 2] [i_3]))))), (((((((/* implicit */_Bool) (short)-31280)) ? (arr_13 [i_2] [i_3] [i_4] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))))) & (max((((/* implicit */unsigned int) (unsigned char)207)), (arr_64 [i_2] [i_4] [i_4] [i_18])))))));
                    }
                    arr_78 [i_2] [i_2] [(unsigned char)22] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) max((arr_64 [i_2] [i_3] [i_3 - 3] [(unsigned char)18]), (((/* implicit */unsigned int) arr_39 [(short)12] [i_4] [(signed char)1] [i_4] [(unsigned short)12] [i_4]))))) == (max((var_1), (((/* implicit */long long int) (signed char)47)))))))));
                }
            } 
        } 
    } 
}
