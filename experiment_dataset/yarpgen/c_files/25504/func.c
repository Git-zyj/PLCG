/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25504
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) max((arr_4 [i_4] [i_3] [16]), (((/* implicit */int) var_2)))))));
                                var_11 ^= ((/* implicit */short) (-(min(((~(arr_9 [i_4] [i_2]))), (((/* implicit */unsigned long long int) min(((short)-32765), ((short)-12389))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_15 [i_6] [i_2] [i_5] [i_2] [i_1] [1] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (127))))))));
                                var_12 += ((/* implicit */unsigned char) min((max(((+(-1305078733))), (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */int) (short)-12373)) == (((/* implicit */int) (!(((/* implicit */_Bool) -844124561))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 4; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max((-8317346404509628035LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((-(1305078725))) : (((/* implicit */int) arr_16 [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_8] [i_8] [i_8 - 3]))))))))));
                                var_14 = ((/* implicit */long long int) max((((/* implicit */short) var_2)), ((short)-21379)));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [7])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_16 [(short)14] [i_7] [16ULL] [i_1] [i_0] [i_0])) & (((/* implicit */int) var_1))))))))) : (((long long int) 402802653785142023LL))));
                                arr_22 [i_0] [i_1] [i_2] [i_7] [i_8] = (((!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-24752))))) != (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (short)-16988)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            {
                                arr_27 [i_9] [i_2] [i_2] [i_1] [i_9] [i_9] = var_6;
                                var_16 = ((/* implicit */signed char) max(((+(var_6))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_10])))))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) -223392862))))))))));
                                var_18 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-32765)))));
                                arr_28 [i_10] [i_0] [i_9] [i_9] [i_0] [i_0] = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            {
                                arr_36 [i_11] [i_1] [i_11] [4] [i_12] = ((/* implicit */_Bool) (+(min((((/* implicit */int) (unsigned short)16414)), (arr_0 [i_12] [i_0])))));
                                var_19 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [16] [i_2] [i_11] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (8793945538560ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (arr_34 [i_12] [i_11] [i_2] [i_1] [(short)2])));
                                arr_37 [i_11] [i_11] [i_11] [i_11] [1] [i_0] = ((/* implicit */unsigned int) (((~(-7065641495637500050LL))) > (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)49467)), (min((-2078103169), (((/* implicit */int) var_7)))))))));
                                var_20 += ((/* implicit */signed char) ((int) (-(((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_13 = 4; i_13 < 19; i_13 += 4) 
    {
        for (int i_14 = 0; i_14 < 23; i_14 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    for (unsigned char i_16 = 1; i_16 < 22; i_16 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)24789)) - (24775)))));
                            var_22 |= ((/* implicit */int) 2754022144U);
                            arr_48 [i_16] = ((/* implicit */int) max((max((((((/* implicit */_Bool) var_9)) ? (arr_47 [16U] [22] [(signed char)20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) arr_44 [i_16] [(unsigned char)5] [i_14] [(short)19])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_39 [i_14] [8U])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        for (unsigned int i_19 = 3; i_19 < 19; i_19 += 3) 
                        {
                            {
                                arr_57 [i_13] [i_14] [i_17] [i_18] [i_19] = ((/* implicit */short) -9237057);
                                arr_58 [i_19] [i_18] [i_17] [i_18] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_45 [i_19] [(unsigned short)14] [i_17] [i_14] [i_13] [i_13]))))) ? (((/* implicit */int) arr_45 [i_19 + 1] [i_19 - 2] [i_19 - 2] [i_19] [i_19 + 3] [i_19 + 3])) : (((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 23; i_20 += 3) 
                {
                    for (signed char i_21 = 4; i_21 < 20; i_21 += 1) 
                    {
                        {
                            arr_64 [i_20] [i_14] [i_14] [i_20] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_42 [i_21 - 4] [(signed char)19] [i_14]), (((/* implicit */unsigned int) 2136531071)))))));
                            arr_65 [i_13] [i_20] [i_14] [i_14] [i_21] = ((/* implicit */int) var_1);
                            var_23 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_51 [i_13] [i_20] [i_14] [i_14] [i_13] [i_13])) : ((+(((/* implicit */int) (short)0)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_22 = 0; i_22 < 23; i_22 += 3) 
                {
                    for (short i_23 = 0; i_23 < 23; i_23 += 1) 
                    {
                        {
                            arr_72 [(_Bool)1] [16] [i_23] [i_13] [(signed char)6] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_44 [i_23] [i_22] [22] [9])) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_55 [i_13] [i_13 + 1] [i_13] [i_13 + 4] [i_13 + 4] [(short)7]))))) ? ((-(((2387797851U) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) (~(var_6))))));
                            var_24 = ((/* implicit */long long int) min(((-(((((/* implicit */int) (short)7858)) - (((/* implicit */int) var_3)))))), ((-(((/* implicit */int) var_2))))));
                            var_25 = ((/* implicit */int) (+((+(arr_39 [i_13 - 4] [i_13 - 1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_24 = 0; i_24 < 23; i_24 += 2) 
                {
                    for (signed char i_25 = 2; i_25 < 22; i_25 += 1) 
                    {
                        for (short i_26 = 0; i_26 < 23; i_26 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)24685)) ? (((/* implicit */int) (unsigned short)16086)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) * ((~(9U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                                var_27 = max((((((((/* implicit */int) var_4)) % (var_6))) + (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_5))))))), ((+(((/* implicit */int) min(((short)21819), (((/* implicit */short) var_9))))))));
                                arr_83 [i_25] = ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)12425)) ? (1154544756975365800ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))))))));
                                var_28 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_6))))));
                                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_56 [i_13] [i_25] [i_13] [i_14] [i_13]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3997764278493673549ULL)))))) : (min((((/* implicit */unsigned int) (signed char)-21)), (4294967295U))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_27 = 2; i_27 < 14; i_27 += 2) 
    {
        for (unsigned long long int i_28 = 4; i_28 < 14; i_28 += 4) 
        {
            for (short i_29 = 0; i_29 < 15; i_29 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_30 = 0; i_30 < 15; i_30 += 2) 
                    {
                        for (unsigned long long int i_31 = 0; i_31 < 15; i_31 += 2) 
                        {
                            {
                                arr_94 [i_27] [i_29] = ((/* implicit */unsigned long long int) (-(((32767) - (((/* implicit */int) (unsigned short)38754))))));
                                arr_95 [i_31] = ((/* implicit */signed char) (-((-(max((var_6), (-536870912)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_32 = 0; i_32 < 15; i_32 += 2) 
                    {
                        for (int i_33 = 4; i_33 < 13; i_33 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */int) max((var_30), (min((((/* implicit */int) arr_52 [i_27] [i_29] [16] [i_27])), (var_6)))));
                                var_31 |= ((/* implicit */short) min(((+(((-6691135758285854310LL) % (((/* implicit */long long int) -364136165)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((4080) >> (((((/* implicit */int) var_0)) + (16778)))))) ? (((/* implicit */int) max((var_2), (((/* implicit */signed char) (_Bool)0))))) : (((/* implicit */int) var_1)))))));
                                arr_102 [i_33 - 3] [i_32] [i_29] [i_28] = ((/* implicit */short) min((-2147483629), (((/* implicit */int) (short)18157))));
                                var_32 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_69 [i_32] [i_33 - 2] [i_33 - 2] [i_28 - 2] [i_32]))))));
                                arr_103 [i_27] [i_28 - 4] [i_29] [i_29] [(unsigned char)6] [1] = ((/* implicit */signed char) arr_18 [i_27] [i_28] [i_28 - 4] [i_29] [i_28 - 4] [(unsigned char)13]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_34 = 0; i_34 < 15; i_34 += 4) 
                    {
                        for (unsigned long long int i_35 = 2; i_35 < 12; i_35 += 4) 
                        {
                            {
                                var_33 *= ((/* implicit */short) max((((((/* implicit */int) var_8)) % (((/* implicit */int) var_2)))), ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
                                var_34 = ((/* implicit */long long int) (+(-1240335575)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_36 = 0; i_36 < 22; i_36 += 2) 
    {
        for (unsigned long long int i_37 = 0; i_37 < 22; i_37 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_38 = 0; i_38 < 22; i_38 += 2) 
                {
                    for (int i_39 = 0; i_39 < 22; i_39 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) : (-7619880463641952788LL)))) ? (((/* implicit */int) arr_40 [i_38])) : ((~(((/* implicit */int) var_5)))))))))));
                            arr_121 [i_36] [i_36] [i_36] [i_36] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */short) var_3)), (var_7)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (short)12388)) & (((/* implicit */int) var_4)))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_3)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_40 = 0; i_40 < 22; i_40 += 4) 
                {
                    for (unsigned short i_41 = 0; i_41 < 22; i_41 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_117 [i_40] [i_36])), (((((/* implicit */_Bool) var_3)) ? (14448979795215878049ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))))))), (((/* implicit */unsigned long long int) arr_40 [17LL]))));
                            arr_128 [i_41] [i_37] [i_37] [i_36] = ((/* implicit */long long int) ((((min((((/* implicit */int) var_7)), (arr_119 [13ULL] [13ULL] [(unsigned short)20] [i_36]))) + (2147483647))) >> (((/* implicit */int) ((var_6) != (((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_42 = 0; i_42 < 22; i_42 += 2) 
                {
                    for (signed char i_43 = 0; i_43 < 22; i_43 += 2) 
                    {
                        {
                            var_37 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_75 [i_37]))));
                            var_38 = ((/* implicit */int) max((max((arr_132 [i_42] [i_37] [(unsigned char)18]), (((/* implicit */unsigned long long int) -1240335575)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_76 [i_37] [i_37])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_44 = 1; i_44 < 19; i_44 += 2) 
                {
                    for (short i_45 = 0; i_45 < 22; i_45 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */_Bool) var_7);
                            arr_139 [i_37] [i_37] [i_44] [i_45] = ((/* implicit */short) ((min((-128303410), (-1251828059))) - (((((/* implicit */_Bool) min((var_8), (((/* implicit */short) arr_113 [i_37] [i_37]))))) ? (((4194302) % (var_6))) : (((/* implicit */int) var_0))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
