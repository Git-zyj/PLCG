/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225849
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
    var_18 &= ((/* implicit */short) (~(((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((((((/* implicit */int) var_0)) + (2147483647))) >> (((3411242353U) - (3411242325U))))))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) min((arr_4 [i_0 - 1]), (((/* implicit */int) var_2))))) >= (-4400211884100145152LL)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) var_5);
    var_22 = ((/* implicit */unsigned long long int) (~(var_6)));
}
