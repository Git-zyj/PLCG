/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((~((16156139362212658466 ? var_0 : var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((var_10 - ((2290604711496893149 << (var_11 - 14311963451354419967))))))));

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_17 = ((2 ^ (((18446744073709551615 ? (arr_0 [i_2 + 2]) : var_4)))));
                    arr_6 [i_1] [i_1] [i_2] [i_1] = 3290957300;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] = ((~(2147483647 <= var_3)));
                    arr_10 [i_0] [13] [i_0] [i_0] = 0;
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_4] [i_4] [i_0] [i_0] = (var_7 * var_5);
                    var_18 = 939;
                }
                var_19 = (min(var_19, 64430));
                arr_15 [i_0] [i_0] [i_0] = 3440798445;
            }
        }
    }
    #pragma endscop
}
