/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23534
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (((+(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)234))))) >= (((/* implicit */int) ((arr_2 [i_0] [i_1 - 1] [i_0]) >= (((/* implicit */unsigned long long int) arr_0 [i_1])))))))))));
                var_21 = ((((/* implicit */_Bool) (~(arr_1 [i_1 + 1])))) || (((/* implicit */_Bool) arr_1 [i_1 - 1])));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(((((/* implicit */long long int) var_18)) - (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (-1429845596475191321LL))))))))));
}
