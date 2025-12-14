/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44122
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
    var_17 = var_11;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) 94574829U)) ? (94574812U) : (4200392438U));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_2] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-30655))));
                                var_18 = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [i_1] [i_4]);
                                var_19 = ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_1]))) ? (max((arr_2 [i_2] [i_1]), (arr_2 [i_3] [i_1]))) : (max((arr_2 [i_0] [i_1]), (arr_2 [i_1] [i_1]))));
                                var_20 += 4200392467U;
                                var_21 += ((/* implicit */unsigned short) arr_3 [i_0]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (short)32744))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_9 [i_0] [i_1] [i_2] [i_0] [i_6])), (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((94574817U), (((/* implicit */unsigned int) var_7)))))))) : ((((_Bool)1) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                                var_24 = ((/* implicit */_Bool) ((((((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_17 [i_6] [i_2] [i_1] [(short)0]))))) - (((/* implicit */int) (short)32743)))) + (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_12 [(_Bool)1] [(short)4] [i_5])) + (((/* implicit */int) (short)32767))))))));
                                var_25 += ((/* implicit */_Bool) (unsigned short)65535);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) (_Bool)1);
}
