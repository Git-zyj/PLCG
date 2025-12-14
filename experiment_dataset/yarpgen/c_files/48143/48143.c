/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max(4147414699234250997, ((max(var_14, 2122466))))), 57084));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = var_0;
        var_18 = 3387441421094984870;
        var_19 = (max(((((max(10533801069760028445, -1701844315)) <= var_7))), (max((((-2147483647 - 1) & 13835382177432426761)), ((max(var_11, var_11)))))));
        var_20 = var_1;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [i_1] = 2273064846;
            arr_11 [i_1] = var_12;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_21 = (10835326079920502272 >> 0);
            var_22 = var_0;
            var_23 = 1;
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 4; i_5 < 12;i_5 += 1)
            {
                var_24 ^= 189;
                var_25 = (min(var_25, ((((166 != var_12) << (((62462 | var_7) - 62458)))))));
            }
            arr_18 [5] &= 60253030;
            arr_19 [i_4] = (((min(var_15, ((max(var_3, var_7))))) * ((min(var_3, var_2)))));
        }
        var_26 = -1;
    }
    var_27 = ((((((min(2920624342, var_5))) * (min(39585, 8422343419816417200)))) != 117));
    #pragma endscop
}
