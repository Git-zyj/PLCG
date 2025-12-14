/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225856
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(var_0)))))) ? ((+(((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) var_8)))) & (max((((/* implicit */int) (_Bool)1)), (var_3)))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-19362))))) & (((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) var_15);
                                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 - 3] [i_4 + 3] [i_4] [i_4] [i_4]))) & (min((var_5), (((/* implicit */unsigned int) arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5])) ? (arr_10 [i_0] [i_5] [i_6] [i_7] [i_8] [i_8]) : (((/* implicit */int) arr_9 [i_0] [(short)7] [i_6] [i_7] [i_8 - 1])))))));
                                arr_25 [i_8] [i_7] [(short)0] [(short)0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_23 [i_0 - 3] [i_6] [i_8] [i_8] [i_8] [i_8 - 1] [i_8]), (arr_23 [i_8] [i_8] [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8])))), (max((arr_18 [i_8] [i_8 - 1] [i_8 - 1]), (var_4)))));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)91)) & (((/* implicit */int) (signed char)-76))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        for (long long int i_10 = 2; i_10 < 11; i_10 += 2) 
                        {
                            {
                                arr_31 [(_Bool)1] [(_Bool)1] [8] [(_Bool)1] [(signed char)5] [i_9] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))) & (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_6] [i_9]))) : ((~(max((((/* implicit */unsigned long long int) (signed char)-109)), (arr_28 [(_Bool)1] [i_0] [i_0 - 2] [i_0] [i_0] [11])))))));
                                arr_32 [i_0] [i_5] [i_6] [i_9] [i_10 + 4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) max((arr_9 [i_10] [(unsigned short)11] [i_10 - 1] [1LL] [i_10 - 1]), (arr_9 [i_10 - 1] [i_10] [i_10 - 1] [i_10] [i_10 - 1])))) : (((/* implicit */int) min((var_13), (((/* implicit */unsigned char) (_Bool)1)))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11)))))) & (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_10] [(_Bool)1] [i_10]))))), (((arr_29 [i_10] [i_9] [i_6] [i_6] [i_5] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_11)))))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_10] [i_5])))))));
                                var_25 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_5] [11] [i_10])) ? (arr_27 [i_0]) : (((/* implicit */long long int) 743582710))))) ? (((/* implicit */unsigned long long int) arr_27 [5])) : (arr_12 [i_0 - 1] [i_6] [i_9] [i_10 + 3] [i_10 + 2]))))));
                            }
                        } 
                    } 
                    arr_33 [i_0] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-120)) ? (var_14) : (var_14)))))))) & (((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)1209)))))));
                    var_26 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)78)), (var_6)))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (13475951186918671110ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))) & (((/* implicit */unsigned long long int) (~(min((var_0), (((/* implicit */int) arr_29 [i_0] [i_5] [i_5] [i_5] [i_6] [i_6])))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) ((short) arr_18 [i_0] [i_0 - 3] [i_0 + 1]));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 14; i_11 += 4) 
        {
            for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_15 [i_0 - 3] [5ULL])) & (arr_12 [i_0 - 3] [5] [i_11] [i_11] [(signed char)3]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_12] [i_0] [i_0])) ? (arr_15 [i_0 - 3] [(signed char)7]) : (arr_15 [i_0 - 3] [i_11]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 3; i_13 < 14; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_46 [i_13] [i_13] [i_12] [i_12] [i_13] [i_13] [i_14] = ((/* implicit */short) ((unsigned int) ((unsigned int) arr_16 [i_0] [i_12])));
                                arr_47 [i_14] [i_13] [(signed char)0] [i_13] [(short)14] = ((/* implicit */unsigned char) (((~(var_17))) & (var_10)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) min(((short)11826), ((short)-19286)))) ? (min((var_11), (((/* implicit */unsigned long long int) (unsigned short)59511)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)1023)) & (((/* implicit */int) (unsigned short)32768))))), (var_7))))));
    /* LoopNest 2 */
    for (unsigned short i_15 = 2; i_15 < 10; i_15 += 2) 
    {
        for (int i_16 = 1; i_16 < 13; i_16 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 14; i_17 += 3) 
                {
                    for (unsigned int i_18 = 3; i_18 < 12; i_18 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned short) arr_44 [i_15] [(short)8] [i_17] [i_15]))));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (((-(((((/* implicit */_Bool) var_10)) ? (var_9) : (arr_12 [i_15] [i_15] [(_Bool)1] [i_17] [i_18]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_6 [i_16] [i_15])) & (((/* implicit */int) var_2))))))))))));
                            var_32 = ((/* implicit */short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) min(((short)128), ((short)-32762)));
                            arr_63 [i_16] [i_16] [i_16] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)62))));
                            arr_64 [i_15] [4LL] [(unsigned short)7] [i_16] = ((/* implicit */unsigned short) ((short) min((max((arr_34 [i_15] [i_15]), (((/* implicit */unsigned short) (short)-1)))), (((/* implicit */unsigned short) (_Bool)1)))));
                        }
                    } 
                } 
                arr_65 [i_16] [i_16] = ((/* implicit */signed char) arr_23 [(_Bool)1] [i_16] [i_16 + 1] [i_16] [i_16] [(_Bool)1] [i_16]);
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 4) 
                    {
                        {
                            var_34 ^= ((/* implicit */_Bool) min((arr_66 [(unsigned char)10] [i_21]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_59 [i_15] [i_15] [i_15])) & (((/* implicit */int) (_Bool)1))))))))));
                            var_35 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 65535)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8160)))))), (((((/* implicit */unsigned long long int) var_0)) & (arr_16 [i_22] [i_21]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_23 = 0; i_23 < 16; i_23 += 1) 
    {
        for (int i_24 = 0; i_24 < 16; i_24 += 2) 
        {
            {
                arr_74 [i_23] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_72 [(unsigned char)9] [i_24] [i_24])), (var_4))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_70 [i_23])))))));
                /* LoopNest 2 */
                for (unsigned char i_25 = 0; i_25 < 16; i_25 += 1) 
                {
                    for (signed char i_26 = 1; i_26 < 13; i_26 += 2) 
                    {
                        {
                            arr_81 [i_23] [i_23] [i_26] [i_23] = ((/* implicit */unsigned long long int) arr_78 [i_26 + 3] [i_26 - 1] [(unsigned char)0] [i_26]);
                            var_36 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_75 [14LL])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_23]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) & (((/* implicit */unsigned long long int) min((max((arr_72 [i_23] [i_24] [8LL]), (arr_72 [10ULL] [i_24] [i_24]))), (((/* implicit */unsigned int) arr_73 [i_26 + 3])))))));
                            var_37 -= ((/* implicit */short) var_6);
                            var_38 = ((/* implicit */signed char) (+(((/* implicit */int) max((arr_73 [i_26 + 1]), (((/* implicit */short) var_13)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_27 = 1; i_27 < 15; i_27 += 4) 
                {
                    for (int i_28 = 0; i_28 < 16; i_28 += 4) 
                    {
                        {
                            arr_88 [i_24] [i_24] [i_27] [i_24] [(unsigned char)4] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_13), (((/* implicit */unsigned char) var_16))))) & (((/* implicit */int) ((unsigned char) arr_82 [i_27 + 1] [i_27])))));
                            arr_89 [i_28] [i_28] [i_28] [i_23] &= ((/* implicit */_Bool) ((min((max((((/* implicit */unsigned long long int) arr_80 [i_28] [i_27] [i_28])), (var_4))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-8176))))))) & (max((((/* implicit */unsigned long long int) ((int) arr_73 [(short)8]))), (min((var_11), (((/* implicit */unsigned long long int) (unsigned short)6073))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_29 = 0; i_29 < 16; i_29 += 3) 
                {
                    for (short i_30 = 2; i_30 < 15; i_30 += 4) 
                    {
                        {
                            arr_95 [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) ((65557) * ((+(((/* implicit */int) arr_80 [i_24] [6] [i_30]))))))) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_79 [i_30])) ? (2147483647) : (((/* implicit */int) arr_90 [i_23] [i_23] [i_23])))) : (((/* implicit */int) min((arr_76 [i_30] [i_30] [i_30] [i_30]), (var_13)))))) : ((-(((/* implicit */int) ((_Bool) var_7)))))));
                            arr_96 [i_23] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (_Bool)1))))), (var_10)));
                            arr_97 [i_23] [8] [i_24] [3LL] [i_30] = ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)59511)) & (((/* implicit */int) (signed char)-98)))), (((/* implicit */int) min((arr_83 [i_30 + 1] [i_30] [i_30 - 1] [i_30 - 1]), (((/* implicit */unsigned char) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_31 = 0; i_31 < 16; i_31 += 4) 
                {
                    for (signed char i_32 = 1; i_32 < 12; i_32 += 4) 
                    {
                        for (unsigned long long int i_33 = 3; i_33 < 15; i_33 += 2) 
                        {
                            {
                                arr_107 [i_23] [i_24] [i_32] [i_32] [i_33] = ((/* implicit */_Bool) -6942020206723898669LL);
                                arr_108 [i_32] = ((/* implicit */signed char) var_9);
                                var_39 *= ((/* implicit */long long int) min((((/* implicit */int) var_13)), (((((/* implicit */int) arr_100 [i_24] [i_31] [i_32])) & (((/* implicit */int) arr_101 [i_23] [i_23] [i_23] [i_23]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
