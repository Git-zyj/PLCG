/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_20 = (((~var_9) ? ((((var_9 >> (((arr_0 [i_0]) - 719192459)))) >> (((~var_18) + 1177)))) : 0));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = (((((~(-2147483647 - 1)))) ? 18 : (arr_8 [i_0])));
                    }
                }
            }
        }
        var_21 = (max(var_21, ((((((arr_7 [i_0] [i_0] [i_0]) | (arr_7 [i_0] [i_0] [i_0]))) ^ ((65533 ? 65535 : 1)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_21 [i_5] = ((((min((arr_4 [i_0] [i_4] [i_5]), (var_16 - var_12)))) ? 3 : (((arr_6 [i_0] [i_0] [i_0]) ? var_6 : (~65498)))));
                    var_22 = ((-(-var_9 - 1)));
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        var_23 *= ((+(max((((arr_6 [i_6 - 1] [i_6 + 1] [i_6 - 1]) << 23)), (((arr_7 [i_6] [5] [i_6 - 1]) ? var_0 : var_7))))));
        var_24 = ((((-2147483647 - 1) / ((1 ? var_15 : 18)))));
        var_25 = ((-21943 ? ((((min(131099992, 0))) ? ((min((arr_15 [7] [i_6]), (arr_10 [i_6 + 1] [8] [1] [i_6] [0])))) : ((4193280 ? 1 : 65533)))) : -13120));
    }
    var_26 = -65;
    var_27 = var_1;
    #pragma endscop
}
