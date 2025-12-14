/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = (((var_19 ^ 0) ^ (((~(~var_10))))));
            var_20 += ((!((((16 && (arr_2 [i_1])))))));
        }
        var_21 = (max(var_21, ((((arr_2 [4]) && (((210 ? ((41776 ? (arr_2 [i_0]) : 4294967291)) : (arr_2 [i_0])))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            {
                var_22 = (((arr_4 [i_2] [i_2] [i_2]) ? ((min((arr_0 [i_3 + 2]), ((0 ? var_1 : (arr_4 [i_2] [i_2] [i_3])))))) : (((arr_5 [i_2] [6]) | ((((arr_9 [i_2] [i_3 - 1]) ? (arr_9 [i_3] [i_3 - 1]) : (arr_13 [8] [i_3] [i_2]))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_23 = ((!((((arr_9 [i_5 - 2] [i_5]) << (((arr_9 [i_5 - 1] [i_5 - 1]) - 619052737)))))));
                            var_24 -= ((-(arr_9 [i_2] [i_2])));
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(-84, var_10));
    #pragma endscop
}
