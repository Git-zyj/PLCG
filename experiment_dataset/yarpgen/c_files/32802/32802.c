/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_4, ((~(~-26293)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = 2120933068;
        arr_3 [8] = ((50217 > ((-25649 ? -32763 : (-2147483647 - 1)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_18 |= max(-32756, 1);

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_13 [i_3] [1] [i_2] [i_1] = (((var_0 + var_2) ? 124 : ((((max(var_12, -30))) ? (((var_12 ? 40078 : 32761))) : var_2))));
                    var_19 = var_11;
                    var_20 ^= (((max(-1882295520, -32763)) / var_0));
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_21 = 127;
                                var_22 -= (max(((min(32486, ((14 ? -65 : 25458))))), (max(4294967295, -1927889604))));
                                var_23 = ((2147483647 ? -32508 : 32459));
                                arr_21 [8] [3] [5] [8] [8] [i_1] [i_1] = 1532431021;
                                arr_22 [i_2] [i_2] = -48;
                            }
                        }
                    }
                }
                var_24 = (max((((((((-2147483647 - 1) ? 0 : 1))) || var_8))), (max(194, 180))));
            }
        }
    }
    var_25 = 91;
    var_26 = (max((min((min(0, -17)), 180)), (max(((max(var_10, var_1))), (max(0, 3701398054))))));
    #pragma endscop
}
