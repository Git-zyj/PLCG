/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219793
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) + (((/* implicit */long long int) var_10))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_0 - 1]) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_5)) : (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (max((arr_7 [i_4 - 1] [i_1] [(signed char)8] [i_3]), (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) var_10))))))))))));
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) arr_7 [i_0 + 3] [i_0] [i_0] [i_0 - 1]))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [(unsigned char)18] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) var_0);
}
