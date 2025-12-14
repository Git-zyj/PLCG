/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_12 = ((((2135357528122595821 ? 0 : (arr_0 [i_0])))) ? 56 : 0);
        arr_4 [i_0] = -19;
        var_13 = (((arr_1 [i_0]) ? 18538 : (arr_1 [i_0])));
        arr_5 [i_0] = (arr_0 [i_0]);
        arr_6 [i_0] = ((0 ? (arr_1 [i_0]) : -2254532471714229742));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_14 = (!72);
            arr_11 [i_1] [i_1] = -860331389;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        var_15 *= 0;
                        arr_16 [i_3] [i_3] [i_3] [i_3] = (-19 ? 7485 : 127);
                        var_16 = (-15617 < 55304);
                        var_17 -= (arr_10 [i_2] [9]);
                    }
                }
            }
        }
        arr_17 [i_1] &= ((!(arr_12 [i_1] [i_1] [i_1])));
    }
    var_18 = ((((!(((4294967295 ? -25 : 7492))))) || 248));
    var_19 = (max(var_19, -16));
    #pragma endscop
}
