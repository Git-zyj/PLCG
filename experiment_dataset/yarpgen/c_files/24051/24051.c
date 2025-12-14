/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((1 ? ((3823999960605843601 ? var_11 : var_1)) : ((var_0 ? 878258601 : var_5)))), (((var_2 && (~var_8))))));
    var_16 = 2171539245;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (var_13 || 1258504982017656294);
                    arr_11 [1] [1] [i_2] [i_0] = ((-(arr_3 [i_2 - 3] [i_1] [i_0])));
                    var_17 = (max(var_17, 1));
                    arr_12 [i_0] [i_0] [i_0] = var_14;
                    arr_13 [i_1] [i_0] = var_6;
                }
            }
        }
        arr_14 [i_0] [i_0] = 254;
        arr_15 [i_0] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_18 = (max((((((17188239091691895347 ? var_3 : var_12))) ? 254 : (var_10 && var_3))), ((((((arr_21 [i_4] [i_3]) & var_10)) < var_13)))));
            var_19 = ((((arr_18 [13] [i_3] [i_4]) >= ((var_14 ? var_12 : (arr_4 [i_3] [i_3] [i_4]))))) ? (min(((2 ? 1 : 2302225969)), (((~(arr_18 [i_3] [i_3] [i_3])))))) : (arr_4 [i_3] [i_3] [i_4]));
        }
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            var_20 = (min(var_20, ((((((((min((arr_20 [6]), var_9))) ? 1 : (var_9 & var_12)))) ? (((!(arr_23 [i_5 - 3])))) : (((!(((1 ? 2251799813685247 : 5614937799549079648)))))))))));
            var_21 = ((15323751707789837130 ? var_13 : 149));
        }
        var_22 ^= (((((~1) ? ((2806863218 ? var_13 : 1)) : (arr_4 [i_3] [i_3] [i_3]))) > ((194 ? -3415062592534396227 : (-9223372036854775807 - 1)))));
        var_23 = (arr_23 [i_3]);
        var_24 = ((((min(var_2, var_8)) >= ((((arr_7 [i_3]) << (((arr_6 [10] [17]) - 3612540851115703704))))))));
        var_25 = 33;
    }
    #pragma endscop
}
