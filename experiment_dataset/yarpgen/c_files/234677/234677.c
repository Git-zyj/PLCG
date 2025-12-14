/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((232 ? (min(var_10, 8646673233465941440)) : ((((((8388576 ? 156 : 1195606177))) ? var_2 : (min(1195606187, -9223372036854775798)))))));
    var_12 = (~((~((255 ? var_4 : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] [i_2] = 1907140663;
                    arr_9 [i_0] [i_0] [i_2] = (arr_1 [1]);
                    var_13 = (((arr_5 [i_2] [i_0]) ? (((0 ? (max((arr_0 [i_0]), 1574226046)) : (((arr_5 [i_0] [i_1 + 3]) ? var_1 : (arr_0 [i_0])))))) : (min(2720741250, 18446744073709551613))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_14 = (min((((-(arr_3 [i_1] [i_0])))), (min((arr_11 [i_1 + 3] [i_1 + 3] [i_0] [i_0]), (arr_11 [1] [i_1 - 1] [i_1] [i_1 - 1])))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_15 = 2720741239;
                        arr_16 [i_0] [i_0] [19] [i_0] = 1778225994176929436;
                        arr_17 [i_0] = (((((((arr_11 [i_0] [i_1] [i_1] [i_4]) ? (arr_15 [i_0] [15]) : 62)) + 9223372036854775807)) << 0));
                    }
                }
                arr_18 [i_0] [i_1] [i_1] = (((arr_14 [i_0]) == (((var_8 ? (arr_15 [i_0] [i_0]) : 1)))));
                var_16 = (max((max(((((arr_1 [i_1]) != 1639478349))), (max(var_9, var_8)))), ((max((var_1 % 1), (arr_14 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
