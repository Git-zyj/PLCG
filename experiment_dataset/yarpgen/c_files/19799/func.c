/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19799
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
    var_10 |= (_Bool)1;
    var_11 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)24))));
    var_12 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */_Bool) ((arr_1 [i_1]) ? (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)35))) : (min((6472640221162537145ULL), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0))))));
                var_14 = arr_0 [i_1];
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) var_8);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((max((var_3), (((/* implicit */unsigned char) var_1)))), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_8)))))))) < (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
}
