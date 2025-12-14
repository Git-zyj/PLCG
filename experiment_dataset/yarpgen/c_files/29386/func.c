/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29386
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
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)174))));
                    arr_9 [i_0] |= ((/* implicit */_Bool) (~(var_8)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_1);
    var_14 = ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_3)) - (47229))));
}
