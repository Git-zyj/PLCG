/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_9 ? -7 : -91)) * -119))) ^ (min(-57, (max(404190334120617706, 18)))));
    var_15 = (((((min((var_7 ^ -127), ((max(-96, var_13))))) + 9223372036854775807)) << ((((((var_13 ? (min(-1, var_8)) : (-127 - 1))) + 4617158856699543083)) - 34))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 = min((arr_0 [i_0]), (!-52));
        arr_3 [i_0] [i_0] = (!var_1);
        arr_4 [i_0] [i_0] = 91;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_8 [i_1] = 106;
            var_17 = ((-(arr_1 [i_1 + 3])));
            var_18 = ((64 ? (arr_6 [i_1] [i_1] [i_1]) : 77));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_19 = (arr_0 [i_2]);
            var_20 = (9223372036854775779 ? 274877906943 : 54);
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                {
                    arr_17 [i_4] [14] [i_0] = ((max((~8312085961866167773), ((min(117, 35))))));
                    var_21 = max(((((-(-127 - 1))))), -5089876861710378340);
                    var_22 *= (((~var_7) | (!101)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 7;i_5 += 1)
    {
        var_23 = ((((-5363384892577658887 ? 95 : 26)) & var_11));
        var_24 = (min(var_24, -var_7));
    }
    #pragma endscop
}
