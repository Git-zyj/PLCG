/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(15872, 96));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (((!var_4) ? ((15882 ? 49667 : (arr_0 [i_0] [i_0]))) : (61532 < 49691)));
        var_13 -= (((((((min(6645414669435136047, (arr_0 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_4)) : (min((arr_0 [i_0] [3]), var_2))))) ? (((-5900113944308265656 ? ((var_1 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (~15845)))) : ((((arr_0 [i_0] [i_0]) ? 2912762041 : -2513)))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_4 [i_1] = ((((((((-(arr_3 [i_1 + 1]))) != (arr_2 [i_1 + 1]))))) - (((min(48210, var_1)) >> 2269409289253235719))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_16 [i_4] = (min(((((((var_2 ? (arr_6 [i_1] [i_1]) : (arr_9 [7])))) ? var_8 : (arr_1 [i_2])))), (var_10 / 15533)));
                                var_14 = (min(var_14, (((var_10 ? (((arr_3 [i_3 - 2]) ? var_1 : 2912762018)) : (((-(arr_10 [i_1 + 2])))))))));
                            }
                        }
                    }
                    arr_17 [i_3] [i_2] [14] = (((1382205256 - (((arr_3 [i_1]) ? 8632034013268209901 : (arr_9 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
