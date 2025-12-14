/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231672
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
    var_16 = ((/* implicit */long long int) min((((var_2) >> (((((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_12))))) + (2062920275525762196LL))))), (((/* implicit */unsigned int) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (signed char)-48))))) / ((+(((/* implicit */int) var_5)))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) (signed char)-3)))))))) | (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                arr_8 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (min((arr_3 [i_0]), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_1]))))));
                arr_9 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (signed char)-3)) || (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
            }
        } 
    } 
}
