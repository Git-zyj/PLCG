/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (+-7637889123171190186)));
    var_15 = (min(var_15, (((~((~((28464 ? 65535 : -1)))))))));
    var_16 = 126;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    arr_8 [i_2 - 2] [i_1 + 2] [i_0] = 61340;
                    var_17 = var_2;
                    arr_9 [i_0] [4] [i_0] [i_0] = (((((~(arr_4 [i_0] [7] [i_0])))) ? (!var_1) : (((arr_2 [i_1]) ? 65520 : 10808854950538361430))));
                }

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_12 [i_1] [i_1] [i_0] [3] = ((-(min((arr_11 [i_3] [i_3] [i_3]), (var_5 + 1896632614808639813)))));
                    var_18 = ((~((10 % (min(7186105348766994769, var_2))))));
                    var_19 = (min(var_19, (((+(((arr_11 [i_3] [i_1 - 1] [i_0]) % (arr_11 [i_3] [i_1] [i_0]))))))));
                }
                arr_13 [i_0] [i_1] &= ((195 ? 943568933450799221 : 7637889123171190174));
            }
        }
    }
    #pragma endscop
}
