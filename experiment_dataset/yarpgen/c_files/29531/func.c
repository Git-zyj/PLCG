/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29531
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
    var_11 &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) * (6149978363468044132LL)));
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_3)))) | (var_0)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */signed char) min((arr_4 [i_1]), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_1])), (arr_0 [i_0])))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1]))))))))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (((+(((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */int) var_3)))))) | (((arr_1 [i_1] [i_0]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_0] [i_0])))))))));
                var_15 = ((/* implicit */signed char) ((max((((arr_3 [i_0] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) var_0)))) <= (((/* implicit */unsigned int) (-(arr_0 [i_0]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) var_3)), (var_5)));
}
