/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37952
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
    var_13 = (~(min((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))), (max((var_11), (((/* implicit */unsigned int) var_9)))))));
    var_14 *= ((/* implicit */short) (+(min(((+(((/* implicit */int) (short)-11065)))), (((/* implicit */int) ((var_7) != (((/* implicit */int) (short)692)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)960)), (arr_3 [i_0] [i_4]))))));
                                arr_14 [0U] [(signed char)22] [(unsigned char)1] [i_0] [i_3] [19U] [i_4] = ((/* implicit */_Bool) arr_8 [i_0] [0]);
                                var_16 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1]);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)238))));
                    var_18 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [21] [i_0] [i_2]))));
                }
            } 
        } 
    } 
}
