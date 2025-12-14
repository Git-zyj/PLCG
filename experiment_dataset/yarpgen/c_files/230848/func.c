/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230848
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
    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : (max((var_16), (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) ((unsigned short) ((unsigned char) 8463733567710691260LL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(var_16)))))) * (994400271U)));
                var_20 = ((/* implicit */_Bool) 2119284082U);
                var_21 = ((/* implicit */unsigned char) max((((long long int) max((((/* implicit */int) arr_4 [i_0] [i_0])), (arr_0 [i_0] [i_1])))), (((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) & (((/* implicit */int) (short)24260)))))))));
                var_22 = ((/* implicit */unsigned short) (((-(0U))) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) - (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [3] [i_1])) : (((/* implicit */int) arr_3 [15U] [i_0] [11LL])))))))));
            }
        } 
    } 
}
