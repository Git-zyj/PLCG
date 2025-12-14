/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_9;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((!(2147483647 ^ 127)))) != 2147483644));
        arr_3 [i_0] = ((((((max(25573, (arr_1 [i_0] [i_0])))) == (arr_0 [i_0]))) ? ((((((arr_1 [i_0] [i_0]) || 624319169)) ? ((~(arr_1 [i_0] [i_0]))) : (~6)))) : ((1619757665 ? -8757417144895390969 : 23115))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_15 = -2556191832955618762;
        var_16 = (3292788313 & -30285);

        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] &= (arr_13 [i_2 - 2] [i_2 + 3] [i_2 + 2] [i_2 - 1] [i_2 + 2]);
                        var_17 = (min(var_17, (arr_11 [i_2 + 3] [i_2 + 2] [i_2 - 2])));
                        var_18 &= 4294967295;
                    }
                }
            }
            arr_17 [i_1] [i_1] [i_2] = ((20215 && (arr_4 [i_1])));
            var_19 = ((4270524075568223227 != (((4270524075568223238 ? 2147483647 : 1)))));
            var_20 = (1055500640 || -21);
            var_21 = ((var_13 * 0) & (~23981));
        }
        arr_18 [i_1] = (-2147483647 - 1);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_27 [i_1] [i_5] [i_6] [i_5] = ((((2035700380365222296 ? -60 : 0)) / ((1002178982 ? 2147483644 : -27151))));
                    var_22 = (((arr_7 [i_1]) - (((arr_13 [i_1] [i_5] [i_6] [i_1] [i_6]) ? (arr_5 [i_1]) : (arr_7 [i_1])))));
                    var_23 = (-127 - 1);

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_24 = -130388962;
                        var_25 ^= 1;
                        arr_32 [i_6] [i_6] [i_6] [i_7] = ((1 ? 0 : (421826354 == 50)));
                    }
                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        var_26 = ((109123739388165038 ? 9223372036854775807 : (arr_34 [i_8 + 1])));
                        var_27 = (min(var_27, 0));
                    }
                    arr_35 [i_1] [i_6] [i_6] [i_6] = (arr_34 [i_6]);
                }
            }
        }
    }
    #pragma endscop
}
