/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31806
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
    var_10 = ((/* implicit */long long int) min((((((/* implicit */int) max(((signed char)-123), (var_9)))) * (((/* implicit */int) ((signed char) (signed char)120))))), (((/* implicit */int) ((_Bool) (signed char)-1)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)22]))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((var_7) << (((((/* implicit */int) (unsigned short)43579)) - (43572)))));
                }
            } 
        } 
    } 
}
