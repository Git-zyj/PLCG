/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236117
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
    for (int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9390746353709975821ULL))));
                            var_15 = ((/* implicit */unsigned short) arr_1 [i_3] [i_0 + 2]);
                            var_16 = ((/* implicit */int) (unsigned char)14);
                            arr_11 [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) var_11)), (var_8))), (((/* implicit */unsigned int) max((((/* implicit */int) var_11)), (arr_0 [i_0 + 1]))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) 9390746353709975793ULL)) && (((/* implicit */_Bool) 9390746353709975799ULL))))), ((+(((((/* implicit */int) var_2)) / (((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_0]))))))));
            }
        } 
    } 
    var_17 *= ((/* implicit */unsigned long long int) ((_Bool) var_9));
    var_18 = (-((+(((/* implicit */int) var_0)))));
}
