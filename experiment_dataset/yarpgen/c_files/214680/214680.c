/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((-1 ? (min(-1, ((var_0 ? var_10 : var_2)))) : (max((((var_5 >> (var_12 + 7378)))), 14522586791873143536))));
    var_14 += (min(((3924157281836408080 ? 23 : -26)), var_10));

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_15 = (arr_2 [i_0] [i_0]);
        arr_3 [i_0] = (max((arr_0 [i_0] [i_0]), (max(26, 3415587000))));
        var_16 = (1 ? (min(((((arr_1 [i_0 - 3] [i_0 - 1]) ? (arr_2 [i_0] [i_0]) : (arr_1 [3] [1])))), 4595395555611461019)) : -3332303261728303187);

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_17 = (min(var_12, ((~(((arr_4 [i_0] [i_0]) | (arr_0 [i_0] [i_0])))))));
            var_18 = (arr_6 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_19 = (min(var_19, ((max((arr_0 [i_0] [i_0]), (max(15866, (((arr_8 [i_0]) ? (arr_8 [i_0]) : 2816653836382760658)))))))));
            var_20 = (((((3924157281836408083 ? (arr_2 [1] [i_2]) : 23))) ? 3924157281836408089 : (((max(var_7, 14522586791873143545)) ^ (min(-1, 3924157281836408049))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_12 [12] [i_3] [i_3] = 61237;
            var_21 = (((4027674922364698259 * (arr_0 [i_3] [i_3]))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_18 [i_0] [i_0 + 1] [i_0] [i_0] [i_3] [i_0] = ((arr_6 [i_0] [i_0]) >> (((((arr_2 [i_0 + 3] [i_0 + 3]) ^ (arr_8 [i_0]))) + 6356715956993840641)));
                        arr_19 [7] [i_3] [i_3] [1] = (arr_7 [13] [13] [13]);
                        var_22 = 7943412999187329683;

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [4] [14] [i_0] [i_0] |= (~var_3);
                            var_23 = (min(var_23, (arr_14 [i_0] [2] [i_0] [i_0])));
                            var_24 = 1122601079;
                            var_25 = arr_13 [i_0] [i_0] [i_3];
                            var_26 = (min(var_26, ((((arr_5 [i_0 - 3] [i_0 - 1] [i_0]) < (arr_20 [i_0] [i_0] [1] [i_0 + 1] [i_0] [i_0]))))));
                        }
                    }
                }
            }
        }
        var_27 &= (min(9129632979733913000, ((((max((arr_14 [i_0] [10] [2] [i_0]), (arr_20 [i_0] [i_0] [i_0] [1] [i_0] [i_0 + 3]))) == 14522586791873143555)))));
    }
    for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_28 ^= 54231;
            var_29 = 65535;
        }
        var_30 = ((max((min(17550626216739506496, -7943412999187329681)), (max(3924157281836408097, var_3)))));
    }
    #pragma endscop
}
