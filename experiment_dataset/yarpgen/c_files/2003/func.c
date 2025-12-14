/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2003
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
    for (short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_9 [i_1] [i_0] [i_2] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-25912)))) | (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [2U] [(short)15])))), (((/* implicit */int) var_5))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = (!(((/* implicit */_Bool) var_18)));
                            var_19 = ((/* implicit */unsigned short) max(((short)32766), (min(((short)-25928), (((short) 1867118317))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */short) arr_2 [i_0]);
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!((!(((/* implicit */_Bool) (short)-8210)))))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? ((+(((((/* implicit */int) (short)25928)) / (((/* implicit */int) (unsigned short)65535)))))) : ((+(((/* implicit */int) var_15))))));
}
