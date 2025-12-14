/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209551
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (((unsigned int) 3678660648U))));
                var_21 ^= ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((13205503156071080353ULL), (((/* implicit */unsigned long long int) var_15)))) * (((/* implicit */unsigned long long int) var_5))))) ? (min((((/* implicit */long long int) var_18)), (var_1))) : (((/* implicit */long long int) var_6))));
    var_23 = max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) (-(6143443960132555624LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (var_2))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                arr_10 [i_2] [i_2] = ((/* implicit */long long int) ((arr_8 [i_2]) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (arr_7 [(short)17]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_5))) > (((var_0) >> (((((/* implicit */int) var_12)) - (180)))))))))));
                var_24 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned int) ((_Bool) arr_9 [18U] [i_2] [i_2]))), (((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((var_1) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (min((var_17), (((/* implicit */unsigned int) var_13)))))))));
}
