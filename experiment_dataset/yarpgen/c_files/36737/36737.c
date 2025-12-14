/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~((var_0 ? (~var_4) : var_1)));
    var_12 = (max(var_12, var_3));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_13 = (arr_5 [i_0] [i_0] [i_1]);
            var_14 = ((var_4 || var_6) | var_7);
            var_15 = ((((var_4 ? var_8 : var_5)) & (~var_8)));
            var_16 = (min(var_16, var_10));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_17 = (min(var_17, (((~((max(var_8, var_5))))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        {
                            var_18 = ((-((~(((arr_4 [i_4] [i_4]) >> (var_0 - 39585)))))));
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3] [i_5] = ((((min(((var_3 ? (arr_16 [i_0] [i_2] [i_3] [i_3] [i_4] [i_5]) : 8394012391846879487)), (arr_6 [i_5 - 1] [i_2])))) ? (min(var_9, var_1)) : (arr_1 [i_5 - 1])));
                            arr_20 [i_5 + 1] [i_3] [i_5 + 2] [i_5] [i_5 + 3] = (max((((((-(arr_16 [i_5 + 2] [i_4] [i_3] [i_2] [i_2] [i_0])))) ? (arr_14 [i_0] [i_3] [i_3] [i_4] [i_5 + 3]) : ((max(52155, var_10))))), 4611686018427387903));
                        }
                    }
                }
            }
            var_19 = -39;
        }
        var_20 = -41;
    }
    var_21 = (var_4 / var_2);
    #pragma endscop
}
