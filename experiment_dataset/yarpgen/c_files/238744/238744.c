/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 = min((min((arr_0 [i_0]), (arr_0 [i_0]))), (arr_0 [i_0]));

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] = ((2925592971 ? 1369374325 : 1369374330));
            arr_5 [2] |= ((!((min((arr_0 [i_0]), ((1369374323 ? (arr_0 [i_1]) : 241)))))));
            var_11 = ((1369374325 ? 1369374325 : 1369374325));
            var_12 = ((252 ? (((((-(arr_0 [i_0])))) ? (arr_3 [i_1] [i_1]) : (arr_2 [i_0] [i_1] [i_1]))) : (arr_0 [12])));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_10 [i_1] [5] [i_1] = (max(-16568, 618663918));
                var_13 -= 2925592971;
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_14 [i_1] [i_0] = 3676303377;
                var_14 -= -32739;
            }
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            arr_17 [i_0] [6] [i_0] = -35;
            var_15 ^= ((117 ? 6 : -16568));
        }
        var_16 *= -4662189894515769247;
        var_17 = (arr_9 [i_0] [i_0] [8] [4]);
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_18 = (max(var_18, (((-(min(-80, (arr_8 [4] [16] [4]))))))));
        var_19 &= ((-7656 ? 219 : 307637729));
    }
    var_20 = ((3676303377 ? ((2925592977 ? ((max(var_6, var_0))) : var_2)) : var_1));

    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_21 = (max(var_21, (((5031597526949183964 ? var_6 : (~247))))));
        var_22 = (((((+(min((arr_0 [i_6]), var_3))))) ? 112002093 : ((max(var_4, 2212115613)))));
        var_23 = (arr_11 [i_6] [i_6] [i_6] [12]);
    }
    #pragma endscop
}
