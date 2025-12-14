/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54330
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
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((long long int) arr_2 [i_0])) > (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))), (((7082060172517317328LL) / (((/* implicit */long long int) 2175577421U))))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((7082060172517317328LL) & (-1478903791603436170LL)))))) / (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (7082060172517317328LL))))) | (1478903791603436182LL))))))));
                var_13 = ((/* implicit */int) ((_Bool) (_Bool)1));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - ((~(1478903791603436152LL))))), (((/* implicit */long long int) min(((_Bool)1), (((((/* implicit */_Bool) -1478903791603436170LL)) || (((/* implicit */_Bool) 0))))))))))));
}
