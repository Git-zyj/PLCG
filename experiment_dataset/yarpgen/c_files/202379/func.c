/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202379
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [6LL] [i_1] [i_4] [i_4] [i_4] [i_1] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2 - 2] [i_1] [i_4])) ? (((/* implicit */int) var_5)) : (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1)))) : ((-(arr_0 [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_8)), ((signed char)103)))))));
                                arr_14 [i_0] [14] [i_0] |= ((/* implicit */signed char) var_5);
                                arr_15 [i_4] [i_2] [i_2] [i_2] [i_0] |= ((/* implicit */signed char) var_9);
                                arr_16 [i_0] [i_1] [i_1] [i_2 + 1] [i_1] [i_4] = ((/* implicit */unsigned char) (unsigned short)41869);
                            }
                        } 
                    } 
                    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))), (arr_2 [15LL] [i_1])))) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((((/* implicit */int) var_0)) * (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2 + 1]))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned int) var_1)), (var_4))) : (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)107)) << (((((/* implicit */int) (short)30779)) - (30773))))))))));
}
