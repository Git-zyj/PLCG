/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198335
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
    var_16 = ((/* implicit */unsigned short) (+(1133109554402982874LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) var_3));
                var_17 = ((/* implicit */unsigned long long int) min((arr_0 [(signed char)1] [i_1]), (((/* implicit */unsigned short) var_11))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) > (min((((((/* implicit */int) arr_1 [(signed char)13])) << (((var_5) - (10922327743370110035ULL))))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)65533)) != (((/* implicit */int) arr_0 [i_0] [(unsigned short)7])))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) arr_5 [i_1] [(unsigned char)1]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_11))));
    var_20 += ((/* implicit */signed char) ((((/* implicit */int) var_2)) < (var_7)));
}
