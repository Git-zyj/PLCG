/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243289
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
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) ((min((var_5), (((/* implicit */unsigned int) var_12)))) * (((/* implicit */unsigned int) ((int) ((932189535052070870LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */long long int) (-(var_2)))) : (var_8)));
                arr_5 [i_0] = ((/* implicit */short) (+(((((var_5) <= (var_10))) ? (((int) var_9)) : (((/* implicit */int) min(((short)32756), ((short)-32756))))))));
                var_16 = ((_Bool) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) (unsigned char)0))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_5);
}
