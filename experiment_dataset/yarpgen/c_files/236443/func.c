/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236443
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
    var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned long long int) var_2))) || (((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) var_15))))));
    var_19 *= ((/* implicit */short) (unsigned short)60458);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (_Bool)0);
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) (+((((((-(5932863717142476320LL))) + (9223372036854775807LL))) << (((var_4) - (3749391988323975802LL)))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [(signed char)2] [i_1])) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((signed char) (-(var_3))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_8))));
    var_23 = var_8;
}
