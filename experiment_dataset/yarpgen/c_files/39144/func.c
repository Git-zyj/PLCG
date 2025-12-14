/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39144
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
    var_16 = ((/* implicit */signed char) (~(max((4294967295U), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))))));
    var_17 = ((/* implicit */signed char) var_12);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_14))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) (signed char)-69);
                                var_18 ^= ((/* implicit */signed char) (-(arr_10 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_0])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_19 &= ((/* implicit */signed char) var_9);
                        var_20 = max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-118)))) + (min((((/* implicit */int) var_14)), (771352650)))))), (((((/* implicit */unsigned int) min((arr_0 [i_0] [i_2 + 3]), (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5]))))) / (arr_9 [i_0] [i_2 + 1] [i_2 + 2] [i_0]))));
                        arr_17 [16U] [i_1] [i_1] [i_1] = arr_15 [i_5] [i_2] [i_1] [i_1] [i_0];
                    }
                }
            } 
        } 
    } 
}
