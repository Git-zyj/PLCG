/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4605
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
    var_14 = ((/* implicit */short) var_0);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (max((((/* implicit */long long int) var_8)), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    var_16 = var_0;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_8 [i_0 + 3] [i_1] = ((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2575893242U))))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) ((arr_0 [i_0 + 2] [i_0 + 2]) == (arr_0 [i_0 + 3] [i_0 + 2]))))));
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_1 + 1] [i_1]), (arr_10 [i_1 - 2] [i_1]))))) : (max((arr_1 [i_3 + 3]), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0 - 1] [i_0] [i_1] [i_0 - 1]))))));
                                var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_4] [i_1] [i_1])) ? (((((/* implicit */_Bool) var_0)) ? (1719074053U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) arr_4 [i_0 + 3] [(unsigned short)14] [i_0])))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_5 [i_4] [i_3] [i_0])))) || (((/* implicit */_Bool) ((unsigned short) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_10 [i_1] [i_1])))))), (max((arr_2 [i_0 + 3] [i_1 - 1]), (((/* implicit */int) arr_10 [i_0 + 3] [i_1]))))));
                    arr_17 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (-(max((max((((/* implicit */int) (_Bool)1)), (arr_4 [i_1] [i_1] [i_0]))), (max((arr_4 [i_0] [(short)11] [(short)11]), (((/* implicit */int) var_13))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) ((int) ((unsigned long long int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_21 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [3]))))))) : (((((/* implicit */_Bool) 1866393620)) ? (2575893257U) : (1719074046U))));
                                var_20 = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) (~((~(((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0 + 1])) / (var_1)))))));
                }
                /* vectorizable */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_22 = ((/* implicit */short) (~((~(2575893257U)))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_1] [i_7] [i_7 - 1])) ? (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_0] [i_1] [i_7 - 1]) : (((/* implicit */int) (unsigned char)65)))) : (((/* implicit */int) var_4))));
                    var_24 = ((/* implicit */_Bool) var_11);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_25 ^= ((/* implicit */int) (-((-(((((/* implicit */_Bool) arr_22 [i_8] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_25 [i_1 + 2] [i_1 + 2] [i_9])))))));
                                var_26 = ((/* implicit */signed char) (+(((arr_14 [i_0 + 4] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 4]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_14 [(_Bool)1] [i_0] [i_0 + 4] [(_Bool)1] [i_0 + 2] [i_0 + 1] [i_0 + 2]))))));
                                arr_34 [i_0] [i_1] [i_1 + 2] [i_1] [i_10] [i_1] [i_1 + 2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 + 1]))), (max((arr_5 [i_0 + 2] [13] [i_1 + 1]), (((/* implicit */unsigned long long int) (-(var_8))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) arr_0 [i_0 + 2] [i_0 + 3]))))))));
                                var_28 ^= ((/* implicit */signed char) max(((~(arr_0 [i_0 + 3] [i_0 + 3]))), (((/* implicit */long long int) ((((-227439377004592111LL) + (((/* implicit */long long int) arr_9 [i_0] [i_8] [i_11] [i_12])))) == (((/* implicit */long long int) ((/* implicit */int) ((arr_38 [0U] [i_1] [0U] [2ULL] [i_12]) <= (((/* implicit */unsigned long long int) var_10)))))))))));
                                arr_39 [i_0] [i_1] [i_1] [i_1] [i_11] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)58931)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) ((1719074067U) == (4154062385U)))))))) : (arr_5 [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
