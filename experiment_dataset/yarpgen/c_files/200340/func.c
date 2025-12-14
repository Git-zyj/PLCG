/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200340
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
    var_10 = ((/* implicit */unsigned int) 2370859746635904025LL);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_11 = arr_5 [i_0] [i_0] [i_0];
                    arr_6 [i_0] [i_0] [i_0 - 1] = ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)79)));
                    var_12 *= ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned long long int) var_7)), (arr_3 [i_0 + 3] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)72))))), (min((((/* implicit */unsigned int) var_4)), (var_7)))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
