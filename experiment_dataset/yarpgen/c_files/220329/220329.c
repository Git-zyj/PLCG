/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [2] = ((-(9223372036854775792 >= 300507700)));
        var_17 &= (-2147483647 - 1);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [6] [6] = ((~(!2147483624)));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_18 [11] [3] [9] [1] [3] [20] [0] = (arr_14 [12] [3] [15] [1] [0] [3]);
                            var_18 -= 613606687;
                        }
                    }
                }
            }
        }
        var_19 = (((((-(((-2147483633 <= (arr_0 [15]))))))) + (((var_7 >> 1) ? (arr_4 [14]) : (var_3 * 1)))));
    }
    var_20 = 4081;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            {
                var_21 = (min(-4098, var_13));
                arr_24 [8] [4] |= var_2;
                var_22 = ((min((arr_3 [i_7 - 1]), var_6)) <= (arr_3 [i_7 + 3]));
                var_23 = ((!(((~(!var_8))))));
                arr_25 [i_6] [7] [i_6] = (max(var_8, ((((~65532) % (~var_15))))));
            }
        }
    }
    var_24 = var_15;
    #pragma endscop
}
