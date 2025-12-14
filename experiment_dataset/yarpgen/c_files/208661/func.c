/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208661
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
    for (short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [i_2 + 1] = ((/* implicit */_Bool) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0 - 1] [i_1 - 1] [i_1] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 - 1] [i_2] [i_4 - 1])), (arr_5 [i_2 - 2] [i_1 - 1] [i_1])))) ? (((arr_8 [i_0] [i_4] [i_2 - 2] [i_4 - 1]) - (arr_8 [i_0] [i_0] [i_2 - 4] [i_4 - 1]))) : (((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0] [i_1] [(_Bool)1] [i_4 - 1]) : (arr_8 [i_0] [i_1] [i_1] [i_4 - 1])))));
                                var_10 ^= min((((((/* implicit */int) arr_14 [i_0] [i_0] [(_Bool)1] [i_0] [i_3 + 1] [i_3 + 1] [6U])) + (((/* implicit */int) var_8)))), (((/* implicit */int) arr_0 [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned short) (-(var_1)));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 2) 
    {
        for (int i_6 = 3; i_6 < 22; i_6 += 4) 
        {
            {
                arr_24 [i_5] [i_6 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_18 [i_6 - 1])) : (((/* implicit */int) arr_18 [(short)13])))) * (((/* implicit */int) max((arr_18 [i_5 + 1]), (arr_18 [i_5 - 2]))))));
                var_12 ^= ((/* implicit */long long int) (-((-(var_4)))));
                var_13 *= max((((int) ((int) (unsigned char)0))), (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1)))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 536870912)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (17591112302592ULL)));
                var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (-1) : (((/* implicit */int) ((_Bool) min((var_4), (((/* implicit */unsigned int) arr_20 [i_5] [i_5]))))))));
            }
        } 
    } 
}
