/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220916
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
    var_14 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */long long int) var_8)), (var_5))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min(((short)30367), (((/* implicit */short) max(((unsigned char)120), (((/* implicit */unsigned char) (_Bool)0)))))));
                                var_17 = ((/* implicit */unsigned char) (+(3635072957051868072ULL)));
                                var_18 &= ((/* implicit */_Bool) min((1127846985), (((/* implicit */int) ((unsigned char) 2254280679U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = -1;
}
