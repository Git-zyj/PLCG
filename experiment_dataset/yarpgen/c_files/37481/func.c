/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37481
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
    var_15 = ((var_0) > (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) var_4)))) == (((/* implicit */unsigned long long int) (~(var_2))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((2441572104802462658LL) > (((/* implicit */long long int) ((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_2 [(unsigned char)9])) ? (arr_2 [i_0]) : (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) arr_6 [i_0] [i_0]))))))) ? (max(((~(arr_2 [i_0]))), (((((/* implicit */_Bool) arr_3 [13U])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_12)))))) : ((+(arr_2 [i_0])))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min(((~((~(-2441572104802462673LL))))), (((-2441572104802462681LL) & (((/* implicit */long long int) 2147483647)))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])), (((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_0]))) | (2441572104802462681LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-7938)) == (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))))));
            }
        } 
    } 
}
