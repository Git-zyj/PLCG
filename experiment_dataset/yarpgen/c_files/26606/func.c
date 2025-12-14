/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26606
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)2)), (17516784586290765006ULL))))));
                arr_5 [i_1] = ((/* implicit */_Bool) (signed char)2);
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-12)) ? (0LL) : (((/* implicit */long long int) 2137314098))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((_Bool) ((var_1) % (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned int) var_2)) : (1514287456U)))))));
}
