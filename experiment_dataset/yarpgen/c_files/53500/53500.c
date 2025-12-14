/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_10 ^= ((var_7 % ((17105 ? (arr_0 [i_1 - 1] [i_1 - 1]) : (max(-7670775720290952501, (arr_4 [i_1] [i_1 - 1])))))));
                arr_8 [i_1] [i_1] = 17103;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_11 [i_1] [i_1] [i_0] = ((((-25706389 ? (arr_7 [i_1 + 1] [i_1]) : (((min(var_5, 17105)))))) * ((((var_6 > (arr_0 [i_1 + 3] [i_1 + 3])))))));
                    arr_12 [i_1] [i_1] = ((max((arr_9 [i_0]), (arr_9 [i_1 + 2]))) ^ -7977);
                    var_11 = (((var_5 & 17857) ? var_1 : 17081));
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 19;i_3 += 1)
                {
                    arr_15 [i_0] [i_0] [i_1] = 1320060343;
                    arr_16 [i_1] [i_1] = (((arr_1 [i_1 + 2] [i_1 + 2]) && (((-1320060323 ? 3175954286 : 33)))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_12 = var_4;
                        var_13 = (arr_14 [i_3] [i_3 + 2] [i_1 + 3] [i_4]);
                        arr_19 [i_1] [i_3] [18] [i_1] = (((arr_0 [i_1 + 2] [i_1 + 2]) == (arr_0 [i_1 + 1] [i_1 + 2])));
                        var_14 = 30414;
                        arr_20 [i_1] [i_1] [i_3 - 2] [i_4] = (((arr_10 [i_1] [i_1]) >> (arr_6 [i_1 + 2] [i_1 + 1])));
                    }
                    var_15 ^= (((arr_13 [i_1 + 3] [i_3 - 1] [i_1 + 3]) <= (arr_2 [i_1 + 1])));
                }
            }
        }
    }
    var_16 = ((((min((var_6 ^ var_3), var_1))) ? ((((((var_3 ? 4463 : var_1))) == ((-5778300666371725483 ? var_7 : -5778300666371725468))))) : var_5));
    #pragma endscop
}
