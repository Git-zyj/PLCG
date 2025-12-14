/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24698
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
    var_14 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_3)), ((~(var_4)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((var_8), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_0]))) ^ (5455959286163371886ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 3] [i_0])))))))));
                var_16 = var_13;
                arr_6 [i_0] &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_1 - 2]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (-1503908775398781661LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
}
