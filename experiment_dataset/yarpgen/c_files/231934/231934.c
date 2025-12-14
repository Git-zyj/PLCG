/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = 626183446;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = (min(-31, -3668783850));
            arr_7 [i_0] [i_0] [i_0] = var_11;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_15 = (!626183446);

            /* vectorizable */
            for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
            {
                var_16 = var_5;
                arr_14 [i_2] = var_5;
                var_17 = ((3668783850 ? 3204578015478398026 : var_11));
                arr_15 [i_0] [15] [i_0] = (11834 ? 8 : 543889554);
                arr_16 [i_0] [i_0] [i_0] = 1;
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_18 = (((var_9 ? 0 : var_6)));

                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        var_19 = 1;
                        var_20 = 626183445;
                        arr_24 [i_4] [i_4] [i_0] [3] [10] [i_4] [i_0] = ((626183469 ? (~-1918392803) : 1));
                    }
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_21 = var_9;
                    var_22 = ((((1 ? 1 : var_0))) ? (-1 & 1) : 3595292471663221974);
                    var_23 = var_4;
                    arr_29 [i_0] [i_4] [i_0] = (var_0 ? 37802 : 1);
                }
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    var_24 = -21509;
                    var_25 = 30882;
                    var_26 = -1227880713;
                }
                var_27 = ((var_3 ? var_5 : (~var_11)));
                var_28 = ((28336 ? var_7 : 9075522836165676667));
                arr_34 [i_4] [i_4] [i_4] = ((((12884970989773032756 ? var_4 : 34293)) >= 0));
                var_29 = ((((((var_5 + 2147483647) << var_10))) ? 12503 : 2097151));
            }
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
        {
            arr_37 [i_0] [i_9] = ((((((var_8 ? 1 : 0)))) ? ((min(((1 ? 6395010571257608740 : 1)), 23))) : (max(1, 11331617826395557874))));
            arr_38 [i_9] [i_9] = (((((1 ? 0 : (max(3288744194, 1))))) ? 39657 : 28686));
        }
        var_30 = var_1;
    }
    var_31 = var_7;
    var_32 = ((((min((0 | var_11), (~var_8)))) ? ((~(min(9371221237543874970, 31225)))) : (((max(18446744073709551608, 3668783849))))));
    #pragma endscop
}
