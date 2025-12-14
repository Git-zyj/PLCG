/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49547
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_11))));
    var_15 |= min((var_11), ((-(((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) min((((arr_3 [(short)12]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))), (min((arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) -4844430302496922763LL))))));
                var_17 &= ((/* implicit */short) var_5);
                var_18 -= ((/* implicit */long long int) var_13);
            }
        } 
    } 
}
