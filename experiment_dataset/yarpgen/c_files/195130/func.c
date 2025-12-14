/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195130
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
    var_18 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */long long int) ((var_12) - (1023U)))) + (((long long int) (unsigned short)37143)))));
    var_19 = ((/* implicit */long long int) var_9);
    var_20 = (-(((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-1)) > (((/* implicit */int) var_15)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-90))) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1])))))) : ((+(274877382656ULL)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_5 [i_1 - 1] [i_3]))));
                            var_23 = ((/* implicit */signed char) 18446743798832168959ULL);
                            arr_8 [i_0] [i_1] [12U] [15LL] [(unsigned short)5] [i_1] = ((/* implicit */long long int) var_11);
                            arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446743798832168945ULL)) ? (((arr_4 [i_1 - 1] [i_1] [i_1 + 1] [i_2 + 1]) ? (((/* implicit */unsigned long long int) 4294966273U)) : (18446743798832168960ULL))) : (((/* implicit */unsigned long long int) ((long long int) ((long long int) 4049292157U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) 1023U);
}
