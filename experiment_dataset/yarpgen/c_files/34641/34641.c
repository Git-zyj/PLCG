/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, -93));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_13 ^= (((-29357 + 2147483647) << (1462676879 - 1462676879)));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_14 ^= (((((+(((arr_7 [8]) ? (arr_2 [i_0] [i_1 - 4] [i_0 + 3]) : 1462676888))))) ? ((((var_9 == (arr_11 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3] [i_2]))))) : ((+((var_2 ? (arr_4 [i_0 + 1] [i_1] [i_2]) : (arr_6 [i_0] [4])))))));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] = ((((+((var_6 ? (arr_4 [i_0] [i_0] [3]) : (arr_4 [i_0 + 3] [0] [i_0 + 3]))))) == (((~(arr_7 [i_0 - 3]))))));
                                arr_15 [i_0] [i_0] [8] [i_0] [i_3] [i_0] [2] = (((((-5222983284884397704 ? (((arr_2 [9] [4] [i_4]) | (arr_2 [i_1] [i_2] [i_4]))) : (~var_7)))) ? ((10185174120430402367 ? -5235 : (var_8 == var_3))) : (arr_5 [i_0] [i_1 - 4] [i_2 - 1])));
                            }
                            arr_16 [i_0 + 3] [i_0 + 3] [i_2] [i_0 + 3] &= (!((min((!45), ((var_8 ? -5222983284884397698 : 50917))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
