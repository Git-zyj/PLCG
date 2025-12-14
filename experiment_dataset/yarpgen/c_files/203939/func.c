/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203939
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
    var_20 ^= var_13;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((signed char) (unsigned short)3));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)3)))))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 4; i_4 < 10; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_2 - 1] [i_2 - 1] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))) % (2772629935U)))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) var_1)))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [9U] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                            arr_17 [i_0] [i_1] [i_0] [0ULL] [i_0] = ((/* implicit */short) (-(((((/* implicit */int) (_Bool)0)) | (var_16)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            arr_26 [i_0] [(_Bool)1] [(unsigned char)5] [i_5] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_12 [i_6]))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8617))) : (4027438185326886733ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-(arr_24 [8LL] [i_5] [i_6] [i_7] [i_6] [i_0] [(short)10])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                for (unsigned int i_10 = 2; i_10 < 9; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_9] [i_10 - 2] [i_11])) + (((/* implicit */int) arr_23 [i_11]))));
                            arr_35 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)0] [i_10 - 1] [i_11]))))));
                            arr_36 [i_0] [i_0] [i_5] [(signed char)7] [i_10] [i_0] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2144709736U)) ^ (11526822860013145083ULL)));
                        }
                    } 
                } 
            } 
        }
        for (int i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_14 = 3; i_14 < 8; i_14 += 2) 
                {
                    arr_46 [i_0] [i_0] [i_0] [i_13] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)82))));
                    var_24 = ((/* implicit */long long int) var_16);
                    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)38659))))) % (arr_31 [i_13] [4ULL] [i_14 - 3] [i_14 - 2] [i_14 - 2] [i_14])));
                    arr_47 [i_14] [i_0] [i_12] [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((arr_32 [(signed char)9] [i_14] [i_14 - 3] [4LL] [i_14 + 2] [i_12] [0U]) ? (arr_43 [i_13] [i_14 + 2] [i_13] [4U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_13] [i_14 - 3] [i_13] [i_14 + 2] [i_14 + 2] [i_13] [i_13])))));
                }
                for (long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    arr_50 [i_0] [i_0] = ((/* implicit */int) ((short) ((var_1) ? (((/* implicit */int) arr_13 [i_0] [i_12] [(_Bool)0] [i_13] [(_Bool)0])) : (((/* implicit */int) var_14)))));
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)24)) && (((/* implicit */_Bool) var_11)))))));
                    arr_51 [(_Bool)1] [(_Bool)1] [i_13] [i_0] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524160LL)) ? (34909420574279240ULL) : (arr_43 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_0 [i_13]) >> (((var_15) - (14161124406946683717ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [(short)6])))))));
                    arr_52 [i_0] [i_0] [i_13] [i_0] = (-((~(((/* implicit */int) var_10)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) (-(arr_28 [i_17] [i_12])));
                            arr_57 [i_0] [i_13] [i_0] [i_13] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((4495647806313323964ULL) > (var_19)))) >> (((((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (unsigned short)38659)))) - (82)))));
                            arr_58 [i_0] [i_12] [i_13] [i_13] [i_17] &= ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) arr_7 [i_17] [i_13] [i_0] [i_0])))));
                            arr_59 [i_0] [i_12] [i_0] [i_16] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_41 [i_12] [i_12])) ? (arr_9 [i_13]) : (var_15))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_0] [10ULL] [i_17])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-64)))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (unsigned short i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_0] [i_12] [i_0] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_8 [i_0] [i_0] [i_0]))))));
                arr_62 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0] [i_12] [i_18] [i_12] [i_12] [i_18]))));
                arr_63 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_39 [i_18])))) ? (((((/* implicit */_Bool) 2144709736U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23))) : (0U))) : (arr_38 [i_12])));
            }
            for (unsigned short i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_42 [i_0] [i_0] [i_12] [i_19])) + (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (long long int i_20 = 1; i_20 < 8; i_20 += 4) 
                {
                    arr_68 [i_0] [i_12] [i_19] [i_0] = ((((/* implicit */_Bool) arr_9 [i_20])) ? (var_16) : (((/* implicit */int) (short)(-32767 - 1))));
                    /* LoopSeq 3 */
                    for (int i_21 = 0; i_21 < 11; i_21 += 2) 
                    {
                        arr_71 [i_0] [7U] [i_19] [i_20] [7U] [i_20] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10419)) ? (2052317896) : (((/* implicit */int) (unsigned short)10419)))))));
                        arr_72 [i_12] [i_0] [(unsigned short)10] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_20 + 2]))) | (arr_20 [i_20 + 3] [i_20 + 3] [(signed char)6]));
                    }
                    for (int i_22 = 1; i_22 < 8; i_22 += 2) 
                    {
                        arr_76 [i_22] [i_0] [i_19] [i_0] [3ULL] = ((((unsigned int) (_Bool)1)) + (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))));
                        arr_77 [i_0] [i_0] [(unsigned short)4] [i_0] [7LL] = ((/* implicit */_Bool) (short)-11121);
                        var_30 = ((/* implicit */signed char) ((unsigned long long int) arr_29 [i_22 + 3] [i_20 - 1] [i_20 - 1]));
                    }
                    for (unsigned int i_23 = 1; i_23 < 9; i_23 += 4) 
                    {
                        arr_82 [i_0] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (3320439913U)));
                        arr_83 [(unsigned short)4] [(unsigned short)4] [i_19] [i_19] [i_19] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3033)) ? (((/* implicit */unsigned long long int) arr_70 [7U] [(unsigned short)9] [i_19] [i_19] [i_0] [i_0] [i_0])) : (6297766321596286343ULL))))));
                        arr_84 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_20 + 1])) ? (arr_54 [i_20 + 3] [i_23 - 1] [i_23 + 1] [i_23 - 1] [i_23] [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_43 [i_0] [i_0] [9ULL] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? (3229903492U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) arr_7 [i_0] [7ULL] [i_20] [i_23])))))));
                        var_32 = ((/* implicit */signed char) ((unsigned int) arr_75 [i_23 - 1] [i_20 - 1]));
                    }
                    var_33 -= ((/* implicit */int) (-(((1522337361U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_85 [i_0] [6U] [i_0] [i_20] = ((/* implicit */_Bool) (+((+(var_0)))));
                    arr_86 [i_19] [i_0] = ((arr_25 [i_19] [i_19] [i_20] [i_20 + 1] [i_20 + 1] [i_20 + 1]) << (((arr_25 [i_12] [i_12] [i_19] [i_20 + 2] [i_20 + 1] [(short)8]) - (9550498265400296928ULL))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 1) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 3) 
                    {
                        {
                            var_34 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_80 [(short)8])) && (((/* implicit */_Bool) (short)-8086)))))));
                            arr_92 [i_0] [i_0] [i_0] [i_19] [i_24] [7U] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_65 [i_25] [i_25] [i_24] [i_24])) - (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))));
                            arr_93 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_37 [i_19] [5LL] [i_25]);
                            arr_94 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [5U] [i_24] [i_12] [5U])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_25])) && (((/* implicit */_Bool) (signed char)-41)))))));
                        }
                    } 
                } 
                arr_95 [i_0] [6LL] [(unsigned short)9] [i_0] = ((((/* implicit */int) arr_6 [i_0] [i_12] [i_0])) != (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])));
            }
            var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0] [4U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14248))) : (arr_91 [i_0] [(signed char)6])))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_0] [i_0] [(unsigned short)1] [i_12])))))));
        }
        var_36 &= ((/* implicit */unsigned short) (-(-1)));
    }
    var_37 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (var_15))) & (min((((var_15) ^ (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))))))));
}
