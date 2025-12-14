/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222092
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
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((unsigned long long int) arr_3 [i_2] [i_3])))));
                            arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2] = ((/* implicit */_Bool) arr_6 [i_0 + 1] [13ULL] [i_2] [9]);
                            var_14 = ((/* implicit */unsigned char) var_6);
                            var_15 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (144044819331678208LL) : (((/* implicit */long long int) arr_1 [i_0])))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_1 [i_1 + 2])), ((((((_Bool)0) ? (var_6) : (((/* implicit */unsigned long long int) var_10)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 288230376151711728LL))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (_Bool)0);
}
