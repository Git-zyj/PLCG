/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192078
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((var_12) - (((/* implicit */int) (unsigned short)15)))))));
    var_19 = var_17;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((unsigned char) var_11))), (910574105U))) * (((/* implicit */unsigned int) ((int) max((((/* implicit */long long int) arr_5 [i_0])), (22558080567855482LL))))))))));
                    arr_10 [(unsigned char)4] [i_0] [i_2] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_2])) ^ (((/* implicit */int) arr_9 [i_0] [i_0] [i_2]))))));
                    arr_11 [i_0] [i_1] [(signed char)4] [i_0] = ((/* implicit */unsigned int) -22558080567855483LL);
                }
            } 
        } 
    } 
}
