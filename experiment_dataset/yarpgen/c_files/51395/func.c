/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51395
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
    for (int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] [8ULL] = ((/* implicit */long long int) var_12);
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [13ULL] [i_0 + 3] [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0 + 4])))) * (((((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_0 + 1])) << (((((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_0 + 1])) - (6914)))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */short) var_6);
                            var_21 = ((/* implicit */unsigned int) arr_1 [i_3]);
                            var_22 = ((/* implicit */unsigned char) 1235376167);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((var_18) * (((/* implicit */unsigned long long int) var_9)))))));
}
