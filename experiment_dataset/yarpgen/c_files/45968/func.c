/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45968
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
    var_11 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((short) max((var_1), (arr_3 [i_0 + 1] [i_0 + 2]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_12 = max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_8 [9] [i_3])) ? (((((/* implicit */_Bool) -614329747)) ? (arr_2 [i_0]) : (arr_7 [i_0]))) : (-424278936))));
                            var_13 = ((/* implicit */unsigned int) arr_11 [i_2] [i_2]);
                        }
                    } 
                } 
                arr_15 [(short)9] [(short)9] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1])) ? (2147483647) : (arr_8 [i_0 - 1] [i_1]))), (((int) (-2147483647 - 1)))));
                var_14 = ((/* implicit */int) ((((unsigned int) (~(((/* implicit */int) var_10))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((int) -1073741824))) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1)));
}
