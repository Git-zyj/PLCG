/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232278
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) (~((-(arr_1 [i_0])))));
                    var_17 = (-(min((((/* implicit */long long int) var_4)), (-5577872636931362388LL))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (-(var_14)));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((((var_8) / (((/* implicit */long long int) var_15)))) / (((/* implicit */long long int) (+(var_4)))))) + (9223372036854775807LL))) << (((((((/* implicit */int) ((_Bool) (unsigned short)65535))) << (((var_14) - (5944182436781815070ULL))))) - (16))))))));
}
