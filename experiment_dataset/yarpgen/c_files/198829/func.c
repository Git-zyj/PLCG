/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198829
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
    var_13 = ((/* implicit */unsigned short) ((unsigned long long int) var_2));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (!(arr_3 [i_0])));
                    var_15 = ((/* implicit */short) ((unsigned char) arr_7 [i_0]));
                }
            } 
        } 
    } 
}
