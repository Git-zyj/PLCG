/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(255, (var_14 > 255)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = -628982001;
        var_16 = (min(var_16, 9223372036854775807));
        var_17 = ((1 >= (arr_1 [i_0])));
        var_18 = ((-(var_8 * 31)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_19 *= 31;
                        arr_13 [i_1] [i_1] [i_2] [i_3] [7] |= var_3;
                        arr_14 [i_1] [i_2] [i_3] [1] = (!2739682875);
                    }
                }
            }
            var_20 = (max(var_20, 54539));
            var_21 = ((~(arr_11 [i_2 + 1] [i_2 + 3] [i_2 - 2] [i_2 + 3] [i_2 - 1])));
            var_22 = var_14;
        }
        for (int i_5 = 4; i_5 < 9;i_5 += 1)
        {
            var_23 = (min(var_23, (arr_9 [i_1] [i_5] [i_5])));
            arr_17 [i_5] [i_5] [i_1] &= (arr_3 [i_1] [i_5]);
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                {
                    arr_23 [i_1] [i_6] [2] = 18446744073709551615;
                    var_24 = (min(var_24, ((((((18 ? 255 : 3932915635861246596))) ? ((-(((arr_7 [i_7] [i_1]) ? 3161296403022118570 : (arr_11 [i_1] [1] [i_7 - 1] [6] [i_1]))))) : 0)))));
                    var_25 += (max(((((arr_4 [i_1]) % 65535))), (min((arr_15 [i_1] [i_7]), (arr_19 [i_1] [i_6] [i_7 + 1])))));
                }
            }
        }
        var_26 = (arr_20 [i_1]);
    }
    var_27 = (1 || -100);
    #pragma endscop
}
