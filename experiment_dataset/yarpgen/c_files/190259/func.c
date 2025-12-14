/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190259
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */short) arr_4 [i_1]);
                    var_11 += (-(((/* implicit */int) var_0)));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (~(((((/* implicit */_Bool) ((int) (short)-22360))) ? (var_1) : (((/* implicit */unsigned long long int) var_8)))))))));
}
