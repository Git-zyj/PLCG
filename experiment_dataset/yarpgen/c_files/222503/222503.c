/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222503
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
                var_20 = (((((0 ? 6363630640787362764 : (arr_6 [i_1] [i_1])))) ? (((((40 ? 4249136444 : 0))) ? (arr_0 [i_0]) : (((-80 + 2147483647) >> (51657007983719385 - 51657007983719360))))) : ((875880471 ? -22908987 : -2))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_10 [19] = 0;

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_21 = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) < (((((var_18 ? 1023 : (arr_2 [i_0] [i_0])))) ? ((~(arr_1 [i_0]))) : 1))));
                        var_22 = ((!((((var_8 - -1968813529) + (var_1 + var_7))))));
                    }
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    var_23 = (((arr_13 [i_4] [i_4 + 1] [16] [i_4 + 2]) + (-118 && 14855)));
                    var_24 = 8;
                    var_25 = ((1 ? 1 : 1058794308));
                    var_26 = (arr_0 [4]);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            var_27 = (65524 || 255);
            var_28 = (1801387323 - 10906871324193215053);
        }
        var_29 = (var_19 ? (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_18 [i_5] [i_5]));
    }
    #pragma endscop
}
