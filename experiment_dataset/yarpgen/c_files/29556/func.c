/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29556
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
    var_20 = ((/* implicit */short) var_3);
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) var_17))) + (((/* implicit */int) var_0)))) << (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */int) (short)17821)) != (((/* implicit */int) var_7))))) : (((/* implicit */int) (unsigned short)46879))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1 - 1] [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)17821))))) && (((/* implicit */_Bool) -8272883178682847445LL))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = (short)-17821;
                                arr_15 [i_0] [i_4] [i_2] [(signed char)12] [i_1 - 1] [i_4] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)59505)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6001))) : (min((var_9), ((-9223372036854775807LL - 1LL))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-17821)) || (((/* implicit */_Bool) (-2147483647 - 1)))))), (((((/* implicit */long long int) ((/* implicit */int) (short)32736))) / (var_13))))) ^ (min((((/* implicit */long long int) ((((((/* implicit */int) (short)-32745)) + (2147483647))) << (((((var_19) + (931913926))) - (14)))))), (((((/* implicit */long long int) ((/* implicit */int) var_12))) + (arr_0 [i_1] [i_0])))))));
            }
        } 
    } 
}
