/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_15 = ((!((!((max(var_12, 22)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [6] [15] [6] [i_0] [i_0] = (i_0 % 2 == 0) ? ((min(((var_4 >> (((arr_4 [i_2 - 1] [i_0]) - 1890572601489108143)))), ((-(((-127 - 1) * -18164))))))) : ((min(((var_4 >> (((((arr_4 [i_2 - 1] [i_0]) - 1890572601489108143)) + 3691305983991835890)))), ((-(((-127 - 1) * -18164)))))));
                                var_16 = (min(var_16, 75));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        arr_22 [i_1] [i_0] [i_6] = (-((var_2 ? -1365471471 : var_13)));
                        var_17 = ((var_5 ? var_1 : -59));
                        var_18 = ((((6884015252829688465 ? (arr_18 [i_0] [11] [15]) : (arr_17 [i_0] [7] [i_0]))) * (arr_15 [i_5 - 1] [i_5] [i_5 + 2] [i_5] [i_5 - 1])));
                    }
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_5] [i_0] = ((-(arr_24 [i_7 - 2] [i_5] [2] [i_5 - 1])));
                        var_19 = ((var_13 ? (!var_14) : (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) % (-2147483647 - 1)))));
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_20 = (((162 >= -111) ? (arr_7 [i_5 - 1] [i_5 + 2] [i_5]) : -103));
                        var_21 = (min(var_21, var_11));
                        var_22 = ((var_0 == (arr_8 [i_0] [i_0] [i_0])));
                    }
                    var_23 = (!2147483647);
                    var_24 = ((-26 ? -1105567658 : 12288));
                    arr_28 [i_1] [i_0] [i_0] [10] = (var_3 & (arr_6 [i_5 + 3] [i_5 + 3] [i_5 + 2]));
                }
                var_25 = (max(var_25, 15154));
                var_26 = (-(min((!4194303), -var_12)));
                arr_29 [i_0] [1] [i_0] = -var_6;
            }
        }
    }
    var_27 = (min(var_27, ((-((~(var_14 / -4392099308027969333)))))));
    #pragma endscop
}
