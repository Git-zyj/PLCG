/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41319
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
    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((3992634123U), (((/* implicit */unsigned int) (signed char)-73))))), (5170866602088935074LL)))) == (((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (-5048380702640852811LL)))) ? (((((/* implicit */_Bool) var_3)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) min((((/* implicit */int) var_3)), (((((/* implicit */int) var_6)) >> (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_17)))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_11))))), (max((((/* implicit */short) (_Bool)1)), (var_11)))));
                var_21 = ((/* implicit */unsigned long long int) var_11);
            }
        } 
    } 
}
