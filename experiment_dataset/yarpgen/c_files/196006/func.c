/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196006
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
    var_20 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) min((min((4220905985U), (((/* implicit */unsigned int) -902788433)))), (((/* implicit */unsigned int) 902788433))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)45076)))), (((/* implicit */int) var_12))));
                arr_8 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((var_19) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (var_4));
                arr_9 [(unsigned short)5] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                var_21 = min((arr_1 [i_0]), (((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (var_15)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_13)))))));
}
