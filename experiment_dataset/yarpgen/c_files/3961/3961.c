/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 = ((!(((((max(2397077237310609212, (arr_3 [0] [i_1] [i_0])))) ? -18176 : (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_6)))))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_18 = ((min(5724701413363556755, -18)));
                var_19 = ((~(arr_4 [i_0] [i_0] [9])));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_9 [i_0] [i_0] = (((arr_8 [i_0] [i_0] [16]) >> (65535 - 65522)));
                var_20 -= ((31 ? ((107430749 ? 4173191436 : 974500741)) : (arr_7 [i_1] [i_3])));
                var_21 = ((((((arr_4 [i_0] [i_0] [i_3]) ? (arr_4 [i_0] [i_1] [i_3]) : -19))) ? ((((arr_2 [i_0] [i_1]) >> (arr_5 [i_3])))) : var_13));
                var_22 = (arr_4 [i_3] [i_0] [i_0]);
                var_23 = (((arr_5 [i_0]) ? (arr_2 [i_0] [i_1]) : (arr_5 [i_3])));
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_24 = 3320466579;
                arr_12 [i_4] [i_4] = (((max(54, (arr_11 [i_0] [i_0] [i_1] [i_0]))) < ((((((var_5 + 9223372036854775807) << (((arr_11 [i_4] [18] [i_0] [i_0]) - 5728895476562542859))))) ? (!var_5) : (arr_3 [i_0] [i_0] [i_0])))));
            }
            arr_13 [i_1] [i_0] [i_0] = (min((max(-8204, (arr_4 [i_0] [i_0] [i_1]))), (min((arr_4 [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_0] [i_1])))));

            /* vectorizable */
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                arr_17 [i_0] [i_1] [i_1] [i_5] = (arr_7 [i_0] [i_0]);
                var_25 = (16128 / 21);
            }
            var_26 = (min(0, 21));
        }
        arr_18 [i_0] = (-2147483647 - 1);
        var_27 = 7937052058139717861;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {
                arr_23 [i_6] [i_6] = (max(((((((arr_20 [i_7] [8]) ? -32 : (arr_7 [i_6] [i_6])))) + 8471597921869551529)), ((((min(4173191446, 76))) - (arr_16 [i_7] [i_7] [i_7])))));
                arr_24 [i_6] [i_7] |= 12926522740357431224;
            }
        }
    }
    #pragma endscop
}
