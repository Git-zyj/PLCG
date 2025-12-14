/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209086
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (+(((/* implicit */int) (signed char)32)))))));
                                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((unsigned int) (~(((/* implicit */int) ((short) arr_9 [i_0] [(_Bool)1] [i_0] [i_0] [(signed char)17] [i_0])))))))));
                                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (~((~(((/* implicit */int) var_1)))))))));
                                arr_14 [i_4] [(short)1] [i_4] [i_1 + 1] [(short)1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)12739)) : (((/* implicit */int) (short)-5113))))) ? (((/* implicit */int) arr_4 [i_1] [i_1 + 2] [(signed char)14])) : ((~(((/* implicit */int) (short)12739)))))), (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_1))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (short)-12739)))) - (((/* implicit */int) ((signed char) arr_13 [i_1 - 1] [i_1 - 1] [(signed char)5] [i_1 + 2] [i_1 + 2] [i_0])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_8))))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))))));
}
