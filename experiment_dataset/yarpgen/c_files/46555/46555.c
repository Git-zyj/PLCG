/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~var_11) ? (((255 % 18446744073709551601) ? (!var_9) : (-16 && var_0))) : -57));
    var_14 = ((-((var_11 >> (var_1 - 502817958)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (((arr_1 [i_0 + 3]) | (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : 8759683809563361328))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [17] [i_0] = (((((1 ? var_10 : var_4))) && var_9));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((((var_4 + 2147483647) >> (var_9 - 3592)))) % (arr_0 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 &= (((arr_2 [i_0] [i_1 - 1]) ^ (arr_3 [i_4 + 3] [15] [i_4])));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = (((1136975860 < 9223372036854775807) <= -1136975839));
                                var_16 = 255;
                                arr_14 [8] [8] [i_2] [i_2] [8] = ((((((arr_2 [i_0] [i_2]) ? 2477163799 : 65525))) / ((32007 ? 26 : -4250703846623893523))));
                            }
                        }
                    }
                    var_17 = (arr_5 [i_0]);
                }
            }
        }
    }
    var_18 = (((((65535 - var_10) - (max(var_1, var_5)))) - var_4));
    #pragma endscop
}
