/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234164
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [17LL] = ((/* implicit */int) arr_4 [i_0]);
                arr_6 [i_0] = ((/* implicit */long long int) ((min(((+(9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) (unsigned short)65518))))))) <= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)21))))), ((signed char)21)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((6946005903552682736LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18)))))), (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [(short)5] [i_0] [i_3])) : (max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)122)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (6946005903552682736LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))))))))));
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_9 [i_0] [(signed char)15] [i_1] [15] [i_0] [8ULL]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    arr_20 [i_4] [i_5 + 2] [i_6] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))) < (arr_12 [i_6]))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)3)) ^ (((/* implicit */int) arr_15 [i_5 - 1] [i_6])))))));
                    /* LoopSeq 1 */
                    for (short i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) arr_14 [i_5] [i_5]);
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65518))));
                            var_21 = ((/* implicit */unsigned char) ((18446744073709551615ULL) * (2342596566825888562ULL)));
                            var_22 = arr_12 [i_4];
                            var_23 |= ((/* implicit */unsigned long long int) ((arr_11 [i_7] [i_7]) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7469844392884709986LL))))) : (((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_22 [i_4] [(short)12] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_25 [i_4] [i_4] [i_6] [(short)3] [i_8] [i_8]))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */long long int) arr_14 [(_Bool)1] [i_9])) : (-6946005903552682732LL)))) ? (((/* implicit */unsigned long long int) ((arr_13 [i_4]) / (6946005903552682726LL)))) : (18446744073709551615ULL)));
                            var_25 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18)))))) + (6946005903552682736LL));
                            arr_28 [i_9] = ((/* implicit */int) arr_16 [i_4]);
                            arr_29 [i_9] [i_5] [i_5] = ((5554010345173459867LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)214)) ? (9223372036854775781LL) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)25))))))))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)18)) && (((/* implicit */_Bool) arr_33 [i_4] [i_6] [i_4])))) ? (((/* implicit */int) arr_11 [i_5] [i_5])) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)21))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_11 = 1; i_11 < 21; i_11 += 2) 
                        {
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)95))) == (arr_21 [i_10]))))));
                            var_29 = (signed char)-95;
                        }
                        for (short i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (signed char)-21))));
                            var_31 = ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)3)));
                            var_32 -= ((/* implicit */short) arr_32 [i_10] [i_10] [i_4] [i_4] [i_4]);
                            arr_39 [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (14264199130426500761ULL))))) | (arr_32 [i_4] [i_4] [i_4] [i_4] [i_4])));
                        }
                        for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((4933041277670809122ULL) >> (((/* implicit */int) arr_11 [i_4] [i_4])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_4])) * (((/* implicit */int) arr_18 [i_6])))))));
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)50)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (signed char)-85)))) : (((/* implicit */int) arr_24 [i_5]))));
                            var_35 *= arr_40 [i_4] [i_5] [i_5] [i_5] [i_5] [i_10] [(signed char)21];
                        }
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (signed char)127))));
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            arr_46 [i_4] [i_4] [i_6] [i_4] [i_10 - 1] [i_10] [19] &= ((/* implicit */_Bool) 1950741063);
                            arr_47 [8LL] [1LL] [1LL] [i_5] [8LL] [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_6] [i_5] [i_10] [i_10 - 1] [i_14] [i_14] [i_5]))));
                        }
                    }
                    for (long long int i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        var_37 += ((/* implicit */unsigned char) arr_38 [i_4] [i_5 + 1] [i_5] [5LL] [(unsigned short)14] [(unsigned short)14] [i_15]);
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) arr_31 [i_4] [(short)19] [(unsigned char)11] [i_15] [(short)19] [i_15]))));
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) 7022927993749072926LL)) ? (6946005903552682725LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)46))))))));
                        /* LoopSeq 1 */
                        for (long long int i_16 = 0; i_16 < 23; i_16 += 2) 
                        {
                            var_40 = ((/* implicit */long long int) arr_34 [i_4] [i_16] [i_16] [i_16] [i_4] [i_15] [i_16]);
                            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) (short)22836)) ? (4182544943283050854ULL) : (((/* implicit */unsigned long long int) 6946005903552682725LL))));
                            arr_53 [i_4] [20ULL] [13LL] = ((/* implicit */short) arr_41 [i_4] [i_15] [i_6] [i_4] [i_16] [i_16]);
                        }
                    }
                }
            } 
        } 
        var_42 *= ((/* implicit */unsigned long long int) 6946005903552682731LL);
    }
    var_43 = ((/* implicit */long long int) var_4);
    /* LoopSeq 2 */
    for (int i_17 = 0; i_17 < 11; i_17 += 3) 
    {
        arr_56 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6946005903552682725LL)) ? (6946005903552682725LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 11; i_18 += 2) 
        {
            for (signed char i_19 = 0; i_19 < 11; i_19 += 3) 
            {
                {
                    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) arr_12 [i_17]))));
                    var_45 = ((((/* implicit */unsigned long long int) 1334949795)) | (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6946005903552682725LL))))), (max((1ULL), (((/* implicit */unsigned long long int) (signed char)127)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_20 = 0; i_20 < 11; i_20 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_21 = 1; i_21 < 9; i_21 += 4) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 1) 
                {
                    for (long long int i_23 = 1; i_23 < 10; i_23 += 2) 
                    {
                        {
                            var_46 = ((((/* implicit */_Bool) arr_14 [i_23 - 1] [i_17])) ? (4182544943283050855ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1334949799)) || (((/* implicit */_Bool) (short)-2460)))))) > (max((arr_35 [i_17] [i_20] [i_17] [i_21] [i_22] [i_23]), (((/* implicit */unsigned long long int) arr_27 [i_17])))))))));
                            var_47 *= ((/* implicit */signed char) (short)-17886);
                            arr_73 [i_17] [i_21 - 1] [i_20] [i_17] = ((/* implicit */unsigned long long int) ((max((1803328036), (min((2147483633), (((/* implicit */int) (signed char)-46)))))) / (((/* implicit */int) (signed char)46))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_24 = 0; i_24 < 11; i_24 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (long long int i_25 = 1; i_25 < 9; i_25 += 1) 
                {
                    var_48 &= ((/* implicit */_Bool) arr_65 [(short)8] [i_24]);
                    var_49 = arr_23 [5] [i_20] [i_20] [i_24] [i_20];
                }
                for (long long int i_26 = 3; i_26 < 10; i_26 += 2) /* same iter space */
                {
                    var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) ((1334949800) <= (((/* implicit */int) (signed char)-46)))))));
                    var_51 -= ((/* implicit */unsigned char) arr_41 [i_26 - 1] [i_20] [i_24] [i_26 - 2] [0LL] [0LL]);
                }
                for (long long int i_27 = 3; i_27 < 10; i_27 += 2) /* same iter space */
                {
                    var_52 = ((/* implicit */_Bool) min((var_52), (arr_25 [i_27] [i_20] [i_20] [(_Bool)0] [(_Bool)0] [i_17])));
                    arr_85 [i_17] [i_17] = ((/* implicit */int) (short)32767);
                }
                var_53 = ((/* implicit */int) min((var_53), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_33 [i_17] [i_17] [i_24])) : (((/* implicit */int) (short)32766)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_17] [i_20] [(unsigned char)20])))))))));
                arr_86 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */short) arr_64 [i_17] [i_17] [i_17]);
                arr_87 [i_17] [i_17] [i_17] [i_20] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_62 [(_Bool)1] [i_20] [i_20])) <= (((/* implicit */int) arr_8 [i_17] [i_20] [i_24]))))) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)8)) > (((/* implicit */int) arr_61 [i_17] [i_17] [i_20] [i_24])))))));
            }
            for (int i_28 = 0; i_28 < 11; i_28 += 2) /* same iter space */
            {
                var_54 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1334949795)) | (18446744073709551615ULL)));
                var_55 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) <= (18446744073709551614ULL)));
                var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) arr_74 [i_17] [i_17] [i_28]))));
                /* LoopSeq 2 */
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
                {
                    arr_92 [i_17] [6] [i_17] = ((/* implicit */signed char) ((arr_48 [i_17] [i_17] [i_28] [i_29]) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((arr_0 [i_17] [i_20]) < (((/* implicit */int) (unsigned short)1)))), ((!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))))));
                    arr_93 [i_17] = ((/* implicit */short) min((arr_21 [i_17]), ((-(max((((/* implicit */long long int) arr_63 [i_20] [10] [10])), (arr_72 [i_17] [i_29] [6ULL] [i_29])))))));
                }
                /* vectorizable */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
                {
                    var_57 = ((/* implicit */unsigned short) ((((18446744073709551615ULL) > (((/* implicit */unsigned long long int) arr_65 [i_30] [i_17])))) ? (-1334949796) : (((((/* implicit */_Bool) arr_74 [i_17] [i_20] [i_17])) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) arr_26 [i_17] [i_17] [18LL] [i_17] [i_20] [i_20] [i_30]))))));
                    var_58 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_74 [i_20] [i_28] [i_28]) / (((/* implicit */int) arr_94 [i_30] [i_28] [i_30] [i_20]))))) ? (((((/* implicit */_Bool) arr_33 [i_17] [i_20] [i_30])) ? (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_17] [i_20] [i_28] [i_30]))) : (arr_72 [i_28] [i_20] [i_28] [i_30]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_84 [10] [i_20] [i_28] [i_30])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)102)))))));
                    arr_96 [i_17] [i_17] [i_20] [2ULL] [i_30] [i_17] = ((/* implicit */long long int) (-(((arr_1 [i_17] [i_20]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                }
            }
        }
        arr_97 [i_17] [i_17] = arr_61 [i_17] [i_17] [i_17] [2LL];
    }
    for (signed char i_31 = 0; i_31 < 23; i_31 += 4) 
    {
        var_59 ^= ((/* implicit */int) arr_18 [i_31]);
        var_60 = ((/* implicit */int) max((((/* implicit */long long int) (signed char)125)), (-8958652563100298716LL)));
    }
    var_61 |= ((/* implicit */unsigned char) var_9);
}
