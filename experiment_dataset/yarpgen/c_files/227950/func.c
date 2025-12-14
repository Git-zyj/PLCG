/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227950
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)-5469)), (18446744073709551615ULL)));
                arr_4 [i_0] = ((/* implicit */int) var_13);
                var_19 = ((/* implicit */_Bool) max((var_19), (max((((((/* implicit */int) (unsigned char)73)) != (((/* implicit */int) ((_Bool) arr_2 [i_0]))))), ((_Bool)1)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4161452057U)) ? (((/* implicit */int) var_14)) : (var_7)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_4)), (var_10)))) ? (((unsigned long long int) (_Bool)1)) : (var_12))) : (min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_14)) - (87))))))))));
}
