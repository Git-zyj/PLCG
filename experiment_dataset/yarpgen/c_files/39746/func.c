/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39746
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
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */_Bool) min(((+(var_11))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((min((arr_9 [8ULL] [8ULL] [i_0 - 2] [i_1 - 2] [(unsigned short)18] [i_3 + 1]), (((/* implicit */unsigned long long int) -6651684217084634436LL)))) << (((arr_9 [i_0] [i_0] [i_0 + 1] [i_1 - 4] [i_1] [i_3 - 1]) - (9198743478672452523ULL)))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) < ((+(((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_3] [i_0]))))));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) arr_10 [(_Bool)1] [i_1] [i_2] [i_3 - 1] [i_4]))))) != ((~(((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)14] [i_3 - 1])))))))));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 4) 
                        {
                            var_20 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (unsigned char)114))))) ? (var_11) : (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((unsigned char)167), (((/* implicit */unsigned char) (_Bool)0))))), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_4 [i_3] [i_0] [i_0])) : (((/* implicit */int) arr_13 [5U] [i_2] [5U]))))))));
                            var_21 = ((/* implicit */short) max(((-((+(arr_11 [i_1] [i_1]))))), (min((9223372036854775807LL), (((/* implicit */long long int) (short)0))))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) (!((_Bool)1)));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((signed char) var_11)))));
                        }
                        arr_21 [i_0] = ((/* implicit */short) arr_18 [i_0 + 1] [i_2 - 1] [i_3] [i_3 - 1]);
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [18U] [i_1] [(unsigned short)12] [i_7] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (4325717766134704696ULL)))))));
                        var_24 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1]))))), ((-(5438952257160465899ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)23354))))), (min((((/* implicit */int) arr_1 [(short)12] [i_0])), (var_15))))))));
                        var_25 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [(short)4] [i_2 - 1] [(short)4]))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_1] [i_0] [i_8] [i_8] [i_9] [i_9] = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2] [(signed char)15]))) != (arr_18 [(unsigned char)16] [(unsigned char)16] [(unsigned char)12] [i_9])))));
                            var_26 -= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_23 [i_1 - 4] [i_1 - 4])))))));
                            var_28 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_8 - 1] [(signed char)15] [i_8 - 1] [9ULL])) ? (arr_26 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8]) : (arr_26 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [(short)16] [i_2 - 1] [i_1] [i_1] [12ULL])))))));
                            arr_35 [i_0] [i_0] [i_0] [7LL] [i_8] [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_1 - 2] [i_8 - 1] [i_10 - 1] [i_0 - 2])) ? (((/* implicit */int) (short)-23355)) : (arr_26 [i_1 - 4] [i_8 - 1] [i_10 - 1] [i_0 - 2])));
                        }
                        arr_36 [i_0] [i_0] [(unsigned short)4] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((max((((/* implicit */unsigned int) var_2)), (var_13))) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        var_31 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_26 [(unsigned short)11] [i_1] [i_2] [i_8])) ? (((((/* implicit */_Bool) (unsigned char)68)) ? (var_16) : (arr_19 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))))));
                        arr_37 [i_0] [i_0] [i_1] [(unsigned char)1] [i_2] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) / (max(((+(((/* implicit */int) arr_12 [(_Bool)1] [i_0] [i_1] [0LL] [i_8] [19ULL] [i_8])))), (((/* implicit */int) arr_5 [i_2 + 3] [i_2 + 3] [i_0]))))));
                    }
                    var_32 = ((/* implicit */unsigned char) ((unsigned short) (-(arr_14 [i_0 + 1]))));
                    var_33 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))));
                    var_34 = ((/* implicit */unsigned short) (+(4325717766134704676ULL)));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */short) (((+(var_2))) > (((var_9) ? ((~(((/* implicit */int) (short)-14092)))) : (((/* implicit */int) (short)-1))))));
}
