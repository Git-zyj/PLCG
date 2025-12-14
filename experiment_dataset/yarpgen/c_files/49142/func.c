/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49142
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_9))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1 + 3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) min((max((((var_0) / (var_3))), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) min((((((/* implicit */int) var_8)) / (((/* implicit */int) var_13)))), (((((/* implicit */int) var_11)) / (((/* implicit */int) var_10)))))))));
                                var_15 = ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */unsigned char) var_9);
    var_17 = ((/* implicit */short) min((var_2), (((/* implicit */long long int) ((max((((/* implicit */long long int) var_12)), (var_1))) != (((((/* implicit */long long int) var_3)) ^ (var_2))))))));
}
