/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24937
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) var_17)))))) > (min((((/* implicit */unsigned long long int) var_1)), (14384521531185292582ULL)))))) ^ (((/* implicit */int) min(((unsigned char)195), (((/* implicit */unsigned char) ((var_9) <= (var_4)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 -= arr_0 [i_0];
                var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                var_21 += ((/* implicit */_Bool) min(((+((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [2ULL] [i_0])))))));
                var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 14384521531185292560ULL)) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))) != (14384521531185292551ULL))))))) + (((unsigned long long int) min((15120543501389978070ULL), (((/* implicit */unsigned long long int) var_0))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), ((~(((/* implicit */int) var_6))))));
}
