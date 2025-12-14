/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35331
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
    var_15 = ((/* implicit */unsigned long long int) ((unsigned char) var_9));
    var_16 &= ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)-14093)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))));
    var_17 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (short)-14079)) ? (902804578U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)14116))))) ? (((int) arr_2 [i_1])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_15 [i_0] [i_3] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-10666))) <= (9223372036854775807LL)));
                                var_20 ^= ((/* implicit */signed char) (-(arr_9 [i_1] [i_1] [i_1] [i_1])));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))) / ((+(633272697U)))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned long long int) arr_16 [i_1] [i_5 + 1])))));
                        }
                        var_23 = ((/* implicit */_Bool) var_4);
                        var_24 *= ((/* implicit */short) ((6008361022474708480ULL) >> (((((/* implicit */int) (short)-10666)) + (10688)))));
                    }
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            var_25 ^= ((/* implicit */signed char) var_13);
                            var_26 = ((/* implicit */long long int) arr_29 [i_0] [i_0] [i_0] [i_7] [i_2 + 2]);
                            arr_30 [i_2 + 2] [i_7] = ((/* implicit */short) arr_3 [i_2 - 1]);
                            arr_31 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] = arr_26 [i_0] [i_7] [i_7];
                        }
                        for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            arr_35 [i_0] [i_7] [i_2] [i_7] [i_7] = ((/* implicit */long long int) var_8);
                            arr_36 [i_0] [i_7] [i_9] [i_7] [i_2 - 1] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) 1869335574)) : (776018116U)))) ? (arr_0 [i_2 + 1] [i_2 + 1]) : (arr_18 [i_1] [i_2 - 1] [i_7] [i_9])));
                        }
                        arr_37 [i_1] [i_7] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) arr_34 [i_7] [i_2] [i_2] [(signed char)7] [8ULL]))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        arr_40 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) arr_16 [i_0] [(_Bool)1])))));
                        var_27 *= ((/* implicit */short) var_10);
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            var_28 = ((signed char) arr_14 [i_0] [(short)9] [i_2 - 1] [i_11] [i_11]);
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (signed char)-92))));
                        }
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [5ULL] [8LL] [i_1] [i_1] [i_1] [(_Bool)1])) || (((((/* implicit */int) (short)10682)) == (arr_29 [i_2 + 1] [i_1] [i_2 - 1] [i_1] [i_10])))));
                    }
                    for (signed char i_12 = 2; i_12 < 10; i_12 += 3) 
                    {
                        arr_45 [i_0] [i_0] [i_1] [i_2] [i_12] = ((/* implicit */long long int) arr_39 [i_2 - 1] [i_12] [i_2 - 1] [i_12 + 2]);
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((long long int) (signed char)-115)))));
                        var_32 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2364594861U) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) || ((!(((/* implicit */_Bool) arr_39 [11ULL] [11ULL] [11ULL] [i_12 + 2]))))));
                    }
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_2 + 2] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) var_14)) ? (arr_17 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [(unsigned char)0] [i_1]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (-3952312222286182084LL))))))));
                    var_34 = ((/* implicit */short) ((long long int) arr_9 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 - 1]));
                }
                var_35 = ((/* implicit */long long int) arr_7 [i_0] [i_1]);
                arr_46 [i_0] [i_1] = ((/* implicit */_Bool) min((3518949181U), (((/* implicit */unsigned int) (short)14116))));
            }
        } 
    } 
    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
}
