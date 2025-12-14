/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47837
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
    var_16 += ((/* implicit */long long int) var_13);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 &= ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-2863582232030377032LL)));
                    var_18 = ((/* implicit */short) ((long long int) max((-2863582232030377049LL), (((/* implicit */long long int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((max((min((((/* implicit */unsigned int) (unsigned short)63136)), (0U))), (4294967272U))), (((/* implicit */unsigned int) var_8))));
}
