/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46815
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
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_15))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min(((short)-20635), (((short) (unsigned short)65535)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_19))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) (short)31188)) <= (((/* implicit */int) (short)-15))))))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (_Bool)0))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            var_24 += ((/* implicit */int) arr_12 [i_3] [i_3] [i_3]);
                            arr_21 [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_19))))) ? (((/* implicit */int) arr_10 [i_7] [i_7])) : (((arr_17 [i_3] [i_4] [i_5] [i_3]) >> (((max((var_1), (var_4))) - (11182905081285237551ULL)))))));
                        }
                        arr_22 [i_6] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) (short)-31188)) < (((/* implicit */int) (signed char)0))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                    {
                        arr_25 [i_8] = (-(((/* implicit */int) ((unsigned short) arr_23 [i_3] [i_4] [i_5] [i_8]))));
                        arr_26 [i_8] [i_5] [i_3] [i_8] = ((/* implicit */int) ((_Bool) (unsigned short)32334));
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
                        {
                            var_25 |= ((((/* implicit */_Bool) var_5)) ? (max((((unsigned long long int) (short)31184)), (((/* implicit */unsigned long long int) min((2147483647), (arr_19 [i_5] [i_5])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_19)) <= (((/* implicit */int) arr_7 [i_9] [i_9]))))) * (((arr_20 [i_3] [i_8] [i_5] [i_3] [i_3]) / (((/* implicit */int) arr_15 [i_3] [i_3] [i_3]))))))));
                            var_26 = ((/* implicit */signed char) var_8);
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                        {
                            arr_31 [i_8] [i_4] = ((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) - (((/* implicit */int) var_13))));
                            var_27 ^= ((/* implicit */_Bool) arr_8 [i_5]);
                            arr_32 [i_3] [i_3] [i_8] [i_8] [i_10] = ((((/* implicit */int) (signed char)-112)) >= (((/* implicit */int) (signed char)-3)));
                            arr_33 [i_3] [i_3] [i_4] [i_5] [i_8] [i_3] [i_3] = ((/* implicit */short) (+(arr_13 [i_10] [i_4] [i_5])));
                        }
                        arr_34 [i_3] [i_3] [i_8] [i_8] = ((/* implicit */int) (+((-(var_4)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
                    {
                        arr_37 [i_11] [i_3] [i_3] [i_11] = var_17;
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            var_28 -= ((/* implicit */long long int) 2147483647);
                            arr_40 [i_11] = ((((/* implicit */int) arr_28 [i_3] [i_5] [i_3] [i_11] [i_5])) >> (((/* implicit */int) var_14)));
                            var_29 -= (~(((/* implicit */int) var_10)));
                        }
                        for (unsigned char i_13 = 2; i_13 < 14; i_13 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)231));
                            var_31 = ((/* implicit */signed char) (~(((/* implicit */int) arr_36 [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_11]))));
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? ((+(((/* implicit */int) (short)25705)))) : (((/* implicit */int) ((((/* implicit */_Bool) -1639888990)) && (((/* implicit */_Bool) (unsigned short)32314)))))));
                        }
                        for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                        {
                            arr_46 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_18);
                            var_33 = ((/* implicit */short) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_0))));
                            arr_47 [i_14] [i_3] [i_11] [i_11] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -1411368557)) ? (((/* implicit */int) arr_39 [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_17))))));
                        }
                    }
                    arr_48 [i_5] = ((/* implicit */short) (-(min((arr_41 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) var_17)))))))));
                    arr_49 [i_3] [i_4] = (unsigned short)61850;
                    arr_50 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_3] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_4] [i_4]))) : (arr_13 [i_3] [i_3] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((-1639888990), (((/* implicit */int) (short)25705))))))))) : (((((/* implicit */_Bool) arr_35 [i_3] [i_5])) ? (var_8) : (((/* implicit */long long int) arr_35 [i_3] [i_5]))))));
                }
                /* vectorizable */
                for (signed char i_15 = 1; i_15 < 12; i_15 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) arr_35 [i_3] [(short)12]))));
                    var_35 += ((/* implicit */unsigned long long int) ((signed char) 9187343239835811840ULL));
                }
                /* vectorizable */
                for (signed char i_16 = 1; i_16 < 12; i_16 += 1) /* same iter space */
                {
                    var_36 = ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_44 [i_16 + 1] [i_4] [i_4] [i_4] [i_3]) : (1639888983));
                    /* LoopSeq 2 */
                    for (signed char i_17 = 3; i_17 < 15; i_17 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (~((-2147483647 - 1)))))));
                        var_38 = (i_16 % 2 == 0) ? (((/* implicit */short) ((arr_42 [i_3] [i_16] [i_16] [i_17 + 1]) << (((arr_42 [i_3] [i_16] [i_3] [i_17 + 1]) - (1820144914)))))) : (((/* implicit */short) ((arr_42 [i_3] [i_16] [i_16] [i_17 + 1]) << (((((arr_42 [i_3] [i_16] [i_3] [i_17 + 1]) - (1820144914))) - (256473699))))));
                    }
                    for (signed char i_18 = 3; i_18 < 15; i_18 += 3) /* same iter space */
                    {
                        arr_61 [i_3] [i_3] [i_3] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                        var_39 += ((/* implicit */unsigned char) arr_36 [8] [i_16 - 1] [i_18 - 3] [i_16 + 2] [i_16 - 1] [8]);
                        arr_62 [i_16] [i_16] = ((/* implicit */_Bool) ((((var_14) || (((/* implicit */_Bool) arr_35 [i_18] [i_16])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (var_2))))) : (((long long int) var_12))));
                        var_40 += ((/* implicit */short) var_1);
                    }
                    arr_63 [i_16] [i_4] = ((/* implicit */signed char) (-(var_8)));
                    var_41 -= ((/* implicit */short) ((((/* implicit */int) var_0)) + ((~(1639888990)))));
                }
                for (signed char i_19 = 1; i_19 < 12; i_19 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        arr_70 [i_20] [i_19] [i_3] [i_19] [i_3] = ((/* implicit */unsigned char) 18446744073709551604ULL);
                        var_42 = ((/* implicit */int) var_3);
                        arr_71 [i_3] [i_3] [i_19 - 1] [i_3] [i_19 - 1] [i_19] = ((/* implicit */int) var_10);
                        arr_72 [i_4] [i_4] [i_19] [i_4] = ((/* implicit */int) var_1);
                        arr_73 [i_19] [i_19] [i_19 + 4] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) min(((short)32767), ((short)25138)))) ? (((/* implicit */unsigned long long int) min((-1087057524), (((/* implicit */int) var_11))))) : (min((arr_45 [i_19 + 3] [i_19 + 3] [i_19 + 1] [i_19 + 1] [i_19 + 2]), (arr_45 [i_19 + 3] [i_19 - 1] [i_19 + 4] [i_19 + 1] [i_19 + 2])))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 2) 
                    {
                        arr_77 [i_3] [i_3] [i_19] [i_19 + 1] [i_19] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)61852))));
                        var_43 &= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_59 [i_19 + 2] [i_19 + 2] [i_19 + 1] [i_19 + 2] [i_19 - 1] [i_19 + 3])) : (((/* implicit */int) arr_39 [i_19 + 2] [i_19 - 1] [i_19 + 2] [i_19 + 1] [i_19 + 1]))));
                        arr_78 [i_3] [i_4] [i_4] [i_4] [i_19] = ((/* implicit */short) var_1);
                        /* LoopSeq 1 */
                        for (int i_22 = 4; i_22 < 15; i_22 += 1) 
                        {
                            var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((_Bool) (unsigned short)17287)))));
                            arr_81 [i_19] [i_19] [i_19] [i_19] [i_3] = ((/* implicit */signed char) ((unsigned long long int) 2147483633));
                        }
                    }
                    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))) : (min((((/* implicit */long long int) arr_14 [i_19] [i_19] [i_4] [i_19 + 3])), (min((((/* implicit */long long int) arr_14 [i_19 - 1] [i_19 - 1] [i_4] [i_3])), (arr_43 [i_3] [i_3] [(short)4] [i_3] [i_3]))))))))));
                }
                var_46 = ((/* implicit */int) min((var_46), ((~(min((((/* implicit */int) var_14)), (arr_27 [6ULL] [i_4])))))));
                arr_82 [i_3] = ((/* implicit */short) var_3);
                arr_83 [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) 2147483617)) && (((/* implicit */_Bool) arr_41 [i_3] [i_3] [i_3] [i_3] [i_4] [i_3])))))));
                arr_84 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_18);
            }
        } 
    } 
}
