/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = -20749;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_20 = ((((arr_4 [i_0] [i_0]) ? 6510226813770207294 : (arr_0 [i_0]))));
            var_21 = ((~((-8676 ? (arr_0 [i_0]) : 2664243473))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_22 = ((27 ? ((-9 ? (-9223372036854775807 - 1) : (arr_7 [i_0] [i_1]))) : 1111795364));
                        var_23 = 1725362409;
                    }
                }
            }

            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {
                arr_15 [7] [i_0] = ((0 ? 2344566736 : ((~(arr_13 [i_4] [i_0] [i_0] [i_0])))));
                var_24 = 1111795372;
                arr_16 [9] [i_0] [i_0] [i_0] = (((arr_0 [i_0]) == (((-(arr_4 [i_0] [i_4]))))));
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                arr_19 [i_0] [i_0] = ((+(((arr_10 [i_1]) ? 157 : 65528))));
                var_25 = (arr_3 [i_0] [i_0] [i_0]);
            }
            arr_20 [i_0] [i_1] [i_1] = (!1111795361);
        }
    }
    var_26 = 18446744073709551612;
    #pragma endscop
}
