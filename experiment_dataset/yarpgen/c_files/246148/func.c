/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246148
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
    var_11 = ((/* implicit */unsigned long long int) -232165136);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_12 ^= ((/* implicit */signed char) max((((/* implicit */int) (short)-24826)), (((((/* implicit */_Bool) (short)-24826)) ? (((/* implicit */int) (short)24832)) : (((/* implicit */int) (unsigned short)2945))))));
                            arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) 1152921504606842880ULL);
                            arr_11 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_3])) - (((/* implicit */int) arr_9 [i_1] [i_1 - 1] [7U] [i_1] [i_1]))))), (((5327048180649104958ULL) / (arr_7 [i_2]))))), (((/* implicit */unsigned long long int) var_1))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned char) max((max((((3143683763U) - (((/* implicit */unsigned int) var_10)))), (arr_8 [i_1 - 1] [i_0] [i_0 + 1] [i_1 - 1] [i_0]))), (((/* implicit */unsigned int) (unsigned short)2945))));
                arr_12 [i_1] = ((/* implicit */_Bool) arr_0 [8ULL]);
                arr_13 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [11ULL]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned short)10] [i_1]))) * (var_8))))) == (((/* implicit */unsigned int) ((((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_1 [i_0]))))) << (((min((((/* implicit */unsigned int) (signed char)31)), (arr_6 [i_0] [(unsigned short)12] [i_1]))) - (31U))))))));
                var_14 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0 + 2] [i_0]))) ^ (arr_2 [i_1 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 631851154343937967ULL)) && (((/* implicit */_Bool) 1549376155))))) : (((/* implicit */int) var_3)))) / (min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_9 [i_0] [0ULL] [(signed char)7] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_9 [(short)3] [(short)3] [i_0] [i_0] [i_0 + 2])))), (((/* implicit */int) arr_3 [6U] [(short)12] [i_0])))));
            }
        } 
    } 
}
