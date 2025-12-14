/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207080
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12020))) == (min((-2440338861763093917LL), (((/* implicit */long long int) (_Bool)0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    var_18 = max((max((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) ^ (arr_3 [10] [i_1])))), (min((2440338861763093916LL), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1])))))), (((/* implicit */long long int) ((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_2]) : (arr_2 [i_0]))) <= (((((/* implicit */_Bool) arr_3 [0U] [i_1])) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0])))))));
                    var_19 = min((arr_2 [i_0]), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) == (2440338861763093916LL)))) == (((arr_6 [i_0]) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_8 [i_0] [(_Bool)1] &= ((/* implicit */unsigned long long int) arr_7 [i_0] [(_Bool)1] [i_0] [i_0]);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((arr_10 [i_3] [i_3]) ? (((/* implicit */int) arr_10 [i_0] [(_Bool)1])) : (arr_2 [i_0]))), (((arr_6 [i_3]) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */int) arr_6 [i_0]))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_0])) + (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) + (arr_11 [(_Bool)0] [7])))));
                    var_21 |= max((((((arr_10 [i_0] [i_0]) ? (arr_11 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [13LL] [i_1]))))) << (((arr_11 [i_0] [i_0]) - (5508195052864648025ULL))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [(_Bool)1] [8LL] [i_3]) : (((/* implicit */int) arr_0 [i_1] [i_1]))))) & (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_3] [i_3] [i_3] [i_3])))))));
                }
                for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0]))));
                    var_23 = ((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1]);
                }
                var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)128))))), (((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) : (arr_1 [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_25 = arr_4 [i_0] [i_1] [i_1];
                            var_26 = ((/* implicit */long long int) ((min((arr_15 [i_0] [i_1]), (((/* implicit */long long int) min((arr_4 [i_0] [i_5] [3ULL]), (((/* implicit */int) arr_13 [(unsigned char)14] [i_1] [4ULL]))))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1])))));
                            arr_18 [6] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1588911581), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_13 [i_0] [6LL] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) ? (min((((/* implicit */unsigned long long int) max((arr_9 [i_0]), (((/* implicit */short) arr_10 [i_0] [i_0]))))), (max((arr_12 [12] [i_1] [i_1] [i_1]), (arr_12 [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)12)) ? (min((arr_17 [i_0] [i_0] [i_0] [4LL]), (((/* implicit */unsigned long long int) -2LL)))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) 0U)) : (-6852292616821457362LL))))))));
                            arr_19 [i_6] [i_5] |= ((/* implicit */unsigned long long int) max(((unsigned char)37), (((/* implicit */unsigned char) (_Bool)0))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11472))) : (8835858461229435025LL)));
}
