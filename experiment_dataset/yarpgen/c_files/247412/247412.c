/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (i_1 % 2 == zero) ? (((((max(var_11, (arr_4 [18] [i_1])))) != (min(((-739690524 / (arr_2 [i_0]))), ((((-4 + 2147483647) << (((arr_4 [i_0] [i_1]) - 3740972822)))))))))) : (((((max(var_11, (arr_4 [18] [i_1])))) != (min(((-739690524 / (arr_2 [i_0]))), ((((-4 + 2147483647) << (((((arr_4 [i_0] [i_1]) - 3740972822)) - 3765893455))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [0] [i_1] [i_2] [i_1] [i_1] [i_0] = ((arr_6 [i_1] [i_1] [i_1] [i_1]) && (((var_0 & 4) && (((arr_1 [i_1]) <= -4)))));
                            var_14 = (((((min((arr_10 [i_0]), (arr_5 [i_1] [i_1]))))) > 0));
                        }
                    }
                }
            }
        }
    }
    var_15 &= ((min(var_0, (max(var_4, var_8)))));
    var_16 = min(var_6, var_7);
    #pragma endscop
}
