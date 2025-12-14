/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44445
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
    var_20 = (unsigned char)187;
    var_21 = ((/* implicit */long long int) var_8);
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (min((var_7), (((/* implicit */long long int) var_14))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_3)) ? (arr_11 [i_0 - 2] [i_0] [i_0] [i_0 - 3] [i_0] [i_0 + 2]) : (((/* implicit */unsigned long long int) var_12))))));
                            arr_13 [i_1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned char)67))));
                            arr_14 [i_0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)240))))) * (((((/* implicit */unsigned long long int) var_9)) - (arr_1 [i_0])))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_12)));
                arr_15 [i_0] [i_0] = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1]);
                var_25 = ((/* implicit */short) min((((/* implicit */long long int) max(((unsigned char)59), ((unsigned char)140)))), (max((((/* implicit */long long int) var_17)), (arr_7 [i_0] [i_0] [i_1])))));
                var_26 = ((/* implicit */unsigned short) min((var_5), (((/* implicit */unsigned long long int) var_12))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) ((var_7) & (((/* implicit */long long int) var_15))));
}
