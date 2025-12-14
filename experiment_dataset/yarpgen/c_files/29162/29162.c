/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 ? (min(((var_8 ? var_2 : 2465284689)), var_8)) : ((((~-4568) << 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] = -9186518620084050279;
                arr_5 [i_1] = ((var_7 % (32767 / -4579)));
            }
        }
    }
    var_11 = ((((((((-4571 ? var_5 : var_5))) ? (((max(var_8, 1)))) : var_5))) + (min(var_6, (((var_4 ? var_8 : var_9)))))));

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_12 = var_8;
                    var_13 = (max(((((((arr_3 [i_3] [i_4]) * (arr_7 [i_2] [i_2])))) ? (arr_7 [i_2] [i_3 + 1]) : (arr_7 [i_2] [i_4]))), (max(((var_2 * (arr_3 [i_3] [i_3 - 2]))), var_2))));
                    arr_13 [i_2] [i_2] [i_2] [i_2] = -280375465082880;
                }
            }
        }
        var_14 = (((arr_10 [i_2] [i_2]) ? var_4 : (((var_9 ? (~19313) : (~var_9))))));
        arr_14 [9] = ((min(-280375465082860, var_2)));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (var_8 ? var_7 : (((3187 == -280375465082874) ? ((280375465082859 ? 46859 : var_1)) : (((var_8 ? (arr_15 [i_5]) : var_7))))));
        arr_18 [i_5] [i_5] = -4587;
        arr_19 [i_5] [i_5] = -var_2;
        var_15 = (((max(((1 ? 52863 : 15502)), 0)) << (((!(((var_8 ? 202 : -280375465082842))))))));
    }
    #pragma endscop
}
