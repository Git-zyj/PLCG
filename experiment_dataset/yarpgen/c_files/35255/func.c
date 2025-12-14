/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35255
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
    var_12 -= ((/* implicit */int) min((((/* implicit */long long int) var_1)), (max((max((((/* implicit */long long int) var_0)), (var_11))), (((long long int) var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 -= ((/* implicit */int) ((unsigned char) var_1));
                    var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_6)), (((long long int) min((var_3), (((/* implicit */unsigned int) var_6)))))));
                    var_15 -= ((/* implicit */unsigned int) ((long long int) var_10));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_16 ^= var_11;
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_1))));
                                var_18 = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
