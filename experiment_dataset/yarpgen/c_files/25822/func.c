/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25822
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
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
    var_17 = (-((+((-(1099511627264ULL))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [(short)9] [i_3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((int) 178083499)))))));
                                var_18 = ((/* implicit */short) (signed char)-79);
                                arr_13 [i_0] [(unsigned char)9] [i_0 - 1] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((int) var_15)));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned char) (!(((arr_8 [i_0] [i_0 + 1] [(signed char)4] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
            }
        } 
    } 
}
