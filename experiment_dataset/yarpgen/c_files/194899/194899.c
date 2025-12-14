/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((((((arr_0 [i_0 - 1]) + 1))) ? (((((max((arr_2 [i_1]), (arr_2 [i_0])))) ? (33550 >= var_11) : (268433408 <= 209)))) : (max((arr_0 [i_0 + 1]), (((1 >> (((arr_3 [i_0] [i_1]) + 315459773))))))))))));
                arr_5 [i_1] [i_0 - 1] = ((((!(((arr_1 [i_0]) > 18)))) ? ((max(((-533845437618003655 ? var_1 : (arr_2 [i_0]))), var_1))) : ((((229 ? 1687915671192073648 : 99)) & (599031633 == 0)))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = ((((min(4005209937, ((~(arr_4 [i_0] [i_1] [i_2 - 2])))))) ? (~-1984973104651483367) : (((arr_7 [i_2 - 4] [i_2]) ? ((var_9 ? 0 : 599031639)) : 209))));
                            var_16 = (min(var_16, (((-599031626 * ((((arr_9 [i_0] [i_1] [i_0] [i_0 - 1]) / (arr_9 [i_0] [i_1] [i_2] [i_0 + 1])))))))));
                            arr_13 [i_2] = ((((arr_0 [i_1]) ? (arr_0 [i_1]) : 0)));
                            var_17 = (((arr_6 [i_0] [i_2 - 3] [12] [0]) / (arr_9 [i_0 - 1] [i_1] [i_2] [i_3])));
                            var_18 = (arr_0 [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_19 = var_1;
    var_20 = (((var_14 > 523264) ? (((0 % 599031633) ? var_12 : (1087167282619596409 == -2032249530584547339))) : var_2));
    var_21 = ((((((var_3 ? 0 : var_7)) <= -var_10)) ? ((min(((6 ? var_9 : (-32767 - 1))), (245 + 0)))) : (-49 * var_1)));
    #pragma endscop
}
