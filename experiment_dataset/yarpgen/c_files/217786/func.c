/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217786
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
    var_13 |= ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) arr_10 [i_0] [17] [i_3] [i_4]);
                                var_15 = ((/* implicit */long long int) max((var_15), (((arr_0 [i_3 + 2] [i_4]) << (((((arr_1 [i_0] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (arr_0 [i_2] [i_4]))) - (3667152994643782236LL)))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((unsigned int) arr_4 [5U] [17] [5])) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_12 [(signed char)20] [i_0] [i_0] [i_1] [(unsigned short)8]))))))) ? (arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) var_1))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned char) arr_6 [i_0] [(unsigned short)11] [6LL]);
                            var_17 = ((/* implicit */int) (-((-(((arr_11 [i_6] [i_6] [1] [i_1] [13LL] [i_0]) - (0LL)))))));
                            var_18 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned int) 59525056)) : (3828277031U)))) ? (((/* implicit */int) ((short) var_5))) : ((-(arr_15 [1LL] [i_1] [i_5] [(signed char)11] [i_0] [i_6]))))));
                            arr_19 [i_6] &= ((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_0] [i_0] [(unsigned short)21] [18LL] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [5ULL])) + (738114780)))) ? (max((((/* implicit */long long int) var_1)), (arr_11 [i_0] [i_0] [6] [i_1] [i_5] [i_6]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) + (((/* implicit */int) arr_9 [i_5] [(unsigned short)4] [i_0])))))))));
                            var_19 += ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((2147483647) - (2147483642)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
