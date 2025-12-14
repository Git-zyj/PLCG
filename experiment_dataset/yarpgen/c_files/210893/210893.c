/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 ^= (min((min((max((arr_1 [5] [i_0]), var_6)), ((max(2205679256077988319, var_0))))), (max((min((arr_1 [i_0] [i_0]), 61143)), -6806902266555578591))));
        arr_2 [i_0] = (min((arr_1 [i_0] [i_0]), (min((min(-1727703752, (arr_1 [i_0] [i_0]))), (max(170, var_9))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_12 = (max(var_12, (~-1394812251)));
        var_13 = (min(var_13, (~var_0)));
        var_14 = (--61143);
        var_15 ^= (+-942535700);
    }
    var_16 = (min((min(var_1, (min(var_0, var_1)))), (min(4387, var_0))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                {
                    arr_14 [1] [i_2] [10] = (min(((max(114, -25635826))), (max((min((-9223372036854775807 - 1), (arr_1 [i_2] [i_3]))), ((max(-4580937192957970855, (arr_12 [i_4] [i_4] [i_3] [0]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (~(max((min(var_9, var_5)), ((max(61143, (arr_11 [i_2])))))));
                                arr_20 [i_6] [i_2] [i_4] [i_2] [i_2] = (max((((max(-25635817, (arr_11 [i_5]))))), (min(((min(var_3, -2205679256077988307))), (min(5763510136951860001, var_8))))));
                                var_17 = (min(2205679256077988295, 3896843829064484249));
                                arr_21 [i_2] [i_2] = max((min((max(7609598995457281172, -2205679256077988268)), (!82))), (max(31263, (max((arr_11 [i_3]), (arr_1 [i_2] [4]))))));
                                var_18 = ((-(max((max(var_8, var_7)), var_3))));
                            }
                        }
                    }
                    var_19 = (min((max(((min((arr_0 [i_2]), (arr_13 [i_2] [i_2])))), (~5763510136951860017))), ((min(((max(25635826, (arr_15 [i_2] [i_2] [i_2] [i_3])))), ((~(arr_0 [i_2]))))))));
                    var_20 = (max((min((min(1297929206010148381, (arr_12 [i_2] [i_3] [i_4 - 1] [i_4]))), ((max(var_3, (arr_9 [i_2] [i_3])))))), (min(((min(-6824081464048089933, 26358))), (max(var_0, 10092332680188952305))))));
                }
            }
        }
    }
    #pragma endscop
}
