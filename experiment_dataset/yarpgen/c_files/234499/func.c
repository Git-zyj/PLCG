/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234499
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2] [i_1] [i_3] [i_0 + 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((long long int) ((unsigned short) (unsigned short)43676))));
                            arr_10 [i_0] = ((/* implicit */unsigned long long int) ((int) ((unsigned short) ((unsigned long long int) (signed char)63))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned short) ((unsigned short) var_16))))));
                            arr_11 [i_3] [i_0] [i_2] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) (_Bool)1)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((_Bool) ((long long int) var_12))))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 3; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                arr_18 [i_4] [i_0] [i_6] = ((/* implicit */_Bool) ((unsigned int) ((_Bool) arr_17 [i_0 - 1] [i_5 + 1] [i_5] [i_5 - 2] [(unsigned short)9])));
                                arr_19 [i_0] [i_0] [i_1] [i_4] [i_0] [i_4] = ((/* implicit */_Bool) ((signed char) ((_Bool) arr_15 [i_0] [i_0 - 1] [i_5] [i_5])));
                                arr_20 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((_Bool) ((int) var_7))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = var_0;
}
