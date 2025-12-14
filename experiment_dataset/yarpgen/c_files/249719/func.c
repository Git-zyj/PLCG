/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249719
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = -973781028;
                var_20 = ((/* implicit */int) ((unsigned char) var_15));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) ((var_15) == (((((/* implicit */int) arr_0 [(short)11])) + (var_13)))))) > (((/* implicit */int) ((short) arr_4 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */int) min((arr_0 [i_2]), (arr_0 [i_0])))), ((+(((/* implicit */int) arr_10 [i_3] [(short)2] [i_0] [i_0]))))));
                            arr_13 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0] = ((short) (-(((((/* implicit */int) var_6)) << (((var_13) - (172788473)))))));
                            arr_14 [(short)21] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3] [i_3])) ? (((((-23912930) & (((/* implicit */int) var_4)))) + (((arr_11 [i_0] [i_0] [i_2] [i_2] [i_3]) / (arr_3 [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_3] [i_0] [i_3])) : (-2120194706)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = var_14;
}
