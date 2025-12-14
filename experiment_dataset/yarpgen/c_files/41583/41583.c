/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((6680648908520276210 ? -6680648908520276210 : -17806)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = -472123838880734936;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] = var_8;
                            arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] = (max(((((arr_1 [i_0]) && 4294967286))), ((var_9 ? (arr_4 [i_3 + 2] [i_2 + 2]) : (arr_9 [i_0] [i_1] [i_2 - 1] [i_0] [i_2 + 2] [i_0])))));
                        }
                    }
                }
                var_12 ^= arr_6 [i_0] [i_0] [i_0];

                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    var_13 = (min(var_13, ((((((1169017700 ? 6680648908520276201 : 11))) ? (min(461, 4294967286)) : ((var_6 ? (arr_7 [i_4 + 4] [i_4 - 2] [i_4]) : var_3)))))));
                    var_14 = (min(98, -6680648908520276215));

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_5] = 45;
                        arr_18 [i_0] [i_0] [i_0] [i_5] [i_1] = ((((((((1 ? var_7 : 4294967273))) ? var_3 : (arr_12 [i_4 + 1] [i_4 - 3] [i_0] [i_0])))) ? 124 : 21062));
                        var_15 -= (((4294967293 && (!14))) ? (max((((3897 ? 1 : 1))), 1512420760)) : 93);
                    }
                    arr_19 [i_0] = (!1);
                }
                var_16 = ((var_3 ? var_10 : 0));
            }
        }
    }
    #pragma endscop
}
