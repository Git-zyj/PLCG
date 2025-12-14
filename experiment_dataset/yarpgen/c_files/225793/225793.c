/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((+((18350977800261042552 ? (128 == var_9) : var_6))));
    var_13 = var_8;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = ((57120 ? (arr_2 [i_0] [i_0]) : (((var_10 ? var_2 : 618)))));
        var_15 = var_1;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = 40594;
            arr_7 [i_0] [i_0] [i_1] = ((89 / 1344334614) / ((var_6 / (arr_2 [i_0] [7]))));
        }
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_17 |= (((((+(((arr_9 [18]) ? (arr_9 [3]) : var_9))))) ? (arr_8 [i_2]) : ((min((max((arr_9 [15]), var_10)), 64918)))));
        var_18 = (min(64918, 156000413));
        var_19 = (max(var_19, (arr_8 [i_2])));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_20 *= ((((max((arr_12 [i_2]), (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [19])))) && (arr_11 [i_2] [i_4 - 1] [i_2])));
                        arr_20 [18] = (max((((16320 >= -64) ? (arr_18 [i_4 + 1] [i_5] [i_4 + 1] [7] [i_4 + 1] [i_4 + 1]) : (~-1))), (arr_11 [i_2] [i_2] [i_2])));
                        arr_21 [i_5] [i_4] [i_3] [i_2] = (((-1 || 65535) == ((-(arr_12 [i_2])))));
                    }
                }
            }
            arr_22 [i_2] [i_2] [i_2] = ((+(((arr_16 [i_2] [i_3] [i_3] [i_3]) ? (arr_16 [i_2] [i_3] [i_3] [i_3]) : (arr_16 [i_2] [i_2] [i_3] [i_3])))));
            var_21 = (+((min((arr_17 [i_2] [i_2]), ((((arr_13 [i_2]) < (arr_16 [i_2] [6] [i_3] [i_3]))))))));
        }
        var_22 &= (max(((((arr_16 [i_2] [i_2] [i_2] [i_2]) * (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])))), (((arr_13 [i_2]) / (arr_13 [i_2])))));
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            {
                arr_27 [i_6 + 2] = ((!(((((((arr_17 [i_6 + 1] [i_7 - 2]) >= 0))) ^ (arr_24 [i_7 + 1]))))));
                arr_28 [i_6] [i_6] [i_7] = (((arr_12 [i_6 + 2]) * (((((((arr_8 [i_7]) <= (arr_15 [1] [7])))) / var_0)))));
                var_23 = (((4267806902068102035 == (arr_8 [i_6 + 2]))));
            }
        }
    }
    #pragma endscop
}
