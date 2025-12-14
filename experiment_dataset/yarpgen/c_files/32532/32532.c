/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_0] = (~var_15);

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                arr_7 [i_0] [i_1] [i_2 - 1] [i_1 - 1] = (var_3 > var_17);
                var_20 ^= (arr_0 [i_0 - 1] [i_0 - 1]);
                var_21 = ((~(max((~var_19), -2397459967119826459))));
                arr_8 [i_0] [i_1] [0] [i_1] = ((-1491983175 + (((arr_6 [i_2]) ? var_18 : var_2))));
            }
            arr_9 [i_0 + 2] [i_1] = ((787561321 ? ((min(1707783626, (arr_2 [i_0] [i_0])))) : (arr_5 [i_0])));
        }
        arr_10 [i_0] [i_0 - 1] = ((((((arr_2 [i_0 - 1] [i_0 + 1]) ? ((var_6 / (arr_2 [i_0 - 1] [i_0]))) : (min(-1707783627, 1946611153))))) ? ((((-1946611154 || (var_11 ^ 583230421))))) : (arr_1 [i_0])));
        arr_11 [i_0] = var_7;
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            {
                var_22 = (max(((((arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? -6545960076797657525 : 18446744073709551615))), 16875));
                arr_17 [i_3 - 1] [i_3 - 1] [i_4 - 2] |= ((~(((((var_5 ? 38 : var_6))) ? 1 : (arr_16 [i_3])))));
                arr_18 [i_3 - 1] = ((~(~97)));
                var_23 = (arr_14 [0] [i_4]);
                arr_19 [i_3 - 1] [i_4] = (((min(8177240226067981461, 2147483647))) || ((((arr_13 [i_3 - 1]) + var_0))));
            }
        }
    }
    var_24 = var_4;
    #pragma endscop
}
