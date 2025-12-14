/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214802
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
    var_10 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((int) (short)-29829))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -800206637)) ? (var_3) : (4024308863U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (4024308862U) : (((/* implicit */unsigned int) var_1))))) : (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) var_0)))))) : (var_6)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((unsigned int) ((((/* implicit */int) ((unsigned char) arr_7 [i_0]))) | (((arr_2 [i_0]) << (((arr_4 [i_0] [i_0] [i_0]) - (1456147153)))))));
                var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-476)) ? (((/* implicit */unsigned int) min((var_1), (var_7)))) : (((4024308843U) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */int) arr_1 [i_0])) : (arr_6 [i_0] [8] [i_1]));
                var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */int) ((unsigned char) ((57344U) ^ (3059874484U))))) >> (((/* implicit */int) ((((arr_0 [i_0]) % (((/* implicit */unsigned int) 800206631)))) <= (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) var_1)))))))))));
                var_14 = ((/* implicit */long long int) var_9);
                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */int) arr_7 [i_0]))))) : (min((((/* implicit */unsigned int) arr_3 [i_1])), (270658462U)))))) ? (1235092812U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            }
        } 
    } 
}
