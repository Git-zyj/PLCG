/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200387
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
    var_18 *= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-18)) * (((/* implicit */int) var_16))))), (880870313U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)22)), ((short)27275))))) * (2704033423U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23780))));
    var_19 = ((/* implicit */short) (!(((var_7) != (((/* implicit */unsigned int) 909508324))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */int) ((var_16) || (((/* implicit */_Bool) -1355722850))))) >> ((((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (arr_1 [i_1] [i_0]))))) - (75ULL)))));
                arr_6 [i_0] [i_0] [i_0] = 1355722849;
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) -1355722850);
    var_22 = ((/* implicit */unsigned long long int) var_7);
}
