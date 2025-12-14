/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        var_16 = var_7;
                        var_17 = 16;
                    }
                }
            }
            var_18 = (((arr_1 [i_0 - 1]) && (arr_1 [i_0 - 2])));
            var_19 = (((arr_7 [i_1] [i_0 - 1] [i_0] [i_0 - 2]) || (arr_7 [10] [i_0 - 1] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    {
                        var_20 = 32767;
                        var_21 = (((((arr_11 [i_0]) ? 2608457195 : (arr_0 [i_0]))) >> (((((arr_4 [i_0] [i_1] [i_4]) ? (arr_4 [i_0 - 3] [i_1 + 2] [i_4]) : var_13)) - 42440))));
                        var_22 = ((((arr_6 [i_5 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]) | (arr_12 [i_4]))));
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_23 = (!9214364837600034816);
                            arr_24 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 2] = (((126 ? 1686510119 : 125)));
                            var_24 = 2608457220;
                            arr_25 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = ((796724717217876922 || ((65535 || (arr_10 [1] [i_6] [i_6] [i_6])))));
                        }
                    }
                }
            }
            var_25 = (~(arr_13 [i_0] [i_0 + 1]));
            var_26 = (min(var_26, var_7));
        }
        var_27 -= (((arr_15 [i_0 - 2] [i_0 - 3] [i_0 - 1]) ? var_10 : (!2608457220)));
    }
    var_28 = 44475;
    #pragma endscop
}
