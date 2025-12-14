/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191265
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [14] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [15] [i_2])) ? (arr_5 [i_0] [i_1] [i_2] [i_2]) : (arr_3 [i_2])))) ? (((int) arr_2 [i_0] [i_0])) : (((int) arr_3 [i_0])));
                    arr_8 [i_0] [17] [i_2] = var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [14] [i_2] [i_3] [i_4] = ((int) arr_5 [i_4] [i_2] [i_1] [i_0]);
                                arr_16 [i_0] [i_3] [i_2] [i_3] [i_2] = arr_3 [i_0];
                                arr_17 [i_0] [i_1] = ((int) ((((/* implicit */_Bool) arr_12 [i_4] [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) ((int) var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */_Bool) var_2)) ? (var_4) : (var_14));
    var_19 = min((((int) ((var_12) | (var_11)))), (((((/* implicit */_Bool) ((int) var_5))) ? (var_14) : (var_3))));
    var_20 = var_13;
}
