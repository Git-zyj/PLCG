/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193404
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
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) arr_6 [i_0 - 3] [i_0 - 3]);
                var_21 &= (short)29816;
            }
        } 
    } 
    var_22 -= ((/* implicit */_Bool) var_14);
    var_23 &= ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_17)) | (((/* implicit */int) (_Bool)1)))));
}
