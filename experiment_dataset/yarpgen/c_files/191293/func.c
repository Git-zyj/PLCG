/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191293
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_9 [i_0 + 1]))));
                                arr_12 [i_0 - 2] [i_1] [i_2 + 1] [i_3] [i_2 + 1] [i_3] [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (arr_4 [i_1])))) ? (((/* implicit */int) arr_9 [(unsigned char)10])) : (((/* implicit */int) ((arr_11 [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                } 
                var_15 = -7LL;
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_10);
    var_17 = ((/* implicit */unsigned int) var_3);
}
