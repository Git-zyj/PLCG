/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233973
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
    var_17 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) arr_4 [i_1] [i_0]);
                var_19 &= ((/* implicit */short) (~(var_14)));
                arr_5 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
            }
        } 
    } 
    var_20 &= min((((/* implicit */int) var_1)), ((+((-(((/* implicit */int) var_11)))))));
    var_21 = ((/* implicit */long long int) var_11);
}
