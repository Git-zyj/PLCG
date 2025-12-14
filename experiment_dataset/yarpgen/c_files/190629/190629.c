/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((84 ^ -30556) * 33026);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [0] = ((((((arr_1 [i_0]) || var_10))) == (var_2 && var_3)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = ((((((((((arr_9 [12] [3] [i_1 + 2] [i_1]) | (arr_4 [i_3])))) > 1765290904)))) != (0 - 222)));
                                var_13 = (((((-1 % 13785549925202147969) / (((((arr_10 [23] [5] [12] [i_3] [2]) || -546)))))) * ((((arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_3]) | var_4)))));
                                var_14 = ((((var_6 >= (6862474025375787229 - 1023))) && ((((arr_12 [i_1 + 2] [1] [i_3] [i_3] [i_4]) * 1)))));
                                var_15 = ((((((((1143661344 || (arr_13 [i_0] [i_0] [i_2] [i_4])))) % 27646))) * (1655466357270636771 & 33030144)));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_1] = (((197 == 95) > (((((((arr_6 [i_1 + 1] [i_1] [i_0] [i_1 + 1]) >= var_6))) > var_1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            {
                var_16 = (((0 && var_7) <= (576460750155939840 == var_8)));
                arr_20 [i_5] [i_5] [20] = (((var_6 + var_9) * ((((arr_8 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1]) >= var_1)))));
            }
        }
    }
    var_17 = ((var_0 - (((((119 && var_4) || (var_9 && -3)))))));
    #pragma endscop
}
