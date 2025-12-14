/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (~2147483646)));
    var_14 = (min(var_14, ((min((((!(((var_10 ? 60 : var_8)))))), (max((430558718 ^ var_6), 7846528409336632885)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 ^= (min((((min(76, 7846528409336632880)) / ((min((arr_1 [0]), var_3))))), ((min((((arr_5 [i_0]) * (arr_1 [4]))), (((arr_4 [i_0] [i_0] [i_1]) / (arr_5 [i_0]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    arr_8 [i_1] [7] |= (var_9 >= 38587);
                    var_16 *= 208;
                    var_17 = (min(var_17, (((((~(arr_4 [i_0] [i_1] [i_2])))) && 32759))));
                    var_18 += var_7;
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    arr_11 [i_1] [i_1] = -29971;
                    var_19 = (((-(arr_9 [i_0] [i_0] [6]))));
                }
            }
        }
    }
    var_20 = (min(5389690274991031263, (((~(var_3 <= 26945))))));
    var_21 &= 38556;
    #pragma endscop
}
