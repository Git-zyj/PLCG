/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = (((1033199425004393488 ? -1033199425004393489 : (arr_1 [i_0 - 2]))));
        arr_4 [i_0] = ((max((~var_4), ((-(arr_2 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_3 - 2] [2] [i_3] = ((63 ^ (--99795370)));
                        var_14 -= (arr_12 [i_0] [i_0 - 1] [i_0] [i_2] [i_3]);
                        var_15 = ((((max(2889547540, 2025715679))) < -1033199425004393484));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_16 [i_4] |= var_2;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                {
                    var_16 ^= 96;
                    arr_22 [i_6] [i_4] [i_4] = ((arr_19 [i_4] [i_4] [i_6 - 1]) * 10084733709969891915);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_17 += var_8;
                                arr_29 [i_4] [i_4] [15] [i_4] [i_4] [i_4] = (((arr_19 [i_4] [i_4] [i_4]) >= ((8362010363739659701 ^ (arr_23 [i_8] [i_7] [i_5] [i_5] [i_4])))));
                                var_18 -= ((1033199425004393499 ? 0 : 8362010363739659700));
                            }
                        }
                    }
                    var_19 = (arr_19 [i_6 + 1] [i_6] [i_6]);
                }
            }
        }
        var_20 = ((+((0 ? (arr_27 [i_4] [i_4] [i_4] [i_4] [7] [i_4]) : (arr_14 [1])))));
    }
    var_21 |= (~var_10);
    var_22 = ((var_4 ? ((max(var_2, 3221225472))) : (max(((min(var_1, 138))), 8362010363739659680))));
    var_23 |= var_7;
    #pragma endscop
}
