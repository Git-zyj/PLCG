/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5185
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
    var_10 = ((/* implicit */_Bool) ((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) var_5);
                                arr_15 [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_4 [i_1] [i_1]))));
                                arr_16 [i_0] [i_0] [i_1] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        for (int i_6 = 3; i_6 < 21; i_6 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_2] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */long long int) arr_12 [i_0] [i_5] [i_0]);
                                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) -761136192))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_2 + 4] [i_5] [i_0]))))) / (arr_22 [i_0] [i_1] [i_2] [i_5] [i_5] [i_5] [i_6 + 1]))) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_21 [(unsigned short)11] [i_1] [i_1] [i_5] [i_6])))))))));
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((arr_7 [i_5 - 1] [(unsigned char)13] [i_5]) % (arr_7 [i_5 - 1] [i_0] [i_0]))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) -761136188)) ? (arr_10 [i_6] [16] [i_5 + 1] [i_5 + 1] [16] [i_5]) : (-761136179)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 ^= max((((/* implicit */short) (_Bool)1)), ((short)5629));
}
