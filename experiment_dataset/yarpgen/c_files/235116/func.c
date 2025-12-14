/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235116
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
    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned short)50676)) ? (((/* implicit */int) (short)0)) : (1215248169))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_6)))))) : (((int) ((int) 0ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 3; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4)) ? (((/* implicit */unsigned long long int) -1LL)) : (17360479514281271205ULL))))));
                            arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) < (((unsigned long long int) var_2))));
                            arr_15 [(_Bool)1] |= ((/* implicit */int) (+(8ULL)));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_12 [6] [6] [i_3] [i_2 - 3] [6] [6] [6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_1 - 3] [i_2 + 1]))))))));
                            var_19 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0] [i_2 + 3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) * (var_12)));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) ((int) ((_Bool) (unsigned short)47288)));
                            arr_22 [i_1] = ((/* implicit */unsigned int) var_11);
                        }
                        var_21 = ((/* implicit */unsigned long long int) min((((unsigned short) ((short) var_7))), (((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_2] [i_3]))));
                    }
                    for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_1 [i_0 - 1]))));
                        var_23 ^= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41957)) ? (((/* implicit */unsigned long long int) 316068820U)) : (5211078176465409495ULL)))) ? (var_1) : (((/* implicit */int) var_8)))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 3; i_9 < 15; i_9 += 3) 
                        {
                            arr_32 [i_9] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+((~(var_12)))));
                            var_24 += ((/* implicit */signed char) var_9);
                        }
                        var_25 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) var_15)));
                    }
                }
                for (unsigned char i_10 = 3; i_10 < 13; i_10 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) min((((long long int) max((var_3), (((/* implicit */unsigned int) var_13))))), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_1)))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            {
                                arr_40 [i_12] [i_11] [i_1] [i_1] [i_0] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_1] [5LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [(unsigned char)14] [i_1] [i_12]))) : (arr_29 [(signed char)12] [i_1] [(signed char)12] [i_1] [i_0])))), (min((var_15), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (~(min((arr_12 [16U] [i_10] [i_0 + 1] [i_0] [i_0] [i_0] [16U]), (((/* implicit */unsigned long long int) arr_13 [i_12 + 1] [i_11] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])))))))));
                                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) var_7)), (((arr_23 [i_12] [i_12] [i_12]) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
                            }
                        } 
                    } 
                }
                for (long long int i_13 = 3; i_13 < 16; i_13 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_29 += ((/* implicit */int) ((unsigned short) (((!(((/* implicit */_Bool) arr_51 [i_0 - 1] [4] [4] [i_14] [i_15])))) ? ((~(((/* implicit */int) arr_46 [i_0] [(unsigned char)12] [i_13] [(short)6])))) : (((/* implicit */int) ((short) arr_16 [(_Bool)1] [(_Bool)1] [i_15]))))));
                                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((1086264559428280410ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    arr_53 [i_0 + 1] [i_1] [i_13 - 2] [i_1] = ((/* implicit */unsigned short) (-(((int) 1086264559428280411ULL))));
                }
                var_31 |= ((/* implicit */short) min((((((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [2]))))), (((/* implicit */long long int) ((unsigned short) ((long long int) arr_46 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0]))))));
                var_32 *= ((/* implicit */unsigned int) min((((unsigned char) 395728819U)), (((/* implicit */unsigned char) (signed char)127))));
                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((var_9) * (((/* implicit */unsigned long long int) arr_13 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])))))));
            }
        } 
    } 
}
