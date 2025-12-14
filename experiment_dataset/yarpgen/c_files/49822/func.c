/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49822
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
    var_17 = ((/* implicit */unsigned int) var_12);
    var_18 = ((/* implicit */unsigned long long int) var_0);
    var_19 = ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), ((~(((/* implicit */int) var_16))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) max((var_10), (var_8)))), ((-(var_13))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((long long int) (_Bool)0)), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0]))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) max(((signed char)-54), (((/* implicit */signed char) (_Bool)0))));
                arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0] [i_0])), (max((arr_0 [i_1]), (((/* implicit */int) var_7))))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (var_13))), (var_13))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0] [i_1])), ((+(((/* implicit */int) var_12)))))))));
            }
        } 
    } 
}
