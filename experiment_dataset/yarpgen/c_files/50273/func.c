/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50273
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
    var_10 = ((/* implicit */signed char) var_6);
    var_11 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) ((unsigned char) 793695432))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [1U] = (!(((/* implicit */_Bool) (+((+(1305657984)))))));
                    arr_7 [i_1] [i_1 - 1] [12] [6] = ((_Bool) (!(((/* implicit */_Bool) -1305657968))));
                    arr_8 [i_1] [i_2] [(unsigned char)8] [i_2] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) ((signed char) 14572915597048787659ULL))))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 3873828476660763960ULL)))) ? ((+((+(14572915597048787656ULL))))) : (5289238363711098232ULL)));
                }
            } 
        } 
    } 
}
