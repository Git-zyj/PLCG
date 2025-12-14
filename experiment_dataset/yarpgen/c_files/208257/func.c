/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208257
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
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((var_17), (((((max((4), (arr_0 [i_4]))) + (((arr_11 [i_4] [i_2] [i_2] [i_1]) - (arr_11 [i_4] [7] [i_2] [i_0]))))) + (-2147483623)))));
                                var_18 = min((max((1167566157), (((int) 2090161918)))), (((int) ((33554431) ^ (arr_2 [i_0])))));
                                var_19 = ((max((((int) arr_3 [13])), (max((arr_2 [i_0]), (arr_5 [i_0] [i_0] [i_1] [i_0]))))) & (((min((arr_13 [5] [5] [i_2] [i_3] [i_4]), (arr_10 [i_0 - 1] [i_0 - 1]))) & (min((arr_5 [0] [i_1] [i_1] [i_1]), (arr_13 [8] [i_1] [i_1] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    var_20 = arr_9 [i_2] [5] [i_1] [i_0 - 1];
                }
            } 
        } 
    } 
    var_21 = 2138661795;
}
