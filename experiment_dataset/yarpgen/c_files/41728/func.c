/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41728
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
    var_17 = max((((/* implicit */short) (signed char)93)), (max((min((var_13), (var_1))), (((/* implicit */short) min(((signed char)113), ((signed char)-105)))))));
    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0])))), ((+(((/* implicit */int) arr_0 [i_1] [i_0])))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (short)-1;
                    arr_9 [i_2] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_7)))))))));
                    var_20 = ((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [i_0]);
                }
                var_21 *= ((/* implicit */signed char) (short)-8116);
                var_22 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_3 [i_1])))) > (min((((((/* implicit */_Bool) var_13)) ? (-1766502113) : (((/* implicit */int) var_3)))), ((-(((/* implicit */int) (signed char)92))))))));
                arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)93)) ^ (var_4))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))))) & (max((4294967295U), (((/* implicit */unsigned int) var_11))))));
            }
        } 
    } 
}
