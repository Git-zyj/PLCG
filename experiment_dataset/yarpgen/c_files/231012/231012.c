/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((~(max(var_2, var_2)))), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_11 = ((((+(((var_0 + 9223372036854775807) >> (-8968723000451502097 + 8968723000451502139)))))) ? ((~(arr_6 [i_2 - 1] [i_1 - 2] [i_1] [i_1 - 4]))) : (var_1 - 8968723000451502107));
                    arr_8 [i_0] [13] [i_2] = min(((var_1 ? (arr_7 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 3]) : var_0)), var_7);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_12 = var_9;
                        arr_12 [17] [i_0] [17] [i_3] = (arr_4 [i_2 + 2] [i_2 - 1] [i_2 - 1]);
                        arr_13 [i_0] [i_0] [i_0] [i_3] [i_1] = (~var_2);
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            var_13 = (arr_7 [i_0] [i_0] [i_0] [i_1 + 3]);
                            var_14 = (min(var_14, var_5));
                            var_15 = (arr_19 [i_0]);
                            var_16 = ((var_2 ? var_0 : (arr_10 [i_0] [i_1 - 1] [i_2 - 2] [i_5 + 1] [7] [i_2])));
                        }
                        var_17 = (434550722196301564 ^ -54);
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_18 = var_6;
                            var_19 &= (~(max(var_2, (arr_23 [6] [i_1 + 2] [i_1] [i_1 - 4] [i_2 - 1]))));
                            var_20 = var_1;
                            arr_24 [i_0] [i_1] [i_2] [i_0] [0] = (max(((max((!8968723000451502116), (arr_7 [i_0] [i_2 - 2] [i_2] [i_6])))), ((248 ? (max(var_4, var_0)) : (arr_16 [i_0] [i_1 + 1] [i_2] [i_0] [i_7])))));
                            var_21 = (((var_7 / -9223372036854775807) && ((min(-50, (arr_19 [i_0]))))));
                        }
                        arr_25 [i_0] [i_1 - 3] [i_6] = ((var_1 << (((arr_4 [i_0] [i_0] [i_0]) - 5927820426135757505))));
                        var_22 = ((~(arr_2 [i_0])));
                        var_23 = var_1;
                        var_24 = 16;
                    }
                }
                arr_26 [i_0] = (!var_7);
                arr_27 [i_0] [i_0] [i_1] = (~54);
            }
        }
    }
    #pragma endscop
}
