/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_11 = (max(var_11, (((var_4 ? var_5 : (arr_3 [i_0] [i_1] [i_1]))))));
            var_12 = (arr_4 [i_0] [i_0] [i_0 + 1]);
        }
        var_13 = (((arr_2 [i_0] [i_0]) ? (arr_0 [i_0 + 1]) : (arr_2 [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 6;i_3 += 1)
        {
            {
                arr_9 [i_3] [i_2] [i_2] = ((((~(arr_3 [i_2 - 2] [i_3] [i_3 - 2]))) == (((!(((arr_6 [i_2]) == var_6)))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_14 = (max(var_14, (((((((18446744073709551615 >> (var_5 - 57419))) << (((~var_10) - 6288913599787303045)))) << ((((((((arr_3 [i_2] [i_4] [i_5]) << (18446744073709551613 - 18446744073709551607)))) ? -1427977179 : (arr_13 [1] [i_5] [2] [i_2] [i_2] [1]))) + 1427977237)))))));
                            arr_16 [i_5] [i_5] [i_5] [i_5] [i_3] [i_5] = (min((arr_13 [i_3] [3] [3] [3] [3] [i_3]), (arr_5 [i_2] [i_5])));
                        }
                    }
                }
                arr_17 [i_2] [i_3] [i_2] = ((((arr_6 [i_2 - 2]) ? 3 : (arr_6 [i_2 - 1]))));
            }
        }
    }
    #pragma endscop
}
