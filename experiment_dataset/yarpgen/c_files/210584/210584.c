/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_3 - 1] [i_3 - 1] [15] [i_0] = ((!(arr_4 [i_2 - 1] [i_0] [i_2 - 1])));
                        var_17 = 151;
                    }
                }
            }
            var_18 = (max(var_18, var_5));

            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                var_19 ^= ((-(arr_8 [12] [12] [i_0])));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] [i_1 + 1] [i_0] [i_0] [i_5] [i_0] = (~(~var_12));
                            var_20 = (arr_4 [i_1] [i_0] [i_0]);
                        }
                    }
                }
                arr_20 [i_0] [i_1] = ((!((((arr_6 [i_0] [i_0]) ? 163 : var_3)))));
                var_21 = (min(var_21, 123));
            }
        }
        arr_21 [i_0] = var_8;
        arr_22 [i_0] = var_2;
    }
    for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_22 = (max(((((arr_13 [i_7] [8] [16] [i_7 + 2]) == var_2))), ((-(arr_13 [i_7] [12] [12] [i_7])))));
        var_23 = 4294967295;
        arr_25 [i_7] = var_1;
    }
    var_24 = var_13;
    var_25 = (max(var_8, (((3950545696 ? -1784740271 : 1361031970)))));
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            {
                var_26 = (arr_9 [i_8] [i_8] [i_8 + 1] [i_8 + 2] [i_9 - 1] [i_9]);
                var_27 = (max((max((~var_15), (max(var_11, 16679904597467843025)))), ((max(var_3, (min(var_4, (arr_4 [i_9 - 1] [i_8] [i_8]))))))));
            }
        }
    }
    #pragma endscop
}
