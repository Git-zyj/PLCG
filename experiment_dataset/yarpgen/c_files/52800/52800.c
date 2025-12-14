/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_13 >> (var_0 - 172)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [1] [i_0] [i_2] = (arr_6 [i_2] [i_2]);
                        var_18 += 1;
                        var_19 = (((((arr_9 [i_0] [i_2] [i_2] [i_2]) ^ var_9))) ? (((((min(45425, -2305843009213693952))) ? (arr_2 [i_1]) : (arr_0 [i_0])))) : -2305843009213693952);
                        var_20 = (arr_6 [i_2] [i_2]);
                    }
                }
            }
            var_21 = -2305843009213693952;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    {
                        var_22 = -2305843009213693943;
                        var_23 += 64;
                    }
                }
            }
            var_24 = var_12;
        }
        var_25 &= ((32767 ? (arr_1 [i_0]) : -2305843009213693929));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_26 = (max(var_26, var_1));
                        arr_33 [i_8] [14] [13] [i_8] = (((((arr_10 [6] [i_0] [6] [1]) ? (arr_18 [i_0] [i_0] [i_6] [i_0] [i_0] [i_7]) : var_4))) / (min(((1 ? -2305843009213693943 : 32767)), (arr_2 [i_0]))));
                        var_27 = ((var_6 ? 2305843009213693951 : (arr_20 [i_0] [4])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
