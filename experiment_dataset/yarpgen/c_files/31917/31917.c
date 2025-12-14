/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_19 = (((((~(arr_2 [i_1])))) ? ((((min((arr_0 [i_0]), (arr_4 [i_2] [i_1] [i_0])))) ? (((arr_0 [i_1]) - 2072099839)) : 1)) : -1));
                var_20 = var_7;
                var_21 &= (!0);
            }
            var_22 = (min((((arr_5 [i_0] [i_1]) << (-32166 + 32226))), (arr_2 [i_0])));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    {
                        var_23 = (min(var_23, (arr_9 [i_4])));
                        var_24 = (arr_16 [i_0] [i_3] [i_0] [i_4] [i_5 - 3]);

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_25 = (arr_7 [i_0] [i_0] [i_0]);
                            arr_19 [4] [4] [4] [i_5 - 1] [i_3] &= var_3;
                        }
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            var_26 &= (((((var_2 ? (arr_16 [i_7 + 1] [i_7] [i_5 + 2] [i_5 + 2] [i_5 + 2]) : ((~(arr_2 [i_7])))))) ? (max((-32166 & var_8), (min((arr_0 [i_3]), (arr_7 [i_0] [i_0] [i_0]))))) : ((max((arr_21 [i_0] [7] [i_4] [i_4] [i_7]), (arr_1 [i_3]))))));
                            arr_22 [i_4] = ((-(arr_7 [i_0] [i_3] [13])));
                            var_27 = (-9223372036854775807 - 1);
                        }
                        var_28 = (7681702959649184002 / (arr_10 [i_0] [i_3] [i_4]));
                    }
                }
            }
            var_29 = ((-(arr_11 [i_0] [i_3])));
        }
        var_30 += ((~(arr_7 [i_0] [i_0] [i_0])));
        var_31 &= ((~(max(((1 ? var_9 : 17865)), (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    var_32 ^= var_4;
    #pragma endscop
}
