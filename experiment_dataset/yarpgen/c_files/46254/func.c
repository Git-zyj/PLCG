/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46254
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
    var_11 ^= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_13 [i_3] [i_1] = ((/* implicit */short) (+(((((var_10) ? (8625229697310425550ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) ^ (0U))))))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                var_12 |= ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_15 [i_2] [i_1] [i_1] [i_1] [i_1])))));
                                arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) (unsigned char)224);
                            }
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                            {
                                arr_21 [i_1] [i_3] [i_2] [i_2] [i_5] [i_1] = ((/* implicit */unsigned short) arr_14 [i_0] [i_3] [i_2] [i_3] [i_5]);
                                var_13 = ((/* implicit */long long int) 4294967277U);
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                            {
                                var_14 *= var_7;
                                var_15 = ((/* implicit */unsigned int) (-(var_9)));
                            }
                        }
                    } 
                } 
                var_16 += ((/* implicit */int) (+(4294967282U)));
                arr_25 [i_0] [i_1] |= ((/* implicit */unsigned long long int) 19U);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        arr_28 [i_7] = ((/* implicit */short) (+(arr_7 [i_7] [i_7])));
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_22 [i_7] [i_7] [i_7] [i_7] [i_7]))));
        var_18 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) / (6U))) : (arr_3 [i_7]));
    }
    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (arr_4 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8] [i_8] [i_8] [i_8] [i_8]))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))))))));
        arr_32 [i_8] = ((/* implicit */unsigned long long int) ((((arr_7 [i_8] [i_8]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_8]))))) != (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (((((((/* implicit */int) var_8)) + (2147483647))) << (((var_4) - (2861990154005542497LL))))))))));
        arr_33 [i_8] = min((((/* implicit */long long int) (unsigned short)41246)), (var_9));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 3; i_9 < 15; i_9 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) < (6U))))) * (arr_15 [i_8] [i_9] [i_10] [i_11] [i_12])));
                            arr_47 [i_10] [i_8] [i_9] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) 1842196471U)))));
                            arr_48 [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (((/* implicit */int) (signed char)27))));
                            arr_49 [i_10] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) min(((unsigned short)20094), (((/* implicit */unsigned short) (_Bool)1))))) * (min((((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_11 [i_8] [i_9] [i_10] [i_11] [i_11] [i_12])) - (56245))))), (((((/* implicit */_Bool) arr_43 [i_8] [i_9] [i_9] [i_11])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_43 [i_12] [i_9] [i_11] [i_11]))))))));
                        }
                    } 
                } 
                arr_50 [i_8] [i_10] [i_10] = ((/* implicit */signed char) (-(((((((/* implicit */int) arr_42 [i_10] [i_9])) != (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) 8886058006067060835LL)))))))));
            }
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                var_21 = ((/* implicit */unsigned char) var_7);
                arr_53 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) var_5);
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((long long int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 1785326463U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_2 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_0)))))))));
            }
            for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                arr_56 [i_8] [i_9] [i_14] = ((/* implicit */short) arr_45 [i_8] [i_9]);
                arr_57 [i_8] [i_9] [i_14] [i_14] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_44 [i_9] [i_9 - 3] [i_9] [i_8] [i_9] [i_9] [i_9 + 1])) ? (arr_44 [i_9] [i_9 - 1] [i_9] [i_14] [i_9] [i_9] [i_9 - 2]) : (arr_44 [i_9] [i_9 - 3] [i_9] [i_14] [i_9] [i_9] [i_9 - 3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 9U)))))));
            }
            /* LoopSeq 3 */
            for (unsigned char i_15 = 3; i_15 < 14; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_16 = 2; i_16 < 13; i_16 += 2) 
                {
                    for (unsigned int i_17 = 4; i_17 < 14; i_17 += 4) 
                    {
                        {
                            arr_65 [i_8] [i_8] [i_9] [i_15] [i_15] [i_16] [i_17] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967292U)) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) (short)-20439)))) : (((((/* implicit */_Bool) 4991526975144074399ULL)) ? (1700787487) : (((/* implicit */int) (short)-19709))))))), (((unsigned long long int) ((((/* implicit */int) (unsigned char)195)) - (((/* implicit */int) (_Bool)1)))))));
                            var_23 = ((/* implicit */long long int) ((unsigned int) ((_Bool) arr_44 [i_9 + 1] [i_15] [i_15 - 2] [i_15] [i_17 - 2] [i_17] [i_17])));
                        }
                    } 
                } 
                var_24 = var_2;
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    for (long long int i_20 = 3; i_20 < 14; i_20 += 4) 
                    {
                        {
                            arr_74 [i_8] [i_19] [i_9] [i_19] [i_20] |= ((/* implicit */long long int) ((((((/* implicit */long long int) ((var_10) ? (((/* implicit */int) arr_46 [i_20] [i_19] [i_18])) : (((/* implicit */int) (unsigned short)27))))) < (((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65508))) : (arr_5 [i_8] [i_18] [i_19]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_8] [i_9] [i_18]))) : (15U)));
                            arr_75 [i_8] [i_9] [i_9] [i_18] [i_19] [i_20] = ((/* implicit */_Bool) (unsigned char)5);
                        }
                    } 
                } 
                arr_76 [i_8] [i_9] [i_18] = arr_1 [i_8];
            }
            for (signed char i_21 = 0; i_21 < 16; i_21 += 4) 
            {
                arr_81 [i_8] = (((!(((((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_8] [i_9] [i_21]))) >= (19U))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_21] [i_9] [i_9] [i_9] [i_9 - 2]))) < (min((((/* implicit */unsigned int) arr_60 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])), (2256141597U)))))) : (((/* implicit */int) (!(var_6)))));
                var_25 |= ((/* implicit */unsigned int) ((_Bool) var_0));
                arr_82 [i_8] [i_9] [i_21] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (arr_52 [i_21] [i_9] [i_21])))) ? (min((((/* implicit */long long int) 3834963707U)), (arr_4 [i_9]))) : (((((/* implicit */_Bool) 873905953U)) ? (arr_5 [i_8] [i_8] [i_8]) : (((/* implicit */long long int) arr_67 [i_8] [i_9] [i_21] [i_9]))))))) ? (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) > (max((var_9), (((/* implicit */long long int) 4294967284U))))))) : (((/* implicit */int) max((min((((/* implicit */unsigned char) arr_63 [i_8] [i_8] [i_9] [i_21] [i_21])), ((unsigned char)24))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 61440U))))))))));
                var_26 = ((/* implicit */unsigned int) (+((+(((8435203732906426410LL) / (var_0)))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_22 = 0; i_22 < 16; i_22 += 4) 
            {
                for (unsigned char i_23 = 0; i_23 < 16; i_23 += 4) 
                {
                    {
                        arr_89 [i_8] [i_8] [i_8] [i_8] [i_8] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned short)531)), (4294905852U))) < (min((((/* implicit */unsigned int) var_3)), (2144941205U))))))) % (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (10U)))));
                        var_27 ^= var_6;
                    }
                } 
            } 
        }
        arr_90 [i_8] = ((/* implicit */_Bool) ((((((/* implicit */long long int) 26U)) > (9112711523547104023LL))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_39 [i_8] [i_8] [i_8] [i_8])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)216)), (1560297224U))))))) : ((-((-(((/* implicit */int) var_5))))))));
    }
    for (unsigned char i_24 = 0; i_24 < 15; i_24 += 4) 
    {
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (~(0U))))));
        arr_93 [i_24] &= ((/* implicit */short) ((min((min((((/* implicit */long long int) 4294967277U)), (arr_92 [i_24] [i_24]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_11 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])), (2973363434U)))))) % (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_16 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])))) ? (((/* implicit */int) arr_77 [i_24] [i_24] [i_24] [i_24])) : (((/* implicit */int) (unsigned short)21687)))))));
        var_29 = ((/* implicit */long long int) (unsigned char)219);
    }
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))) - (((/* implicit */int) var_5))));
}
