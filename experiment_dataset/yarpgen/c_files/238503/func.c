/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238503
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
    var_19 |= ((/* implicit */short) var_13);
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) | (var_15)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = var_8;
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (((-(arr_5 [i_0] [i_0]))) % (-226143095))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((min((var_7), (((/* implicit */long long int) ((2457334251395632166LL) >= (2457334251395632166LL)))))) ^ (((/* implicit */long long int) var_18))));
}
