/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237206
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
    var_19 -= ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((max((((/* implicit */unsigned long long int) var_5)), (var_0))) / (((/* implicit */unsigned long long int) var_12)))));
    var_20 = ((/* implicit */short) ((var_5) & (((((((((/* implicit */int) (unsigned char)17)) - (var_18))) + (2147483647))) << (((((min((var_12), (((/* implicit */int) (short)6465)))) + (94932539))) - (5)))))));
    var_21 = ((/* implicit */unsigned long long int) (((-((+(1483797553))))) < (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_11)), (var_15)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) 3051850602167916484LL)))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0] [i_1 - 1] [i_1 + 1])), (((3051850602167916484LL) - (((/* implicit */long long int) var_2))))))) ? ((+((+(-3051850602167916485LL))))) : (var_10)));
                arr_5 [i_0] [3] [i_0] = ((/* implicit */signed char) (+(3051850602167916484LL)));
            }
        } 
    } 
}
