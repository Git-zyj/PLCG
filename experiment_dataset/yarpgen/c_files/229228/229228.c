/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = var_1;
                arr_6 [i_0] [i_0] [i_0] = (-32752 * 2);
            }
        }
    }
    var_13 = 4294705152;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_9 [i_2] = 1;
        var_14 = (arr_4 [i_2] [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_15 = (~1);
        var_16 = (min(var_16, ((min(((22 ? ((max(24576, 12))) : (arr_4 [i_3] [i_3] [12]))), 1)))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_18 [i_4] [i_4] = ((((arr_17 [i_4] [i_5]) ? -2147483641 : 59540)) | 1);
            var_17 = (arr_4 [i_4] [i_4] [i_4]);
        }
        var_18 = (~-3968);
        arr_19 [i_4] [i_4] = (arr_5 [i_4] [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            {
                var_19 = (((((((min((arr_21 [i_7]), 1))) ? ((8998403161718784 ? -2147483645 : 2)) : (arr_22 [i_6] [i_6] [i_7])))) <= (arr_20 [i_7 + 1])));
                var_20 = arr_22 [i_6] [14] [i_7 + 1];
            }
        }
    }
    #pragma endscop
}
