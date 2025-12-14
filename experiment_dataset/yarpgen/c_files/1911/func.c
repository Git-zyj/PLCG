/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1911
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((signed char) var_2));
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (((-(var_9))) * (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                                var_19 = ((/* implicit */signed char) 947368747);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_1)));
}
