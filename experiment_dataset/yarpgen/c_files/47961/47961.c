/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    var_14 = (max(var_14, ((min(((-2332349436651174821 / (min(-2332349436651174820, 28926)))), 60)))));
                    var_15 = ((!((max(1802602596, ((var_10 ? 36607 : var_12)))))));
                    arr_7 [i_0] = ((!((min(28926, (max(4294967289, 139611588448485376)))))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_16 = (~1802602599);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_17 = (-2332349436651174829 < -2332349436651174815);
                                arr_17 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_3] [i_0] = var_10;
                                var_18 = var_12;
                                arr_18 [i_3] [17] [i_4 - 1] [i_3] [i_0] [i_0] [i_3] = ((((-139611588448485376 ? -139611588448485408 : 4294967276))) && 675212432);
                            }
                        }
                    }
                    var_19 = (max(var_19, -139611588448485376));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_20 = (max(var_20, var_13));
                        var_21 = ((403764244 ? 2147483647 : var_6));
                        arr_22 [i_3] = ((2492364705 ? 1048320 : var_11));
                    }
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        var_22 = ((-((0 ? 18446744073709551611 : 28933))));
                        arr_26 [i_0 + 2] [22] [i_3] [i_3] [i_3] [i_7] = 60963;
                    }
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        arr_30 [i_0] [i_3] [i_3] [i_0] = (var_1 != 4142395598);
                        var_23 = (2492364700 * var_2);
                        arr_31 [i_0] [i_1] [i_1] [14] [i_3] [i_8] = -var_10;
                    }
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_24 = 1968749083;
                                var_25 = (min(var_25, (((23732 ? 2147483647 : var_6)))));
                                var_26 = ((139611588448485382 ? ((var_0 >> (3619754856 - 3619754856))) : 204));
                            }
                        }
                    }
                    arr_38 [i_9] [i_1] [i_9] = -0;
                }
                arr_39 [i_0] [i_0] [i_0] = 4527;
            }
        }
    }
    var_27 = ((var_11 ? (max(((768 ? 21652 : 3920319303)), (2332349436651174796 && var_9))) : (((min((min(-16876, var_7)), (min(0, -11691))))))));
    #pragma endscop
}
