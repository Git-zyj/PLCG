/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241479
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_11 [6] [i_0] [i_0] |= (-(((((/* implicit */_Bool) 1321323388U)) ? (1603112915U) : (1321323388U))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((((/* implicit */unsigned int) var_10)) < (min((1321323388U), (((/* implicit */unsigned int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_17 [i_2] [i_2] = ((/* implicit */_Bool) max((((arr_6 [i_0]) ? (arr_7 [i_0] [i_1] [i_2]) : (var_6))), (((/* implicit */long long int) var_10))));
                                arr_18 [(_Bool)1] [i_1] [(signed char)8] [i_2] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) max((var_14), (arr_5 [i_0] [i_0] [i_2])));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) min((((var_4) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (1321323388U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1321323393U)))))), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) var_2)) * (var_9)))))));
    var_16 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) var_9)) : (var_11)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))))));
    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))));
}
