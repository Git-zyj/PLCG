/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200590
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
    var_16 = var_1;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((var_9) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (var_5))))));
                var_18 = (+(2147483647));
                var_19 = ((/* implicit */long long int) (-(arr_2 [i_0])));
                var_20 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)0)), (arr_2 [6])))))) ? (((/* implicit */int) ((max((arr_2 [(signed char)14]), (((/* implicit */unsigned long long int) var_4)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_0 [i_0]))))))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-((~(((/* implicit */int) arr_3 [18LL])))))))));
            }
        } 
    } 
    var_22 &= ((/* implicit */signed char) (!(((((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) 1169108197)))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_1)))))))));
}
