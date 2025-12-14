/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49612
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
    for (short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */short) arr_1 [i_0] [(unsigned char)10]);
                var_20 = ((/* implicit */int) 16107660034705881294ULL);
                arr_5 [i_0] [20] [i_0] &= ((unsigned long long int) ((((/* implicit */_Bool) 16107660034705881305ULL)) ? (((/* implicit */int) ((short) var_11))) : ((-(var_12)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 12909637550617545587ULL))));
}
