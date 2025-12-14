/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 += (arr_3 [i_0]);
                            arr_10 [i_0] [i_0 + 1] [10] [i_2] [i_3] = (((((arr_7 [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) > 7381824113396102743)) ? (min((max(7381824113396102746, (arr_8 [i_1] [i_2]))), ((7381824113396102724 ? 2683374100956752075 : 7381824113396102746)))) : (arr_4 [i_0 + 2] [i_3])));
                            arr_11 [6] [i_0] [i_0] [i_0 - 1] &= (arr_7 [i_0] [i_1] [i_2] [i_3] [i_0]);
                        }
                    }
                }
                var_17 = (arr_2 [i_0 + 2] [i_0 + 2]);
            }
        }
    }
    var_18 &= 1731928321;
    #pragma endscop
}
