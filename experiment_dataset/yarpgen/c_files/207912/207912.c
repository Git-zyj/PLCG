/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_18 = 26798;
            arr_6 [i_0] = ((3844106114 >> ((((~(arr_5 [i_1] [i_1]))) + 136))));
            var_19 -= (((arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? 1 : -5102830132532307501));
            var_20 = ((17 == (arr_0 [i_0])));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] = ((~(arr_4 [i_0] [i_2 - 1] [i_0])));
            var_21 = -65535;
            var_22 ^= (((arr_1 [i_2]) / (((9838 ? -5102830132532307501 : -5102830132532307516)))));
        }
        arr_10 [i_0] = -26670;
        var_23 -= 11370276325977344631;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    var_24 = 63;
                    arr_17 [i_0] [i_0] [i_4 - 1] = (((((arr_7 [i_0]) == 5102830132532307500))) << var_6);
                    var_25 -= ((-26670 ? -16392522562016660331 : -233630426));
                }
            }
        }
    }
    var_26 *= var_15;
    #pragma endscop
}
