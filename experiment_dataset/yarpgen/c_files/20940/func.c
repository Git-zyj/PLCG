/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20940
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) (~(((var_1) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_1] [i_4])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))))) : (((((/* implicit */_Bool) 2147483644LL)) ? (2147483642LL) : (((/* implicit */long long int) var_10))))))));
                                var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)155))))) : (((((/* implicit */_Bool) var_10)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_4))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] [i_0] = max((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), (((((var_6) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) & (((/* implicit */long long int) arr_15 [i_0] [(_Bool)1])))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((((/* implicit */long long int) var_4)), (((((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_4)) < (var_6))))))))))));
                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) ((2147483640LL) == (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) ? (((/* implicit */int) (short)16256)) : (((/* implicit */int) var_15))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) max((var_8), (var_3)))) - (1)))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) var_7)) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (3865452077U))))))));
    var_20 = ((/* implicit */unsigned char) var_4);
    var_21 = ((/* implicit */long long int) var_4);
}
