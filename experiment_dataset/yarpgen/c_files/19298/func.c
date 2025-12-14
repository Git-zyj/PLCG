/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19298
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
    var_15 = ((/* implicit */unsigned int) min((((var_8) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) var_5)))))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) -9223372036854775790LL)))) || (((/* implicit */_Bool) (short)23133)))))));
    var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) % (((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) | (var_14)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_3))) : (((var_3) + (((/* implicit */long long int) 2518457360U))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3] [i_0])) ? (((/* implicit */int) (short)-14828)) : (((/* implicit */int) var_5))))) == (((((/* implicit */_Bool) var_5)) ? (var_3) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)43))) | (9223372036854775788LL)))))));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] [(short)11] = ((/* implicit */unsigned long long int) ((int) ((min((-9223372036854775807LL), (((/* implicit */long long int) (unsigned short)32878)))) | (((var_12) + (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((unsigned char) arr_2 [i_2]));
                }
            } 
        } 
    } 
}
