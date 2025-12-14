/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (((((~(((-1 + 2147483647) << (((var_2 + 10297) - 27))))))) ? (((1283838827 >> (((arr_2 [i_0]) + 1716847523))))) : (((((var_10 ? (arr_1 [i_0] [1]) : var_8))) ? var_11 : var_6))));

                /* vectorizable */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_0] = var_13;
                    var_18 = (((var_2 ? var_7 : (arr_4 [i_0] [i_0]))));
                    var_19 -= (((((-(arr_3 [i_2] [13])))) || -31905));
                    var_20 = (((((26 ? var_2 : (arr_4 [i_0] [i_1])))) ? 9 : (var_14 || var_13)));
                }
                var_21 = var_13;
                var_22 &= (arr_2 [i_1]);
            }
        }
    }
    var_23 = var_13;
    var_24 = (((((var_16 * var_1) ? (((min(var_4, var_11)))) : (~var_3))) < ((((((var_4 ? var_9 : var_9)) >= (var_11 / var_16)))))));
    #pragma endscop
}
