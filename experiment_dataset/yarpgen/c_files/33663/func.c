/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33663
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
    var_18 = var_13;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0]);
                var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)132)), (var_14)));
            }
        } 
    } 
    var_20 = var_4;
    var_21 = min((var_3), (((/* implicit */unsigned long long int) ((unsigned int) ((int) var_0)))));
}
