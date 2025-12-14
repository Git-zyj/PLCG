/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 += (arr_0 [i_0]);
                arr_6 [i_0] [i_0] [i_0] = ((-(arr_2 [i_0] [i_1])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_14 *= (1 != 3312);
        var_15 = 1;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_16 *= (arr_7 [i_3] [i_3]);

        /* vectorizable */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            var_17 += (arr_3 [i_4 + 2]);
            var_18 = (max(var_18, (arr_8 [6])));
            var_19 = (118 ? 1 : 118);

            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                arr_20 [i_3] [i_3] = (arr_9 [i_3]);
                arr_21 [14] [i_5] [i_5] [i_3] &= (((arr_19 [5] [i_4 + 2] [i_5]) & (arr_16 [i_4 + 2] [i_5] [i_5 + 3])));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_24 [i_3] [7] [i_3] = 1822545558;
                arr_25 [i_6] [i_3] [i_3] [i_3] = (((arr_2 [i_4 + 4] [i_4 + 3]) ? -118 : (arr_2 [i_4 + 1] [i_4 + 4])));
            }
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_20 = (max(var_20, (((!(arr_11 [i_3]))))));
            var_21 = (((((arr_14 [i_7] [i_3]) | ((min((arr_22 [i_3]), 117)))))) ? (((!(arr_1 [i_3] [i_3])))) : ((1822545558 ? 1 : -338723590)));
            var_22 = (min(var_22, 124));
        }
    }
    #pragma endscop
}
