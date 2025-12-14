/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(max(-1, -1784737280416594638))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_11 = (-1784737280416594633 ? 114 : 1718393588);
        var_12 ^= (((var_1 ? var_9 : var_1)) / 7680);
        arr_4 [i_0] = ((((var_6 < (!var_3))) || ((!(var_7 >= var_1)))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_13 = (var_6 ? var_6 : var_2);
            var_14 = ((var_0 ? -var_5 : var_9));
            var_15 = var_9;
            arr_11 [i_1] [i_1] = ((var_6 ? var_1 : var_7));
            var_16 = ((var_3 ? var_5 : var_5));
        }
        var_17 = 3235595838281858517;
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_18 = var_5;
        var_19 += (!((min((((var_8 ? var_7 : var_2))), var_9))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 7;i_5 += 1)
            {
                {
                    var_20 = ((((((var_5 ? var_3 : var_6))) ? var_2 : (var_6 < var_7))));
                    arr_21 [i_3 + 1] [i_4] [i_5] [i_5] = ((((0 ? 2860334282889149471 : 1)) <= (~var_9)));
                }
            }
        }
        var_21 = ((var_2 < (min((~var_5), var_4))));
    }
    var_22 = ((((max(var_5, var_9)) <= var_0)));
    #pragma endscop
}
