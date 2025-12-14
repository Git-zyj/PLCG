/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243487
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
    var_13 = ((/* implicit */long long int) (unsigned short)63041);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) 861698322U))), (min((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (-2239477678567834105LL)))));
                var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((((/* implicit */_Bool) 861698322U)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (unsigned char)238))))) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_2)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (5260892780850841779LL)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (unsigned short)46678)), (18446744073709551615ULL)))))) ? ((((_Bool)1) ? ((+(var_5))) : (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) (unsigned char)132))))))) : (var_1))))));
}
