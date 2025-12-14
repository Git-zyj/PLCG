/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 += (max((arr_5 [0]), ((max(1650326190, 1)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = (min((var_11 * 29), (((~var_5) ? (min((arr_5 [i_0]), -395026850943096956)) : 33245))));
                            var_17 = var_7;
                            var_18 = (var_6 >= 232);
                            var_19 = ((((((arr_2 [i_0 + 2]) ^ 456427930124937814))) ? (arr_2 [i_0 - 1]) : (29 + 5)));
                            var_20 = ((4846465482438295152 >= ((456427930124937811 ? (arr_10 [i_0] [i_0 - 1] [16] [i_0 + 2] [i_0 + 1] [i_3]) : var_11))));
                        }
                    }
                }
                var_21 = 6231;
            }
        }
    }
    var_22 -= (max((min((min(2693867570338357569, 37)), var_9)), ((((((var_3 ? var_9 : var_12))) ? 227 : (~6740607301108017375))))));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_23 = (max(var_23, var_8));
                var_24 = var_3;
                var_25 &= var_2;
                var_26 = (~((((~var_14) >= (min(-456427930124937825, var_11))))));
            }
        }
    }
    #pragma endscop
}
