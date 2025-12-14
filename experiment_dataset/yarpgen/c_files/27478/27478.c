/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        var_11 = (max(var_11, (((((((arr_10 [i_1] [i_2 + 2] [i_2] [i_0] [i_2]) != var_0))) >> (((((arr_10 [i_1 + 3] [i_2] [i_2 + 1] [i_0] [8]) ? 16359 : (arr_6 [i_2] [i_2] [i_2] [i_3 + 2]))) - 16345)))))));
                        arr_11 [20] [i_1] [i_2] [19] [i_3] = (42352 <= 16932505681589943084);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [i_2] [i_2] = (1 * var_7);
                        var_12 -= (!var_6);
                    }

                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        var_13 = ((((min(15612318766930759959, (arr_5 [19] [19] [16]))) ? (((arr_2 [i_0]) + 2147483620)) : (arr_2 [i_1 + 2]))));
                        var_14 = (82 - var_5);
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = (((((arr_4 [i_1]) < (arr_9 [i_2]))) ? ((((((((arr_7 [i_5] [i_0] [i_0] [i_0]) ? -9 : (arr_9 [i_2])))) || ((max(18592, var_9))))))) : (max(1826207246, 11903212321159429540))));
                    }
                }
            }
        }
    }
    var_15 = min((min((6543531752550122076 / -56), 4294967295)), var_0);
    #pragma endscop
}
