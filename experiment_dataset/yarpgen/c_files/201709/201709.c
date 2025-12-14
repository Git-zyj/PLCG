/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max(((max(-1920, 4159))), 1005505339)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_0] = -104;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_17 = (min(-11, (((9903 || -1005505340) + (104 % 3)))));
                        var_18 ^= (((((((((((arr_1 [i_3]) > (arr_5 [12] [i_3] [i_3]))))) >= (max((arr_12 [i_0] [i_3] [i_3]), var_7)))))) == (((max(var_5, (arr_1 [i_3]))) % (arr_12 [i_3] [i_3] [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_19 -= ((((((((arr_3 [i_0 - 1] [i_4]) ^ (arr_13 [3] [i_1 + 1] [i_2] [i_4]))) < (arr_7 [10])))) % (max((arr_1 [2]), var_3))));
                        arr_16 [i_0 + 1] [i_0] [i_0 + 1] [i_2] [i_4] = ((max((min(-684217380, -12334)), (((arr_14 [i_0] [i_0] [i_0 + 1] [i_4] [9] [i_1]) / (arr_10 [i_0] [6] [i_0] [9]))))));
                        var_20 = (((((((((arr_13 [i_0] [i_1] [i_1] [i_4]) < var_14)))) ^ 89)) < (((max(-1, -36))))));
                        var_21 = (((min((max(127, (arr_15 [i_0 - 1] [i_1 - 1] [i_2] [3]))), (max((arr_7 [i_4]), (arr_15 [i_0] [i_0] [i_0] [i_0 - 1]))))) < (min((min((arr_1 [i_0]), 3)), ((min(765616465, 0)))))));
                    }
                }
            }
        }
    }
    var_22 ^= ((max((var_8 > 20), (min(var_3, var_3)))));
    #pragma endscop
}
