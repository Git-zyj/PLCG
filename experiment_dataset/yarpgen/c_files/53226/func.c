/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53226
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_0] [i_3] = max(((+(((arr_6 [i_1] [i_2] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)3] [i_0]))))))), (((/* implicit */unsigned long long int) ((short) arr_6 [i_0] [i_2] [i_2]))));
                            arr_10 [i_0] [i_1] [i_2] [(short)14] = (~(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (min((var_3), (arr_8 [(unsigned short)8] [11LL] [i_2] [14LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                            arr_11 [i_2] [5ULL] [i_2] [11ULL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_2 [i_2 + 3] [i_1 - 3])) ? (((/* implicit */int) var_10)) : (max((((/* implicit */int) arr_7 [i_0] [(short)9] [i_2])), (var_0)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (short i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_11 -= ((/* implicit */unsigned int) 1099511627264LL);
                            var_12 += ((/* implicit */short) min((0ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_4] [i_1] [i_0])) ? (arr_6 [i_0] [i_5] [i_4]) : (arr_6 [i_0] [i_5] [i_0])))))))));
                            arr_17 [i_0] [i_1] [i_4] [i_5] [i_1] [i_0] = ((/* implicit */short) ((long long int) (signed char)-8));
                        }
                    } 
                } 
                arr_18 [6U] [(_Bool)1] [i_0] &= ((/* implicit */short) (+(((/* implicit */int) ((short) arr_16 [i_0] [(signed char)2] [i_0] [i_0])))));
            }
        } 
    } 
    var_13 &= ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) (~(var_8))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (var_5)))) ? (((/* implicit */long long int) var_0)) : (((var_8) << (((var_4) - (1249744406)))))))));
    var_14 = ((/* implicit */long long int) min(((unsigned char)250), (((/* implicit */unsigned char) (_Bool)1))));
    /* LoopSeq 4 */
    for (short i_6 = 1; i_6 < 11; i_6 += 3) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) arr_12 [i_6] [i_6] [i_6] [i_6]))), (((((unsigned long long int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [13LL])) << (((((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */int) arr_7 [(_Bool)1] [i_6] [3])))) - (1249744347)))))));
        arr_22 [i_6] = ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) ((_Bool) (signed char)8))), (((((/* implicit */_Bool) arr_20 [i_6])) ? (arr_15 [i_6] [i_6] [(unsigned short)6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))))))));
        var_15 ^= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)8)), (arr_13 [i_6] [i_6] [i_6])))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_5 [i_6] [i_6] [1LL] [i_6])))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((int) (~(((((/* implicit */_Bool) var_6)) ? (arr_20 [10ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
        var_17 = ((/* implicit */int) (signed char)7);
    }
    for (short i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            var_18 -= ((/* implicit */short) var_1);
            /* LoopSeq 1 */
            for (long long int i_9 = 4; i_9 < 18; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_10 = 3; i_10 < 16; i_10 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [4] [(short)9]))))), (var_3)))) ? (arr_24 [i_7]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_34 [i_10] [i_10] [i_10 + 1] [i_10])))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (short)-21191))));
                    arr_35 [i_10] [i_9] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_6)) : (arr_23 [(signed char)19]))))) ? (((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (arr_33 [i_10] [i_7] [i_7]))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_34 [(signed char)3] [i_8] [i_9] [11U])), ((~(((/* implicit */int) var_2)))))))));
                    arr_36 [(_Bool)1] [i_8] [i_9] [(signed char)11] [i_9] = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */short) arr_32 [(short)4] [i_8] [i_8] [i_10])), (arr_31 [i_7] [i_8] [2] [i_10])))), ((((-(var_1))) / (((/* implicit */long long int) var_4))))));
                }
                for (signed char i_11 = 3; i_11 < 16; i_11 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((/* implicit */unsigned long long int) -524570894)), (((unsigned long long int) 5037142263231213815LL)))))));
                    var_22 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((-4LL) <= (((/* implicit */long long int) 11U))))), (arr_24 [i_7])));
                    arr_39 [i_7] [i_7] [i_11] [(signed char)1] = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) var_9))))) : (((long long int) arr_31 [i_7] [(unsigned short)11] [i_7] [i_11])))) - (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_27 [i_8] [i_11])) ? (var_4) : (((/* implicit */int) arr_33 [i_8] [i_9] [i_11]))))))));
                }
                var_23 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((unsigned char) arr_31 [i_9] [13U] [8U] [13U])))))));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((unsigned int) (~(((((/* implicit */_Bool) arr_27 [i_7] [i_9])) ? (((/* implicit */int) (short)-21191)) : (((/* implicit */int) (short)-29288))))))))));
                arr_40 [i_7] [i_8] [i_9] = ((short) min((((((/* implicit */int) arr_34 [i_7] [i_8] [(unsigned short)6] [i_9])) + (((/* implicit */int) var_9)))), (var_4)));
            }
            arr_41 [i_7] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_26 [i_7] [i_8])) ? (arr_26 [i_8] [i_7]) : (arr_26 [i_8] [i_7])))));
            arr_42 [i_8] = (!(((/* implicit */_Bool) -67108864)));
        }
        for (short i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    {
                        arr_50 [(signed char)1] [i_12] [i_13] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((signed char) var_4))) ? (min((var_1), (((/* implicit */long long int) var_9)))) : (max((var_8), (((/* implicit */long long int) var_0)))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
                        {
                            var_25 = ((/* implicit */short) ((int) var_4));
                            arr_53 [i_12] [i_7] = ((/* implicit */unsigned char) (+(arr_24 [i_7])));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            arr_56 [(short)10] [(unsigned char)1] [12LL] [12LL] [i_14] [i_16] [i_16] = ((/* implicit */signed char) var_5);
                            arr_57 [i_7] [i_7] [i_13] [i_13] [i_16] = ((/* implicit */short) max((((/* implicit */long long int) 4294967284U)), (max((((/* implicit */long long int) ((unsigned int) var_2))), (((long long int) 1093349593294445481ULL))))));
                            arr_58 [i_7] [i_7] [i_13] [i_14] [i_16] [i_13] [i_13] = ((/* implicit */_Bool) var_6);
                            arr_59 [5U] [i_12] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) arr_31 [i_7] [14] [i_7] [i_7])) : (((/* implicit */unsigned long long int) var_0)))));
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            var_26 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((signed char) var_8)))) % (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_51 [i_7] [i_7] [(signed char)8])) : (arr_62 [i_7] [i_7] [i_7] [i_13] [i_14] [i_14] [i_7])))))))));
                            arr_64 [i_17] [i_12] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((short) arr_29 [i_14] [i_13]))) ? ((+(((/* implicit */int) arr_29 [i_7] [i_12])))) : (((var_5) - (arr_47 [i_7] [i_7] [i_13] [7LL]))))), (((/* implicit */int) ((short) var_7)))));
                        }
                        for (long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            var_27 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_66 [(_Bool)1] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [3LL] [13U] [i_7]))) : (var_7)))) : (max((((/* implicit */unsigned long long int) var_5)), (var_3)))))));
                            arr_68 [i_7] [13U] [5LL] [(signed char)15] [i_18] [5LL] [i_7] = ((/* implicit */signed char) var_0);
                        }
                        arr_69 [i_14] [13LL] [i_7] [i_7] [(signed char)17] [i_7] = ((long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_7] [i_7] [i_7])))))));
                        /* LoopSeq 3 */
                        for (signed char i_19 = 0; i_19 < 20; i_19 += 4) 
                        {
                            arr_73 [i_12] = ((/* implicit */short) ((unsigned int) (signed char)126));
                            arr_74 [(short)9] [i_12] [(short)9] [i_14] [i_19] &= ((/* implicit */long long int) ((unsigned long long int) (+(((((/* implicit */int) arr_33 [i_14] [(short)5] [i_7])) % (var_0))))));
                            var_28 += ((/* implicit */signed char) min((max(((~(arr_67 [i_19] [i_14] [(_Bool)1] [(_Bool)1] [i_7]))), (arr_47 [18LL] [i_7] [i_7] [i_7]))), (((/* implicit */int) ((short) ((((/* implicit */unsigned int) arr_67 [i_19] [i_13] [i_13] [i_12] [i_7])) * (var_7)))))));
                        }
                        for (short i_20 = 0; i_20 < 20; i_20 += 4) 
                        {
                            arr_78 [i_7] [i_14] [i_13] [i_12] [i_7] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) max((arr_31 [i_7] [(unsigned short)13] [i_14] [(short)14]), (((/* implicit */short) arr_32 [i_7] [i_12] [i_14] [i_12]))))) <= (((/* implicit */int) ((signed char) arr_62 [(signed char)18] [i_7] [i_12] [(signed char)16] [i_13] [i_14] [11])))))), (max((((/* implicit */long long int) (signed char)0)), (((((/* implicit */_Bool) var_1)) ? (arr_44 [i_12] [i_12]) : (arr_60 [i_7] [i_12] [17] [10])))))));
                            arr_79 [(_Bool)1] [i_12] [19U] [5ULL] [i_12] = ((/* implicit */long long int) min((max((((unsigned int) 11U)), (((/* implicit */unsigned int) max((arr_72 [(short)7] [(short)7] [(short)7] [(short)7] [i_20]), (((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) arr_65 [(short)17] [1] [8] [8] [(short)17]))));
                        }
                        for (unsigned int i_21 = 0; i_21 < 20; i_21 += 2) 
                        {
                            arr_83 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0))));
                            arr_84 [i_13] = ((/* implicit */short) (~(var_6)));
                            arr_85 [i_7] [i_7] = ((/* implicit */long long int) (((~((~(((/* implicit */int) arr_34 [(short)14] [i_12] [i_13] [i_14])))))) > (((int) arr_63 [i_7] [i_12] [i_13] [i_13] [i_14] [i_21]))));
                        }
                    }
                } 
            } 
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((short) (short)-5004)))));
            var_30 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26114))) ^ (((long long int) arr_43 [i_7] [i_12]))));
        }
        arr_86 [i_7] = max((max((((/* implicit */unsigned long long int) max((arr_54 [i_7] [i_7]), (arr_32 [i_7] [i_7] [15LL] [(short)12])))), (((unsigned long long int) arr_70 [i_7] [i_7] [(signed char)2] [i_7])))), (((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7] [i_7]))) : (arr_60 [i_7] [i_7] [(short)9] [i_7])))) : (((unsigned long long int) var_8)))));
        var_31 = ((/* implicit */unsigned int) ((unsigned long long int) var_1));
    }
    for (signed char i_22 = 0; i_22 < 24; i_22 += 2) 
    {
        arr_89 [(unsigned char)22] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_88 [i_22] [i_22]))))), (min((var_7), (((/* implicit */unsigned int) var_2)))))), (((/* implicit */unsigned int) var_6))));
        arr_90 [i_22] [i_22] = ((/* implicit */int) ((short) 0U));
        arr_91 [i_22] [i_22] &= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_88 [i_22] [(signed char)17])) : (var_4)))), (min((((/* implicit */unsigned long long int) -886633477)), (0ULL))))), (((/* implicit */unsigned long long int) var_5))));
    }
    for (long long int i_23 = 0; i_23 < 17; i_23 += 4) 
    {
        var_32 *= ((/* implicit */signed char) max(((+((-(arr_80 [i_23]))))), (max(((+(arr_51 [i_23] [i_23] [i_23]))), (((/* implicit */unsigned int) var_6))))));
        var_33 = ((/* implicit */long long int) arr_24 [(unsigned short)3]);
    }
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 22; i_24 += 2) 
    {
        for (long long int i_25 = 0; i_25 < 22; i_25 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_26 = 0; i_26 < 22; i_26 += 4) 
                {
                    arr_100 [(signed char)11] [i_25] [i_25] [i_25] = ((/* implicit */long long int) ((unsigned int) min((arr_97 [i_24]), (arr_97 [i_25]))));
                    arr_101 [i_24] [i_24] [i_25] [i_24] &= ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */int) arr_96 [i_24] [1LL])), (var_4))), (((/* implicit */int) arr_95 [(_Bool)1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_98 [i_24] [i_24] [i_25] [i_24])))))) : (((/* implicit */int) arr_96 [(unsigned char)16] [(unsigned char)16]))));
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)21125)))) >> (((((/* implicit */int) (signed char)97)) - (94)))))) && (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_99 [i_24] [i_24] [9ULL])), (arr_97 [i_24]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_99 [i_24] [i_24] [i_24])), (var_8))))))))))));
                    arr_102 [i_24] [i_24] [(unsigned char)20] = ((((/* implicit */_Bool) arr_99 [i_24] [i_25] [i_24])) || (((/* implicit */_Bool) var_0)));
                }
                arr_103 [i_25] [i_24] = ((arr_87 [i_24]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_95 [i_25])), ((short)-21209))))) : (var_1)))) : ((((~(arr_97 [i_25]))) >> (((((/* implicit */int) arr_99 [i_24] [i_24] [i_24])) - (10306))))));
            }
        } 
    } 
}
