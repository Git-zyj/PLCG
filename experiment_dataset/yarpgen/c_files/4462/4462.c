/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_8 [i_0] [i_1] [i_1 + 1] = ((((min(((10535961589688508430 ? 749836639 : 127)), -3714806217914457520))) ? (((18446744073709551613 ? 255 : 9677))) : 7264440596394072214));
                        arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = (min(((min(-1619385362, -1))), (arr_4 [i_0])));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_19 = ((-(min((arr_12 [i_0] [i_1 + 1]), (arr_5 [i_0] [i_4 + 2] [i_0] [i_4])))));
                        var_20 ^= 141;
                        var_21 = (max(var_21, 8));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(9397747026742158388, 1));
                    }
                    var_22 = (min(var_22, ((min(5685488798694124481, (((11 ? (arr_11 [i_1] [i_1] [i_1 + 1] [i_1]) : 1))))))));
                    var_23 -= (arr_11 [i_2] [i_1] [i_0] [i_0]);
                }
                for (int i_5 = 4; i_5 < 23;i_5 += 1)
                {
                    var_24 += (((((((arr_17 [i_5] [i_5] [i_0] [i_0]) >= 29211)) ? (arr_6 [i_0] [i_0] [i_1 + 1]) : -4785050717216937734)) >= ((min((!2208), (-2147483647 - 1))))));
                    arr_18 [i_0] [i_0] [i_0] = ((!68) < (((arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_5 - 2]) ? (arr_15 [i_0] [i_1 + 1]) : (arr_11 [i_1] [i_1 - 1] [i_1 + 2] [i_5 - 3]))));
                }
                arr_19 [i_0] [i_0] = (max((min(14357732452703351807, 1)), 32737));
            }
        }
    }
    #pragma endscop
}
