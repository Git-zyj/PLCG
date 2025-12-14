/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247638
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
    for (long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) 16383);
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_1] [i_3] [i_3] [i_3] [i_2] [i_1] [i_1] = arr_6 [i_2];
                                var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((4294967295U), (var_2)))))) + (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 1]))) : ((-(0U)))))));
                                var_12 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) min((arr_3 [i_4] [i_1]), (((/* implicit */short) (signed char)48))))), ((-(arr_1 [i_2]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), ((unsigned short)32947)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 3; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((long long int) arr_15 [i_5])) / (((/* implicit */long long int) arr_1 [i_0])))))));
                            var_14 = ((/* implicit */unsigned int) ((((((long long int) arr_2 [i_1])) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (arr_11 [i_0] [i_1] [i_1] [i_5] [i_6] [i_1])))))) * (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1])))));
                        }
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */unsigned short) (~(arr_10 [i_0] [i_1] [i_1] [i_0] [i_1])));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40304)))))) & (min((var_2), (((/* implicit */unsigned int) var_5))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))));
}
