/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236978
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_2 [i_1 + 2] [i_1 + 1] [15])))) - (((/* implicit */int) (!(((/* implicit */_Bool) min((5805587331708599899LL), (((/* implicit */long long int) -1))))))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((unsigned long long int) ((arr_0 [i_1 - 1]) - (((/* implicit */long long int) 6))))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */int) arr_7 [i_1 + 1] [i_0] [i_0]);
                }
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
                {
                    arr_11 [(unsigned char)12] [i_1] [(signed char)8] |= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((arr_9 [i_0] [0ULL] [i_1] [i_3]), (arr_9 [i_0] [(unsigned char)14] [(signed char)0] [i_1])))), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((var_1), (((/* implicit */unsigned long long int) var_14))))))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_6 [i_0] [11ULL] [11ULL]))));
                    arr_12 [i_0] = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (arr_9 [16LL] [i_0] [i_1] [i_3])))))));
                    var_21 = ((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 2] [i_1 + 1]);
                }
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_4] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_4])), (5)))), (3035542928156575099ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1053420185902034798LL)) ? (1163155081U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))))))));
                    arr_17 [i_0] = ((/* implicit */unsigned char) 6930460827454914302LL);
                }
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_22 = ((/* implicit */int) min((((/* implicit */long long int) 0)), (-1053420185902034780LL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_0] [i_7 - 1])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_0] [i_7 - 1])) : (((/* implicit */int) (_Bool)1))));
                            var_23 += ((/* implicit */int) (~(arr_19 [i_0])));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_8] [i_0] [i_1])) ? (((var_1) - (((/* implicit */unsigned long long int) -1053420185902034776LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_8] [i_8] [i_0])) - (((/* implicit */int) arr_27 [i_0] [i_1 + 2] [i_5] [i_6] [i_8])))) - (min((((/* implicit */int) (unsigned short)60210)), (arr_14 [i_0] [i_0] [i_0] [i_0])))))) : (min((((/* implicit */unsigned long long int) (signed char)103)), (min((2556949005343045844ULL), (((/* implicit */unsigned long long int) -934577001))))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 26U)) ? (((((/* implicit */_Bool) -1909946202)) ? (1449761207019815460LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))));
                            var_25 = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_11)))) - (((/* implicit */long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_27 [i_0] [i_1 + 1] [i_5] [i_0] [i_0])))), (var_13)))))));
                            var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (min((((/* implicit */unsigned int) var_13)), (var_9))))) - (((/* implicit */unsigned int) min((((/* implicit */int) (!((_Bool)0)))), (var_5))))));
                        }
                        arr_29 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-86))) - (arr_23 [i_1] [i_1] [i_0] [i_1]))) - (((/* implicit */long long int) ((var_16) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))))))))) ? (min((arr_18 [i_0] [i_0] [i_1 + 2] [i_1 + 2]), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (var_5))))))));
                    }
                    var_27 = ((/* implicit */long long int) (unsigned char)234);
                    arr_30 [5U] [i_1] [i_0] [21U] = ((/* implicit */int) ((long long int) min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_1 + 1] [i_0]))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) min((min((var_14), (var_6))), (var_0)));
    var_29 = (!(((/* implicit */_Bool) 1216402580848965539LL)));
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-(var_9))))));
}
