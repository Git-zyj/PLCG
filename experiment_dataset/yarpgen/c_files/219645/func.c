/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219645
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */int) max((((/* implicit */long long int) (~(arr_0 [i_0])))), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */long long int) arr_0 [i_0])) / (var_8))) : (((/* implicit */long long int) arr_0 [i_0]))))));
        var_13 = ((/* implicit */long long int) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) max(((unsigned short)6395), (((/* implicit */unsigned short) (unsigned char)79)))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) min((var_14), (var_1)));
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) (-(arr_4 [i_2] [i_1])));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_4 [i_1] [i_2]), (((/* implicit */long long int) arr_6 [i_1] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_1]) < (var_10))))) : (min((((/* implicit */long long int) (unsigned char)79)), (var_8)))));
        }
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_15 *= ((/* implicit */short) arr_1 [i_1]);
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_1] [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_3] [(unsigned short)12]))))) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_13 [i_1] [9LL] [i_3])))))))));
            arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) arr_3 [i_1]);
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) + (((/* implicit */long long int) -1995973264))))) ? (((min((((/* implicit */int) (unsigned char)76)), (1995973264))) << (((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_5)) : (arr_0 [(short)7]))) - (25946))))) : (((/* implicit */int) (((~(((/* implicit */int) arr_11 [i_1] [(short)10])))) < (((/* implicit */int) (short)31115)))))));
            arr_16 [i_1] = ((/* implicit */long long int) (-(max((((/* implicit */int) var_11)), (((((-2016174192) + (2147483647))) << (((var_2) - (570396719792112833LL)))))))));
        }
        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
        {
            arr_19 [8LL] [i_4] [8LL] &= ((/* implicit */long long int) 1995973264);
            var_18 += ((/* implicit */signed char) arr_2 [i_1]);
        }
        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                var_19 -= ((/* implicit */signed char) (~(-9050107058391312740LL)));
                var_20 = ((/* implicit */long long int) arr_8 [i_6] [i_6]);
                var_21 = ((/* implicit */unsigned short) 1995973264);
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) (-(arr_27 [i_1] [i_5] [i_6] [i_7] [i_8])));
                        arr_29 [i_1] = ((/* implicit */long long int) 1995973264);
                    }
                    for (int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        var_23 = arr_3 [i_1];
                        arr_32 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) arr_23 [i_7] [i_5] [i_1]))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_10] [i_10] [i_10])))))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_22 [i_6]))));
                        var_26 = ((/* implicit */unsigned short) arr_26 [i_10] [i_1] [i_6] [i_6] [i_1] [i_1]);
                        arr_36 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))) & (2LL)))) ? (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */long long int) -1995973267)) : (arr_3 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_5] [i_6])))));
                    }
                    arr_37 [i_1] [i_5] [i_6] [i_1] = ((/* implicit */unsigned char) (~(var_10)));
                    arr_38 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */long long int) (short)22737);
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)14393))))) + (((var_3) / (arr_21 [i_6] [i_6]))))))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [(unsigned char)3] [6] [i_5] [(short)13] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_1] [i_6] [i_6] [i_1] [i_1]))) : (arr_4 [i_6] [i_1])));
                }
                for (long long int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */short) arr_7 [i_6] [i_6] [i_6]);
                    var_30 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))) : (arr_1 [i_1]))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17)))));
                    var_31 -= ((/* implicit */unsigned short) (+(((arr_3 [i_11]) / (var_2)))));
                }
            }
            for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                arr_44 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) arr_28 [i_1] [15] [i_1] [i_12] [i_1])) : (1995973257)));
                var_32 = ((/* implicit */unsigned char) ((((((var_4) + (((/* implicit */long long int) arr_39 [i_1] [i_5] [i_1] [i_5] [i_1])))) + (9223372036854775807LL))) << (((var_8) - (1490045247403752783LL)))));
                var_33 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1995973276)), (max((((/* implicit */unsigned long long int) arr_34 [8LL])), (var_0))))))));
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    var_34 -= ((/* implicit */unsigned short) max((-1781818900803430976LL), (((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_1] [(unsigned short)4] [i_1])) <= (((/* implicit */int) (unsigned char)104)))))));
                    arr_48 [i_1] [i_13] = ((/* implicit */unsigned short) -2271192987517534529LL);
                }
                arr_49 [i_1] [i_5] [i_5] [i_12] = ((/* implicit */unsigned char) arr_26 [i_1] [i_1] [i_1] [i_5] [i_1] [i_12]);
            }
            for (signed char i_14 = 0; i_14 < 18; i_14 += 4) 
            {
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) arr_4 [i_5] [i_1]))));
                arr_52 [i_1] [i_1] [i_1] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)177)) << (((((/* implicit */int) (unsigned short)26866)) - (26858)))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    for (short i_16 = 4; i_16 < 16; i_16 += 3) 
                    {
                        {
                            arr_59 [i_1] [i_5] [i_14] [i_1] [i_16] = arr_5 [i_1] [i_1];
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_26 [i_1] [i_1] [i_5] [i_14] [i_15] [(unsigned char)2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_14] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31099))) : (var_4))))))) ? (((/* implicit */int) min((var_7), (arr_57 [i_16 - 2] [i_5] [i_14] [i_15] [i_16] [i_15] [i_15])))) : (((/* implicit */int) arr_11 [i_1] [i_1])))))));
                            var_37 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-1810)) ? (((/* implicit */int) arr_54 [i_15] [i_15] [i_16 - 1] [i_16 - 2] [i_16] [i_16 - 3])) : (((/* implicit */int) (short)22737))))));
                            arr_60 [i_1] [i_5] [i_16] [i_15] [i_16] [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_5 [i_15] [i_1])) : (((((/* implicit */_Bool) arr_11 [(unsigned short)5] [(unsigned short)5])) ? (var_0) : (17500321160862137702ULL))))), (((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_16] [i_16] [(unsigned char)3] [i_16 + 2] [i_16 + 2]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    for (long long int i_18 = 2; i_18 < 17; i_18 += 3) 
                    {
                        {
                            arr_67 [i_1] [i_1] [i_14] [i_17] [i_18] = ((/* implicit */unsigned short) arr_18 [1LL] [i_18] [i_17]);
                            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 620824096)) ? (((/* implicit */int) (short)-31115)) : (1995973260)))) ? (((/* implicit */unsigned long long int) 13)) : (((((/* implicit */_Bool) (short)-25796)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)169)), ((short)25796))))) : ((~(arr_26 [i_1] [i_5] [i_5] [i_17] [i_1] [(unsigned short)10])))))));
                            arr_68 [i_1] [13LL] [i_1] = ((/* implicit */signed char) min((((1995973260) / (((/* implicit */int) (short)-1810)))), (((/* implicit */int) ((unsigned char) arr_40 [i_1] [i_5] [i_1] [13LL] [i_18] [i_14])))));
                            var_39 = max((arr_34 [i_18 - 1]), (((/* implicit */long long int) (unsigned short)64324)));
                        }
                    } 
                } 
            }
            for (short i_19 = 2; i_19 < 17; i_19 += 4) 
            {
                var_40 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-22737)), (arr_6 [i_1] [i_5])))), (arr_25 [i_19] [i_5] [i_5] [i_1])));
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)85)) ? (7778013644008917021LL) : (((/* implicit */long long int) -1995973260))));
                var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) arr_64 [i_19] [i_19] [i_19] [i_19 + 1] [i_19] [(unsigned short)8]))));
            }
            var_43 = max((((/* implicit */long long int) (unsigned short)61354)), (max((7778013644008917021LL), (((/* implicit */long long int) -1995973260)))));
            /* LoopNest 3 */
            for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 18; i_21 += 4) 
                {
                    for (signed char i_22 = 3; i_22 < 15; i_22 += 1) 
                    {
                        {
                            arr_79 [i_1] [i_1] [i_1] [i_21] [i_22] = ((/* implicit */signed char) 596662598U);
                            var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((/* implicit */_Bool) 3698304698U)) ? (7778013644008916993LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))))))));
                        }
                    } 
                } 
            } 
            arr_80 [i_1] [i_1] = ((/* implicit */unsigned short) (short)-1);
        }
        /* LoopSeq 1 */
        for (short i_23 = 0; i_23 < 18; i_23 += 3) 
        {
            var_45 = ((/* implicit */short) var_9);
            arr_84 [i_1] [(unsigned char)6] = ((/* implicit */unsigned char) -4002442401238454011LL);
            arr_85 [i_1] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)13)) ? (4294967295LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))))), (arr_71 [5LL] [i_23] [i_23])));
            /* LoopSeq 2 */
            for (short i_24 = 1; i_24 < 16; i_24 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_25 = 4; i_25 < 16; i_25 += 4) /* same iter space */
                {
                    var_46 = ((/* implicit */short) ((((/* implicit */_Bool) arr_66 [i_25] [i_25] [i_25] [i_24 + 2] [i_24 + 1])) ? (((((/* implicit */long long int) ((((/* implicit */int) arr_53 [i_1] [i_1] [i_23] [i_24] [i_25 + 1])) * (((/* implicit */int) var_11))))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_24] [i_1]))) : (var_8))))) : (min((((/* implicit */long long int) ((((/* implicit */int) arr_75 [i_23] [i_23] [i_23] [i_25] [i_1])) / (((/* implicit */int) arr_58 [i_25 - 1] [i_23]))))), (min((arr_47 [i_1]), (((/* implicit */long long int) arr_69 [i_1] [i_23]))))))));
                    var_47 = arr_20 [i_1] [i_1];
                    arr_91 [i_1] [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_74 [i_24 + 1] [i_25] [i_25] [i_25 - 3]) : (arr_74 [i_24 + 1] [i_24 + 1] [i_24 + 1] [i_25 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_58 [i_24] [i_25]), (((/* implicit */unsigned short) arr_23 [i_1] [i_1] [i_25])))))) : (var_4)));
                }
                /* vectorizable */
                for (short i_26 = 4; i_26 < 16; i_26 += 4) /* same iter space */
                {
                    var_48 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_26] [i_23] [i_23] [(short)4])))))));
                    var_49 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_73 [i_1] [i_26 - 4] [i_24] [i_1]))));
                    arr_95 [i_1] [i_23] = ((/* implicit */long long int) (+((~(((/* implicit */int) var_7))))));
                    /* LoopSeq 4 */
                    for (int i_27 = 0; i_27 < 18; i_27 += 4) /* same iter space */
                    {
                        var_50 = ((/* implicit */short) ((var_2) == (((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_1] [i_23] [i_1]))) : (4683920978793002171LL)))));
                        var_51 = (-(arr_66 [i_24 - 1] [i_26 + 1] [i_24] [i_1] [i_24]));
                        arr_99 [i_27] [i_26] [(short)16] &= ((/* implicit */unsigned int) var_11);
                    }
                    for (int i_28 = 0; i_28 < 18; i_28 += 4) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) arr_56 [i_1] [i_23] [i_24] [i_23] [i_26]))));
                        arr_102 [i_1] [i_1] [i_1] = ((/* implicit */int) var_11);
                    }
                    for (int i_29 = 0; i_29 < 18; i_29 += 4) /* same iter space */
                    {
                        var_53 ^= arr_6 [i_24 - 1] [i_29];
                        var_54 = ((((/* implicit */_Bool) 288230376151711743LL)) ? (4002442401238454011LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                        var_55 = ((/* implicit */short) ((((/* implicit */_Bool) arr_78 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)50889)) : (((/* implicit */int) arr_13 [i_24 + 1] [i_24 - 1] [i_24 - 1]))));
                    }
                    for (int i_30 = 0; i_30 < 18; i_30 += 4) /* same iter space */
                    {
                        var_56 *= ((/* implicit */unsigned int) arr_42 [i_24 - 1] [i_24 + 2] [i_26 - 3] [i_30]);
                        arr_110 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (-2087763943346014080LL) : (((/* implicit */long long int) (+(-589254043))))));
                    }
                }
                arr_111 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_30 [i_1] [i_1] [(short)1] [i_23] [i_24] [i_24 - 1]);
            }
            /* vectorizable */
            for (short i_31 = 1; i_31 < 16; i_31 += 4) /* same iter space */
            {
                arr_114 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_75 [i_23] [i_23] [i_31 - 1] [16U] [i_31])) ? (((/* implicit */int) arr_61 [i_1] [i_23] [i_1] [i_1])) : (((/* implicit */int) arr_43 [i_1]))));
                var_57 = ((/* implicit */short) (~(arr_62 [i_1] [i_31 - 1] [i_1] [i_31] [(unsigned short)17] [i_31])));
            }
        }
        arr_115 [i_1] [i_1] = ((/* implicit */long long int) var_0);
    }
    for (short i_32 = 0; i_32 < 18; i_32 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_33 = 0; i_33 < 18; i_33 += 4) 
        {
            arr_122 [i_33] [i_33] [i_33] = ((/* implicit */int) (~(((((/* implicit */_Bool) (short)-26)) ? (2360216892U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))));
            var_58 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_32] [i_32] [0LL] [i_32] [i_32])) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) arr_87 [i_32] [i_32] [i_32] [i_32]))))), (((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) var_2)), (var_0))) : (((/* implicit */unsigned long long int) max((1630989228), (((/* implicit */int) (short)0)))))))));
            var_59 |= ((/* implicit */signed char) arr_5 [(signed char)2] [i_33]);
            var_60 = var_10;
        }
        arr_123 [i_32] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_98 [i_32] [i_32] [i_32] [i_32] [i_32]), (arr_98 [i_32] [i_32] [i_32] [i_32] [i_32])))) ? (((/* implicit */long long int) ((-1) % (((/* implicit */int) (short)-40))))) : (max((((/* implicit */long long int) arr_18 [14LL] [i_32] [i_32])), (var_2)))));
        var_61 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_104 [i_32] [i_32] [12] [i_32] [i_32])) ^ (((/* implicit */int) ((arr_93 [i_32] [(_Bool)1] [i_32] [(unsigned char)4] [i_32]) == (arr_39 [i_32] [i_32] [i_32] [i_32] [i_32]))))));
        var_62 = ((((((/* implicit */_Bool) arr_23 [i_32] [i_32] [i_32])) ? (((/* implicit */int) arr_72 [i_32] [i_32] [i_32] [(short)10])) : (((/* implicit */int) arr_23 [i_32] [9LL] [i_32])))) - (((/* implicit */int) arr_105 [i_32] [i_32] [i_32] [i_32] [(unsigned short)6])));
    }
    var_63 = ((/* implicit */signed char) var_11);
}
