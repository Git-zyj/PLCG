/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_18 = (((arr_7 [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 2]) ? var_7 : var_1));
                        var_19 = ((((var_7 ? (arr_8 [i_0] [i_1]) : var_3)) % (((var_0 ? 58 : var_10)))));
                        var_20 |= (((arr_4 [i_1] [i_1 - 1] [i_1 + 1]) ? 52060 : var_12));
                        var_21 = ((var_5 % (arr_5 [i_0] [i_1 + 2] [i_1 + 2] [i_3])));
                        var_22 = ((4 ? (var_0 % var_6) : (arr_6 [i_1 + 1] [i_1] [i_1 + 1])));
                    }
                }
            }
            var_23 = (arr_1 [i_0]);
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_24 = (min(var_24, ((((((var_10 ? 4294967269 : var_9))) ? (1835207713 + -2147483647) : ((var_8 ? 52060 : var_5)))))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_25 = ((6405 ? var_1 : 52058));
                        var_26 = (var_9 ? (arr_0 [i_5 + 3] [i_5 + 1]) : ((var_4 ? (arr_6 [i_0] [i_4] [i_5 + 4]) : var_15)));
                    }
                }
            }
            var_27 = (((var_12 ? var_4 : 4294967268)));
            var_28 = (min(var_28, (arr_5 [i_0] [i_4] [i_4] [i_4])));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_29 = (var_9 + var_6);
            var_30 = ((var_1 ? var_0 : var_14));
            var_31 |= -2134208877;
        }
        var_32 = ((-(arr_11 [i_0] [i_0])));
        var_33 = (!-2147483625);
    }
    var_34 = (max(var_34, (((((min(var_12, (((var_6 ? var_8 : var_12)))))) ? (max(1079710621, 139)) : -65535)))));
    var_35 = ((var_4 ? var_12 : ((var_4 ? ((var_2 ? var_2 : var_7)) : (!var_2)))));
    var_36 = ((~((((4294967288 ? var_10 : var_4))))));
    #pragma endscop
}
