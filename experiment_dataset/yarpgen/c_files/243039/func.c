/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243039
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((var_12) > (var_8))))) / (((6991283317727832461LL) ^ (var_7))))) / (((/* implicit */long long int) ((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((1619722049U) < (var_3))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((var_15) > (2675245247U))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1619722049U)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2675245247U)) || (((/* implicit */_Bool) 2675245246U)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((1619722049U) < (var_1))))))) > (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (var_0)))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1619722049U)) ? (var_1) : (2675245233U))))))));
                                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((var_3) == (var_3)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                                arr_16 [i_1] [i_1] [i_2] [i_3] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */int) ((2675245247U) < (2675245268U)))) <= (((/* implicit */int) var_14))));
                                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2675245246U)) ? (2675245246U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (1619722048U)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_6);
}
