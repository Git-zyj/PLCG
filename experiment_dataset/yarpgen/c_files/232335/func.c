/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232335
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2038069091)) ? (((/* implicit */int) arr_8 [i_2 - 2] [i_1])) : (((/* implicit */int) (unsigned char)53))))) : (arr_5 [i_0 - 1] [i_1 + 3] [i_1 + 3])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)52)), ((unsigned char)38))))) != (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_1] [i_1]))) : (arr_3 [i_0])))))) : (max((arr_7 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */int) (unsigned char)143))))));
                            var_19 &= ((/* implicit */_Bool) arr_4 [i_1 - 3] [i_1 - 3] [i_2 - 1]);
                            arr_9 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) >= (arr_5 [i_0] [i_1 - 1] [i_2]))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-112)))) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_3]))));
                            arr_10 [i_0] [i_0] [i_3] [i_0] [i_1] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_8 [i_0] [i_1 - 2])), (arr_4 [i_0] [(signed char)7] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) arr_8 [i_2] [i_0]))))) : (arr_3 [i_2])))) ? (((((/* implicit */_Bool) min((var_2), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))) : (min(((-(((/* implicit */int) (unsigned char)26)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned char)37))))))));
                        }
                    } 
                } 
                var_20 -= min((((/* implicit */unsigned int) arr_7 [i_1] [i_1 + 2] [i_1] [i_1 + 2])), ((~(arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_8 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25172))) : (arr_5 [i_1] [i_1] [i_1])))) ? (max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_4 [19ULL] [i_0] [19ULL])))) : (((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) var_16)) : (var_2)))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) var_16))))) == (((((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) / (((/* implicit */int) var_15))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_12);
}
