/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217696
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
    var_14 = ((/* implicit */unsigned long long int) min((max((-2574047850051105773LL), (((/* implicit */long long int) -1805723559)))), (((/* implicit */long long int) (unsigned char)6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) var_0);
                arr_7 [i_0] [i_0] = ((1605199220) ^ (((((/* implicit */_Bool) (-(-1883606264)))) ? (((/* implicit */int) (_Bool)0)) : (-901002686))));
            }
        } 
    } 
}
