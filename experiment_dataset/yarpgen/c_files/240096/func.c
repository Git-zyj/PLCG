/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240096
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15LL)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 1])) / (((/* implicit */int) arr_0 [i_0 - 1])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_16 = arr_3 [i_0 - 1] [i_0];
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) 0ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_3] [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (~(1398937970)))))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_3] [i_3] [i_3])))))));
                            arr_9 [i_0 - 1] [i_0] [i_2] [i_3] = ((/* implicit */int) (signed char)(-127 - 1));
                            var_18 = arr_5 [i_0] [i_0];
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])))))) + ((+(arr_2 [i_0] [i_1 + 2] [i_0])))));
                var_19 = ((/* implicit */unsigned long long int) 2279365518U);
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_0] [(signed char)5] [i_0] [(signed char)12]);
            }
        } 
    } 
    var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */unsigned int) 1398937970)) - (2331323646U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_13))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */int) var_4)), (var_1))) != (((/* implicit */int) var_7)))))) : (var_9)));
}
