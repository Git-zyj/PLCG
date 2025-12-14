/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (((!29100) ? (min(var_0, var_10)) : ((max(77316857, var_9)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_13 = ((((16 ? 1 : 28934))) ? (~var_7) : (1 % 1));
                var_14 = (~1);
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        var_15 = ((-12 ^ ((1 ? var_10 : var_9))));
                        var_16 = 4;
                        var_17 = 1;
                        var_18 = (max(var_18, -var_10));
                        arr_16 [i_4] [0] [i_1] [i_0] [i_4] = 1;
                    }
                }
            }
            var_19 = (min(var_19, (((~((60811 ? 0 : 1)))))));
        }
        arr_17 [i_0] [i_0] = ((!(!var_8)));
        arr_18 [i_0] = 17273;
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        var_20 = (min(var_20, var_5));
        var_21 = (min(var_21, var_3));
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_32 [i_6] [i_7] [i_7] [i_9] = (((max((-122 ^ 1), (max(var_0, 325245244)))) != (min(var_0, (!121)))));
                            var_22 -= (245 || 0);
                        }
                    }
                }
                arr_33 [i_7] [i_7] = (min((min((((0 ? 256542289 : -8959906891924331813))), ((8455 ? 15417193932529902594 : 16)))), 7));
            }
        }
    }
    var_23 = (max(var_23, ((max(((var_7 ? (max(6803927444325333818, 8959906891924331813)) : (65509 + var_6))), 171)))));
    #pragma endscop
}
