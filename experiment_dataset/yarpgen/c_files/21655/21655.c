/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 = 17135194455588131833;
        arr_2 [i_0] [i_0] = ((16589830670326233475 ? (~3653034913127271126) : var_14));
        var_17 = ((+(min((arr_0 [i_0] [i_0 + 1]), (arr_0 [i_0] [i_0 + 2])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            {
                var_18 = ((!((max(11899453508352554253, var_0)))));
                var_19 = (((((((arr_8 [i_1 + 2] [i_1 + 2]) ? (arr_7 [i_2] [i_2 - 2]) : (arr_4 [i_1] [i_1 - 1]))) >= ((var_15 >> (((arr_4 [i_1] [3]) - 24762))))))) >= (arr_4 [i_1 + 2] [i_2 - 1]));
                var_20 = (max(var_20, var_11));
                arr_9 [i_1] [i_2] = ((((((arr_3 [i_1 + 1] [i_2 + 2]) ? (arr_3 [i_1 + 1] [i_2 + 1]) : (arr_3 [i_1 + 1] [i_2 - 1])))) ? 255 : (((!1856913403383318128) ? (max(var_11, 6547290565356997362)) : ((5563 ? var_5 : (arr_7 [i_2] [i_2])))))));
                arr_10 [7] [i_2] [7] = ((!((((arr_0 [i_2] [i_2 + 1]) ? var_14 : 249)))));
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_21 = ((((max((min((arr_12 [0]), (arr_11 [1]))), ((min((arr_12 [i_3]), (arr_12 [i_3]))))))) ? (((var_1 >= -1731002721726612396) ? ((~(arr_11 [i_3]))) : ((((var_7 < (arr_12 [i_3]))))))) : ((((min(var_4, 1334530072))) & (arr_11 [i_3])))));
        var_22 = (max(241, 251));
        arr_13 [i_3] [i_3] = (max((min((max(45722, (arr_12 [i_3]))), (min((arr_12 [i_3]), var_12)))), (arr_12 [i_3])));
    }
    var_23 = (((-1646499695 || 11899453508352554253) >= var_5));
    #pragma endscop
}
