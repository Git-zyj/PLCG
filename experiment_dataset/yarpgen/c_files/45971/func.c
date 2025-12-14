/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45971
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
    var_14 = min(((+(1223600561241200598LL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (-914123842960188951LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((~(var_0))))));
    var_15 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_5 [i_0])))))));
                arr_6 [i_0] = arr_5 [i_1];
                var_17 = ((/* implicit */int) (unsigned char)112);
                var_18 = var_11;
            }
        } 
    } 
}
