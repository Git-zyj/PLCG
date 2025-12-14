/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_9 % var_5) < ((max(var_0, -11722))))) ? (((var_7 * var_2) % (max(var_2, -7241188044338464152)))) : (((~((max(var_2, 133))))))));
    var_11 = (((-var_0 + (max(var_8, var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((-(1 & var_9)));
        arr_3 [i_0] [i_0] = ((((var_0 ? var_0 : 177)) >> (((arr_1 [i_0]) - 49))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_12 = (min(var_12, (arr_1 [i_0])));
            var_13 -= (((177 || 177) || (arr_5 [i_0] [i_1 + 1])));
            arr_6 [i_0] [i_1] = var_8;
        }
        var_14 = ((((var_1 ? var_5 : (arr_0 [i_0]))) < (177 < var_9)));
        var_15 = var_9;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_16 *= (16384 ? 1 : 73);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_16 [i_4] = (((((arr_14 [i_2 - 1] [i_2 - 1] [i_4]) + var_6)) << (var_3 + 21)));
                    arr_17 [i_2 + 1] [i_2] [i_4] [i_2] = (179 & 19073);
                    var_17 *= (arr_1 [i_2]);
                    arr_18 [i_2] [i_2] [i_4] = var_1;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                {
                    var_18 = ((var_8 ? 69 : (arr_25 [i_5] [i_5 + 4] [i_5])));
                    var_19 = ((arr_23 [i_2 + 1] [i_5] [i_2 + 1]) ? (!var_6) : 3283103904);
                    arr_26 [i_5] [i_5 - 3] [i_5] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
