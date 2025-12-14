/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (max((max(((((arr_1 [1]) ? 1131927123 : 1131927120))), (min(1, (arr_0 [i_0] [i_0]))))), (arr_0 [i_0] [i_0])));

        for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_18 = ((((arr_2 [i_1 - 1] [i_1] [i_1 - 2]) != 25975)));
            arr_4 [14] [i_1] [3] = (~2698398392);
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [14] [i_2] = (min((((min((arr_5 [1] [1]), 25964)))), (((arr_2 [i_2 - 2] [i_0] [i_2 - 2]) ? (min((arr_1 [i_0]), 1131927118)) : ((-2268376821135230762 + (arr_2 [i_0] [i_0] [i_0])))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_19 = ((((min(3400162040, ((-32767 - (arr_5 [i_2] [i_2 + 2])))))) ? (max((arr_0 [i_2 - 2] [i_0]), (arr_12 [i_2] [i_2 + 2] [i_2] [i_2 - 2] [i_2 - 2] [i_2]))) : (32512 < 2796185017)));
                            var_20 = (((arr_1 [i_2 - 2]) && ((max((arr_1 [i_2 - 1]), (arr_1 [i_2 + 2]))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_21 = 32541;
            var_22 += ((4738753435305838101 ? -1 : (arr_10 [i_0] [i_6] [i_0] [i_0])));
            var_23 = 3334;
            arr_19 [i_6] [i_6] = ((((1303562217 ? (arr_10 [i_0] [i_0] [i_0] [12]) : -4738753435305838090)) / (197653332240908535 != -15896)));
        }
    }
    for (int i_7 = 4; i_7 < 18;i_7 += 1)
    {
        arr_22 [i_7] = (((((arr_21 [i_7] [i_7 - 3]) >> (((arr_21 [i_7] [i_7 - 1]) - 11738447784285564610))))) ? (((~(((20513 <= (arr_20 [i_7]))))))) : (max((arr_20 [17]), (1009574190 <= 73))));
        arr_23 [16] = 15895;
    }
    var_24 = var_16;
    var_25 = var_5;
    var_26 *= min(var_0, var_16);
    var_27 = (((((~((min(42350, 23185)))))) ? (((var_5 ? var_6 : (((min(var_14, 26026))))))) : var_11));
    #pragma endscop
}
