/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_1 ? (((4504 ? 45753 : 1)) : ((var_5 ? var_0 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_12 = (min(var_12, ((((!1460296815) ? (12718741574250428490 / 6702050066212638943) : (((8191 ? 2147483647 : 1))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = 2096213534;
                                arr_12 [i_0] [i_1] [i_2] [i_3] = (~2198753778);
                            }
                        }
                    }
                    arr_13 [i_1] = ((!(arr_2 [i_2 - 1])));
                    var_14 -= (((((arr_10 [i_0] [i_1] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_2]))) & (((arr_10 [i_0] [i_1] [i_2] [i_2]) / 36867))));
                    var_15 = (min(var_15, (((arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]) > (arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])))));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_16 = (((((((-54799921 / (arr_11 [i_5] [i_5] [i_5] [i_1] [i_1] [i_1] [i_0])))) > (max(30533514, 66)))) ? var_4 : ((((~1) > (((arr_5 [i_0] [i_0]) & 4035225266123964416)))))));
                    var_17 = (~-1);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_18 ^= (((-(12 / 2096213519))) / (((((365777588961068484 ? 28687 : (arr_10 [i_7] [i_6] [i_5] [i_1]))) & (arr_3 [i_5] [i_7])))));
                                arr_21 [i_0] [i_0] [i_1] [i_5] [i_6] [i_7] = (max(((200 ? (((~(arr_2 [i_0])))) : ((4294967288 ? (arr_8 [i_0] [i_1] [i_5] [i_7]) : 2096213534)))), (((!(((67 & (arr_4 [i_0] [i_5] [i_6])))))))));
                            }
                        }
                    }
                }
                arr_22 [i_1] = (arr_10 [i_0] [i_0] [i_1] [i_1]);
            }
        }
    }
    var_19 = (min(-2147483630, (min((min(var_1, 63)), var_4))));
    #pragma endscop
}
