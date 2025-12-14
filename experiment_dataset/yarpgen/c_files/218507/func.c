/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218507
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
    var_18 = ((/* implicit */unsigned long long int) var_11);
    var_19 = ((/* implicit */short) min((min((((/* implicit */int) (short)-3994)), (var_15))), (((/* implicit */int) (short)-3974))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)3991)), (var_9)))) || (var_16))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~((-9223372036854775807LL - 1LL)))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-3973)) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) (short)-3993))))))) : (((unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-3994)))))));
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) max(((short)3992), (((/* implicit */short) var_16))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((max((((((/* implicit */int) (short)3973)) & (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */int) (short)-3993)) > (((/* implicit */int) var_13))))))) > (((((/* implicit */_Bool) (short)-4016)) ? (((/* implicit */int) (short)-4016)) : (((/* implicit */int) (short)3992))))));
    var_23 = ((/* implicit */long long int) (~(var_12)));
}
