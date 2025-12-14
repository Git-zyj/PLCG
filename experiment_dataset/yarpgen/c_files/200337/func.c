/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200337
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
    var_20 ^= ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1923206361U)) ? (-2LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0])) + (((((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_13))))) - (((/* implicit */int) ((_Bool) arr_5 [(unsigned char)4] [i_1] [(unsigned char)4])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [17LL] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3 - 1] [(_Bool)1] [i_3] [i_3 - 1] [i_3 - 1] [i_1 + 1])) >= (((/* implicit */int) arr_9 [i_2] [i_3 - 1] [i_3 - 1] [i_4] [i_1] [i_1 - 1]))))), (arr_6 [i_4] [i_1] [i_2] [i_3 + 1])));
                                var_22 = ((/* implicit */long long int) max(((-(var_3))), (((/* implicit */unsigned int) arr_2 [i_0]))));
                                arr_14 [(signed char)22] [i_1] [i_0] [i_3 - 1] [(signed char)8] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (arr_10 [i_3 + 1] [i_3 + 1] [i_1] [i_1 + 1]))))) % (((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 + 1] [i_1] [i_1 - 1])) ? (arr_10 [i_3 - 1] [i_3 + 1] [8U] [i_1 + 1]) : (arr_10 [i_3 - 1] [i_3 + 1] [i_3] [i_1 + 1])))));
                                var_23 = ((/* implicit */unsigned short) arr_2 [7U]);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] = ((/* implicit */_Bool) arr_8 [i_1 + 1] [i_0] [i_0] [i_1]);
                }
            } 
        } 
    } 
}
