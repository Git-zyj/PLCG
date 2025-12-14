/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = ((-10721 + (arr_4 [i_0 - 3] [i_0 + 1])));
            var_18 = ((-110 ? -63 : (arr_0 [i_0 - 1])));
        }
        var_19 = -114;
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_3] = (~(((min(-95, 2097120)))));
                arr_12 [i_2] [i_3] [i_3] = (min((arr_0 [i_3]), ((((min(var_6, var_16))) ? (arr_2 [i_3]) : ((0 ? -9326 : (arr_9 [i_3])))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_20 = (((((arr_6 [8] [i_5]) ? var_10 : (((arr_17 [i_2 + 1] [10] [i_5]) + var_14)))) * (((((min(var_14, 1))) ? ((23897 ? (arr_9 [i_5]) : (arr_1 [7]))) : (arr_14 [i_2] [i_3] [i_4]))))));
                            arr_19 [i_2] [i_3] [13] [i_2] [i_5] = (arr_17 [i_2] [i_2 + 2] [i_2 + 1]);
                            arr_20 [7] [i_2] = (!(arr_7 [i_2]));
                            var_21 = (((arr_15 [i_2 + 3] [i_5] [i_4] [i_2]) ? ((((arr_8 [i_2]) ? (((!(arr_14 [i_2] [i_3] [i_2])))) : (~2097151)))) : (min(var_4, (~1)))));
                            var_22 = (max((~2347870298), (max(var_0, var_6))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, ((((~(!-18)))))));
    var_24 |= var_16;
    #pragma endscop
}
