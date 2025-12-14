/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227970
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) && ((_Bool)1))))) > (var_2)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((-5497428528106827860LL), (((/* implicit */long long int) (_Bool)0))));
                    arr_9 [i_1] [i_0] [i_1] [i_0] = arr_0 [i_0];
                    var_11 = ((/* implicit */int) max((((unsigned char) arr_6 [i_0] [i_2])), ((unsigned char)127)));
                }
            } 
        } 
    } 
}
