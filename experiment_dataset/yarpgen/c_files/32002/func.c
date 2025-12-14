/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32002
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((arr_3 [i_1 - 2] [i_1]), (((((/* implicit */int) ((unsigned short) var_12))) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16506)) || (((/* implicit */_Bool) (unsigned short)16527)))))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_3 [i_0] [i_1])) : (min((((/* implicit */long long int) arr_1 [i_0])), (max((var_5), (((/* implicit */long long int) arr_1 [i_0]))))))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((var_14), (((/* implicit */unsigned long long int) arr_1 [i_1]))))))) / (max((((unsigned int) arr_5 [i_0])), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))))))))));
                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49030)))))))));
                var_19 = ((/* implicit */long long int) max((((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) > (((/* implicit */int) ((unsigned char) var_10)))))), (((signed char) arr_2 [i_1] [i_0] [i_1]))));
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) max((((unsigned char) (unsigned short)49027)), (((unsigned char) var_9))))) ? (((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13))))))) : (((/* implicit */int) ((signed char) var_5))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_0))));
}
