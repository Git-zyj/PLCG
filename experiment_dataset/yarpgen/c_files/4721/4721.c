/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (max(64601, 65528));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] = 1;
        var_16 = (min(var_16, -var_6));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_17 = -1390838593310826905;
                            var_18 = ((max(-1390838593310826905, var_13)));
                            var_19 ^= ((!(((((min(1843158689, -62))) ? -24 : (max(-146671204, var_14)))))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_16 [i_5] [i_3] [7] [i_3] [i_0] = var_12;
                            var_20 = ((!((max(-1, 65)))));
                            arr_17 [i_5] [i_3] [i_3] [i_2 + 1] [i_3] [i_0] = (min(72, -25695));
                        }
                        var_21 = max(2214253555, 5212897483444355325);
                    }
                }
            }
        }
        arr_18 [i_0] = (!-2147483647);
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] &= (min(var_5, 30299));
        var_22 = -8766556668731899504;
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_23 = (max((((min(-4716986213963590324, -6162133878407558376)) / -1713446752)), 614677500533893777));
        var_24 *= -1721633515528179452;
    }
    var_25 = var_1;
    #pragma endscop
}
