/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = ((((min(var_0, 1))) ? 184 : var_16));
                var_19 = (min(var_19, ((max(((3773412035304603430 >> ((33550336 ? var_0 : var_6)))), (((max(var_12, var_16)))))))));
                var_20 = (((-(1 && 1))));
                arr_6 [i_0] [i_0] = (max(((((74 ? 80 : 18446744073676001249)) + var_4)), ((max(((min(37410, var_12))), (var_2 * var_6))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_21 = ((((((~var_2) * ((-(arr_9 [i_2])))))) ? (((5909 - (arr_10 [i_2] [i_3] [i_4])))) : (max((((1 == (arr_8 [i_2] [6])))), (arr_7 [1])))));
                    arr_13 [1] [i_3] [i_4] = (min(43025, -119));
                    var_22 = (max(var_22, ((min((arr_7 [i_2]), (arr_9 [i_2]))))));
                    var_23 += 1;
                    var_24 = (!2680486572530556377);
                }
            }
        }
        arr_14 [i_2] [i_2] = (((((28125 ? 255 : 1))) ? ((min(var_13, ((max(6599, (arr_10 [i_2] [i_2] [i_2]))))))) : ((var_16 ? 9287045532808764966 : (((((arr_9 [i_2]) != var_16))))))));
        arr_15 [i_2] = (arr_8 [i_2] [i_2]);
        var_25 = (max(-0, ((-(arr_11 [i_2] [i_2] [i_2] [i_2])))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_26 = (min(var_26, ((min((((!(arr_17 [i_5])))), (((((53889 ? (arr_16 [i_5]) : 0))) ? ((var_3 + (arr_16 [i_5]))) : ((var_9 * (arr_16 [i_5]))))))))));
        arr_18 [i_5] = (((((max(var_10, var_8))) <= ((65535 ? -32764 : 50228)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_27 = (max(var_27, var_9));
        var_28 = 67;
    }
    var_29 = var_1;
    #pragma endscop
}
