/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193582
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) (-(min(((-(((/* implicit */int) (short)-20515)))), (((/* implicit */int) min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned short) (short)-20526)))))))));
                var_17 = ((/* implicit */unsigned int) min(((+((-(((/* implicit */int) var_15)))))), (((((/* implicit */_Bool) min(((short)-20500), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_4);
    var_19 = ((/* implicit */signed char) var_13);
}
