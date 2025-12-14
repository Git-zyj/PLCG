/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208737
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
    var_17 ^= ((/* implicit */signed char) var_16);
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_13)), (max((((/* implicit */unsigned long long int) ((signed char) 4294967295U))), (min((((/* implicit */unsigned long long int) var_0)), (6435780924240884912ULL))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = (((~(max((1141780847U), (((/* implicit */unsigned int) arr_4 [i_1 - 2] [i_0])))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))));
                arr_5 [2ULL] [i_1 - 1] [i_1 - 2] = ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((((/* implicit */_Bool) (short)18876)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [5U] [i_1 + 1]))))));
                var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) 3778348838U)) ? (732966980U) : (1827834228U))), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) * (((/* implicit */int) arr_4 [i_0] [i_0])))), (((/* implicit */int) var_5)))))));
                arr_6 [i_0] [i_0] [(unsigned short)14] = ((unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (var_1))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(var_1)))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (var_8))))))));
}
