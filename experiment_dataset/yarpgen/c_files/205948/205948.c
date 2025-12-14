/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((!(~var_0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_16 *= (arr_9 [i_0] [i_2] [i_0]);
                    arr_10 [i_2] [0] = ((!(~65517)));
                    arr_11 [i_2] = (var_3 - -32762);
                }
            }
        }
        var_17 = var_5;
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_18 = (arr_12 [i_3]);
        var_19 = (((((!(!1594139315)))) % ((2502606167214563915 ? 32767 : -4140))));
        var_20 = (arr_13 [6] [i_3]);
        var_21 = (min(var_21, -32767));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_22 = (arr_14 [i_4] [i_4]);
        var_23 = (((((-(arr_14 [i_4] [i_4])))) || (((-var_3 ? (!var_13) : (arr_15 [22]))))));
        var_24 = (arr_15 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_25 *= (arr_15 [i_4]);
                    var_26 = (((((-(~var_9)))) ? (~32767) : (((((2700827987 ? 38910 : -12696))) ? (((!(arr_17 [i_4] [i_4])))) : (~255)))));
                }
            }
        }
    }
    var_27 |= (1 >= ((((var_2 * var_2) > (41698 >= var_0)))));
    #pragma endscop
}
