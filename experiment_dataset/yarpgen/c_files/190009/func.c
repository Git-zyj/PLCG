/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190009
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */long long int) arr_0 [i_0]))))) : (arr_2 [i_1]))) & (min((((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))), (min((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_2 [i_0])))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_2 [i_1]))));
                arr_4 [i_0] [i_0] [i_1] = arr_0 [i_0];
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) arr_2 [i_0]);
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] = (((~(arr_12 [i_2 - 1] [i_4] [i_4] [i_2 - 1] [i_4] [20]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(arr_9 [i_0] [i_2] [i_0])))))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) arr_1 [i_2 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) arr_1 [i_2 - 1]))))) : (11224064593194608711ULL)));
                                var_24 = ((/* implicit */unsigned short) (~(min((((unsigned int) arr_1 [i_0])), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : (arr_12 [(signed char)20] [i_1] [i_1] [i_2] [i_1] [i_2])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_2)) ? (var_16) : (var_15))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (681097464U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (var_12)))));
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (_Bool)1))));
    var_27 = ((/* implicit */_Bool) var_3);
}
