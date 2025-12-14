/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51031
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((signed char) arr_0 [i_0] [i_0]))), (var_9)));
        var_12 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_13 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) arr_1 [i_0])))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : ((+(var_10)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (8912571215465521519ULL)))));
        arr_4 [i_0] [(unsigned char)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(unsigned short)0] [i_0])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (arr_3 [i_0] [i_0]))) : (((/* implicit */int) ((short) arr_3 [i_0] [i_0])))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) ((var_3) ? (((/* implicit */int) arr_8 [11])) : (((/* implicit */int) arr_7 [i_1] [i_1])))));
        var_15 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        var_16 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
        arr_12 [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(short)5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)143))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_11 [i_2 - 1]))))));
    }
    var_17 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_18 = (-(((/* implicit */int) max((arr_24 [i_7 + 3]), (arr_24 [i_7 + 2])))));
                                arr_25 [1U] [i_4] [i_4] [i_6] [i_4] = ((/* implicit */_Bool) var_4);
                                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((549755813887LL) == (((/* implicit */long long int) ((/* implicit */int) (short)-24508))))))))) >= ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24510))) : (max((var_4), (((/* implicit */unsigned long long int) arr_17 [i_3] [i_3] [i_4]))))))));
                                var_20 = ((/* implicit */long long int) ((short) (unsigned char)209));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(max((((/* implicit */int) (signed char)26)), (2035667801))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_30 [i_3] [(signed char)4] [(short)10] [i_4] [i_8] [(signed char)16] = ((/* implicit */unsigned int) arr_18 [i_8] [i_4] [i_4]);
                                var_22 = ((/* implicit */unsigned short) arr_26 [i_3] [(short)3] [i_3] [i_9]);
                                arr_31 [i_3] [i_4] [i_4] [i_5] [10U] [i_9] = ((/* implicit */unsigned int) ((unsigned short) max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-43)))), ((+(var_5))))));
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) arr_29 [i_3] [i_4] [i_5] [(short)9])) > (((unsigned long long int) (_Bool)1))))))));
                                arr_32 [i_3] [i_4] [(signed char)14] [i_4] [i_9] = ((/* implicit */unsigned char) var_10);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            arr_40 [i_3] [i_3] [i_4] [i_3] [i_11] = ((/* implicit */unsigned short) ((short) ((_Bool) arr_26 [i_3] [i_11] [i_5] [i_11])));
                            arr_41 [i_11] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-27814)) % (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4])) ? (arr_17 [i_3] [i_4] [i_4]) : (((/* implicit */int) (_Bool)1))))) : (((unsigned int) arr_17 [i_4] [i_4] [i_4])));
                        }
                        arr_42 [i_4] = ((/* implicit */unsigned long long int) (unsigned short)23884);
                        var_24 = ((/* implicit */unsigned int) ((_Bool) (+(min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_37 [14U] [i_4]))))));
                    }
                    for (short i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        arr_45 [i_4] [8ULL] = ((/* implicit */unsigned int) ((var_0) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_20 [i_12])))))));
                        var_25 -= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_33 [i_3] [i_4] [i_4] [i_5] [i_12] [i_3]))))));
                        /* LoopSeq 1 */
                        for (short i_13 = 1; i_13 < 16; i_13 += 3) 
                        {
                            var_26 = (i_4 % 2 == 0) ? (((/* implicit */long long int) (((+(((/* implicit */int) arr_47 [i_5] [i_5] [i_5] [(signed char)10] [i_4])))) >> ((((+(((((/* implicit */_Bool) 67108863ULL)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (short)-24513)))))) - (28)))))) : (((/* implicit */long long int) (((((+(((/* implicit */int) arr_47 [i_5] [i_5] [i_5] [(signed char)10] [i_4])))) + (2147483647))) >> ((((+(((((/* implicit */_Bool) 67108863ULL)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (short)-24513)))))) - (28))))));
                            var_27 = ((/* implicit */signed char) 67108863ULL);
                            var_28 = ((/* implicit */long long int) arr_23 [i_3] [1U] [i_4] [i_4] [i_5] [i_12] [i_13]);
                        }
                        /* LoopSeq 4 */
                        for (unsigned long long int i_14 = 2; i_14 < 19; i_14 += 4) 
                        {
                            var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_14 - 1] [(signed char)10] [i_14 - 1] [i_12])) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)129))))))) : (((((/* implicit */_Bool) var_6)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            var_30 = ((/* implicit */unsigned short) ((long long int) (unsigned char)255));
                        }
                        for (long long int i_15 = 1; i_15 < 18; i_15 += 4) /* same iter space */
                        {
                            arr_55 [8U] [i_4] [i_5] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) ^ (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) arr_22 [i_4] [i_15 + 2] [i_15] [10U] [i_15]))));
                            var_31 *= var_9;
                        }
                        for (long long int i_16 = 1; i_16 < 18; i_16 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_36 [i_5] [i_16 - 1] [i_16] [7ULL] [i_16])))) ^ (((((/* implicit */_Bool) arr_36 [i_3] [i_16 - 1] [(short)13] [i_16] [17])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                            var_33 = var_4;
                            arr_58 [i_3] [i_4] [i_12] [5U] [i_16] [i_4] [i_12] = ((/* implicit */unsigned long long int) ((unsigned short) (+(((((/* implicit */_Bool) arr_56 [3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(signed char)11]))) : (18446744073709551608ULL))))));
                        }
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_61 [i_3] [i_4] [i_5] [i_5] [i_12] [(unsigned short)15] = var_8;
                            arr_62 [i_3] [i_3] [i_3] [(signed char)8] [i_3] |= ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                        }
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned char) var_10);
}
