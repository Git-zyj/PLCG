/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_17 ^= ((((((arr_1 [10]) ? (arr_3 [18] [i_2 - 1]) : (arr_1 [2])))) ? (((min((arr_1 [16]), (arr_1 [20]))))) : (min(1616201728438934428, (arr_3 [0] [0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3] [i_0] = ((((~(61835 >= 18446744073709551615))) / (((((var_8 / (arr_0 [i_0])))) ? var_6 : -691592981645718921))));
                                arr_13 [i_0] [i_0] = 93;
                                var_18 = (max(var_18, (((116 ? (arr_0 [i_2]) : ((min(var_2, 376138276840845994))))))));
                                arr_14 [i_0] = ((~((9551075429352678348 ? var_14 : (arr_7 [i_2] [i_0] [i_0 - 2])))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((!((min(var_1, (arr_9 [i_0 + 1] [i_2 - 1] [i_1] [i_3]))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_19 ^= 81;
                    arr_19 [i_0] = var_6;
                    var_20 = (max((max((arr_7 [i_0 + 1] [i_0] [i_5]), ((~(arr_3 [i_0] [i_0]))))), var_12));
                    var_21 = (min(var_21, (((min((8895668644356873283 + 0), ((min((arr_3 [6] [i_1]), (arr_7 [i_5] [12] [i_0]))))))))));
                    var_22 *= ((!((max((48587 * var_15), ((52511 ? var_15 : (arr_8 [i_0] [i_0] [i_1] [i_1] [8]))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_24 [i_0] [i_0] [i_0] = (((~var_12) ? (arr_5 [i_0] [i_1] [i_0]) : ((((arr_22 [i_6] [i_1]) + var_6)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_23 = ((var_9 <= (arr_10 [i_0] [i_8 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0])));
                                arr_30 [i_7] [i_6] [i_7] |= ((((arr_21 [i_8] [i_1] [i_6]) / (arr_7 [i_0 - 1] [i_7] [i_6]))));
                                var_24 -= (((arr_22 [i_0 + 1] [i_8 - 1]) ? (((var_11 % (arr_9 [i_0 - 1] [i_1] [i_6] [i_8])))) : (((arr_2 [i_0 - 2] [i_1]) ? 186 : 12441915681332528534))));
                            }
                        }
                    }
                }
                var_25 = (max(var_25, (((((min((arr_23 [i_0] [18] [i_1]), (arr_29 [i_0] [i_1] [i_1] [2] [i_1] [i_1])))) ^ (-9223372036854775807 - 1))))));
                arr_31 [i_0] [i_0] = 4674094712216053279;
            }
        }
    }
    var_26 = (min(var_26, (((((min(3757157257, var_12))) * (min(((152 ? 0 : -1)), var_14)))))));
    #pragma endscop
}
