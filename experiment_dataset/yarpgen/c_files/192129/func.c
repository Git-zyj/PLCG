/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192129
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) min((var_0), (((/* implicit */long long int) var_7)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) min((((/* implicit */signed char) var_13)), (var_5)))))))));
    var_18 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16745)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (var_8)))) : (((/* implicit */int) max((var_5), (var_5)))))) >= (((/* implicit */int) ((((/* implicit */long long int) max((var_15), (((/* implicit */int) var_9))))) <= (min((-9223372036854775801LL), (9223372036854775807LL)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) var_15);
                    var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (5450720057480520768LL)))) ? ((-(((/* implicit */int) arr_6 [i_2 + 2] [i_1] [i_0])))) : (var_15))), (((((((/* implicit */_Bool) (short)-5743)) ? (arr_3 [i_1]) : (((/* implicit */int) var_11)))) / (((int) -9223372036854775801LL))))));
                }
            } 
        } 
    } 
    var_20 = var_12;
}
