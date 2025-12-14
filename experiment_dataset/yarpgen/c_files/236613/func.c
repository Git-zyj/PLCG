/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236613
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
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((unsigned long long int) var_5));
                arr_5 [(unsigned char)12] [(unsigned char)12] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (short)16490))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((unsigned int) (unsigned char)33))));
            }
        } 
    } 
    var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) : (var_3)));
}
