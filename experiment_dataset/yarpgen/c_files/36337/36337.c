/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] = ((9223372036854775807 + (!1)));
                    arr_9 [i_2] = (arr_5 [i_0] [1]);
                    var_15 = ((19586 ? ((((~7727724602688265013) && (arr_4 [i_0 - 1] [i_0] [i_1] [10])))) : (((min(2047, 1))))));
                }
            }
        }
        arr_10 [i_0] = ((((arr_4 [i_0] [i_0] [i_0] [i_0]) * ((-(-32767 - 1))))));

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_16 = 3363139114;
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_17 = -1665192883;
                            arr_21 [i_0] [i_0] [i_4] [i_0] [i_6] [i_6] = (arr_7 [i_0 - 2] [i_3 + 1]);
                            var_18 = 33553408;
                            arr_22 [i_0] [7] [i_4 - 2] [i_6] [7] [7] [i_0] = ((min(50, 22)));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_25 [i_0] [i_3] [7] [i_5 + 1] [i_3 + 1] = (max(-3, ((min((min(32767, 1)), (arr_17 [i_0] [i_0] [i_5] [i_7]))))));
                            arr_26 [i_0 + 1] [i_3] [i_3] [i_3] [i_5] [0] = 1;
                        }
                        arr_27 [i_0] [i_3 + 2] [i_0] [i_5] = ((((((arr_2 [i_3 + 2]) ? (arr_16 [4] [i_3 + 2]) : (arr_24 [i_0] [5] [i_0] [i_5] [i_3 + 3] [i_5]))) | ((min((arr_4 [i_0 - 2] [i_0 - 2] [i_4] [i_5]), (arr_17 [i_0] [i_0] [i_0] [i_5 + 1])))))));
                        arr_28 [i_5] [1] [1] [i_4 - 1] [1] = (min((arr_13 [i_0] [i_3] [i_4 - 1] [i_4 - 1]), (max((arr_19 [i_0] [i_3 + 2] [i_4] [2] [i_0]), (max((arr_23 [i_0] [i_3 + 1]), (arr_5 [i_0] [1])))))));
                        var_19 -= (max(((((max(1665192882, (arr_1 [i_0 - 1])))) ? (arr_17 [11] [i_3] [11] [11]) : 33553432)), (((~(max(1665192883, (arr_20 [i_3] [i_4 - 1] [i_5]))))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_20 = ((-33553408 >= (4612828183109313624 - -29)));
        arr_33 [i_8] = 14942;
        var_21 = (((arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? ((((((min(1, (arr_3 [i_8] [i_8])))) < (arr_0 [i_8]))))) : (max(291594888, -5700185624849094874))));
    }
    var_22 = (min(4294967295, (min(((max(-928011448, 0))), -8009514155791490225))));
    #pragma endscop
}
