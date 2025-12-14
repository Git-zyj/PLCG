/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192681
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) var_3);
                            var_11 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [(unsigned char)16] [i_3]);
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned char) arr_1 [i_1]);
            }
        } 
    } 
}
