/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199434
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
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_8) : (var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned char) ((((max((arr_0 [i_2]), (((/* implicit */long long int) var_0)))) ^ (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)8146))))))) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_0] [i_2]))) ? (arr_5 [i_2] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-6)) || (((/* implicit */_Bool) (unsigned short)0))))))));
                    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_2]))));
                    var_17 *= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
                    var_18 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (((unsigned long long int) max((arr_1 [1ULL] [i_1]), ((unsigned char)116))))));
                }
                for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 256404928)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [18U] [(unsigned char)17] [i_4])))))) : (((((/* implicit */_Bool) (unsigned short)57389)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (4177970691737236010LL)))));
                        arr_12 [i_0] [i_1] [i_3 - 4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 60127156U)) || (((/* implicit */_Bool) arr_0 [i_3]))));
                        var_20 -= ((/* implicit */unsigned char) arr_7 [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) : (3560073960U)))) ? (((unsigned long long int) 10612197173980398973ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))));
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) 4201922552U))), (((((/* implicit */_Bool) arr_13 [i_1] [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)41794)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))))));
                            var_23 |= ((/* implicit */unsigned long long int) ((((_Bool) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_6])) ? (arr_9 [i_6] [(_Bool)1] [i_6]) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))))))));
                        }
                        for (short i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_3] [i_5] [i_7])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (2913696930934586669ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10114358401868797579ULL)) ? (((/* implicit */int) (unsigned short)58896)) : (((/* implicit */int) (unsigned char)140)))))))))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_3] [i_3 + 1] [i_7] [i_5] [i_5]))))) * (((((/* implicit */int) (_Bool)1)) << (((var_4) - (1505520679)))))));
                            arr_21 [i_7] [i_7] [i_7] [i_7] [i_7] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_13 [i_0] [i_7])))) ? (min((8388607), (((/* implicit */int) arr_3 [i_1] [i_5] [5ULL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_5] [i_7])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_1]))) : (arr_13 [i_1] [i_1])))) ? (max((((/* implicit */long long int) var_7)), (arr_0 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)(-32767 - 1)))))))));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_1]);
                            var_27 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_1]);
                        }
                        var_28 = ((/* implicit */unsigned short) ((min((arr_0 [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))))) & (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))) : (4294967295U)))) + (((long long int) (unsigned short)65535))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_29 ^= ((((/* implicit */_Bool) var_3)) ? (arr_19 [(_Bool)1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) var_11)));
                                var_30 ^= max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32767)))))))), (((arr_2 [i_3 - 2] [i_3 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))))));
                            }
                        } 
                    } 
                }
                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (short)-6322))));
                /* LoopSeq 2 */
                for (long long int i_11 = 4; i_11 < 20; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_12 = 2; i_12 < 19; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) 18016355320226563746ULL);
                                arr_39 [i_13] [i_12] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) 0U);
                            }
                        } 
                    } 
                    var_33 = (unsigned char)255;
                }
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 2; i_16 < 19; i_16 += 2) 
                        {
                            {
                                var_34 -= ((/* implicit */unsigned short) ((((int) 1509565356U)) + (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned char)224))) || (((/* implicit */_Bool) 1938730520U)))))));
                                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)30383)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) ((unsigned char) arr_7 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_14] [i_15] [i_16])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_31 [i_16] [i_16] [i_16] [i_16])))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)1)), (((int) ((((/* implicit */unsigned int) 458752)) & (60127156U)))))))));
                        var_37 = ((/* implicit */unsigned char) max((max((((long long int) arr_20 [i_0] [i_0] [(unsigned char)1] [i_14] [i_1])), (((/* implicit */long long int) ((int) (_Bool)1))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)247)), (arr_41 [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-(arr_0 [i_17])))))));
                        var_38 = ((/* implicit */unsigned short) ((((_Bool) arr_25 [i_0] [i_1])) ? (((/* implicit */int) ((((_Bool) (signed char)0)) || (((/* implicit */_Bool) ((unsigned short) var_7)))))) : (((/* implicit */int) var_1))));
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) 
                        {
                            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [7U] [i_0] [i_0] [9ULL]))));
                            var_40 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_14]);
                            arr_52 [i_1] [i_0] [i_14] [(unsigned short)21] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_14] [i_1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 1160116057)), (var_2)))))))));
                        }
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 22; i_19 += 4) 
    {
        for (unsigned char i_20 = 0; i_20 < 22; i_20 += 2) 
        {
            {
                var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) arr_23 [i_19] [i_20] [i_20] [i_19] [i_20])))))))))));
                var_42 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_1))), (((-1) & (arr_50 [i_20] [3ULL] [(unsigned char)9] [i_19] [i_19])))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (arr_0 [i_20])))) ? (((/* implicit */int) arr_18 [i_20] [i_19] [i_20] [i_20] [i_20])) : (((/* implicit */int) ((((/* implicit */_Bool) 60127156U)) || (((/* implicit */_Bool) arr_47 [18] [i_20] [18] [(unsigned short)14] [i_20] [i_20] [i_19]))))))) : (min((((((/* implicit */_Bool) (short)1467)) ? (((/* implicit */int) var_1)) : (arr_45 [i_20] [i_20] [i_20] [i_20] [i_20]))), ((+(((/* implicit */int) var_11))))))));
                var_43 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (short)-14117)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))));
            }
        } 
    } 
}
