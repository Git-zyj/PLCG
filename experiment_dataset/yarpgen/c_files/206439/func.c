/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206439
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
    var_10 |= ((/* implicit */short) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)26253)) ? (((/* implicit */int) (short)18047)) : (((/* implicit */int) (short)-31948))))))));
    var_11 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) min((arr_3 [i_0]), (var_9)))), ((unsigned char)103)))) * (((int) max((((/* implicit */int) var_5)), (0))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3] [i_1 - 1] [i_2] [i_3] = (-(((/* implicit */int) (signed char)-91)));
                                var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_11 [i_2 + 4] [i_1 - 1] [i_2 + 4] [i_3] [i_3])))));
                                var_14 *= min((((((/* implicit */_Bool) (short)26662)) ? (((/* implicit */int) var_2)) : (arr_9 [i_4 - 1] [i_2 + 1] [i_1 - 1] [i_0 - 4]))), (((/* implicit */int) (!(((/* implicit */_Bool) -5))))));
                            }
                        } 
                    } 
                } 
                var_15 = var_4;
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_3);
}
