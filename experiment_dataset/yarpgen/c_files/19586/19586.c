/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_13 ^= ((~(((arr_0 [i_0] [i_0]) ? -51 : var_3))));
            var_14 = (22136 + 22);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_15 = var_12;
                            arr_13 [i_0] [i_0] [i_2] [i_2] [i_4] [i_0] = (((arr_4 [i_0]) ? (((arr_12 [i_0] [i_1] [i_2] [i_3]) ? (arr_0 [i_1] [i_1]) : var_11)) : ((min((arr_4 [i_3]), (arr_4 [i_3]))))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_1] [i_2] &= (arr_2 [i_3]);
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((-(arr_7 [i_0] [i_5] [i_6])));
                        var_16 = ((var_3 ? var_5 : ((-(29320 * var_8)))));
                        var_17 = (((1581210588 && 9737805311623419494) & (41364 - 7)));
                        arr_23 [i_0] [i_5] [i_6] [i_7] = ((-((var_1 ? (3518922369 / 7) : (arr_4 [i_6])))));
                    }
                }
            }
            arr_24 [i_0] [i_0] [i_5] = ((+(((arr_4 [i_0]) ? ((-(arr_16 [i_0] [i_0]))) : (!118)))));
            var_18 = (min((((((23 ? var_4 : -104))) * (max(3852863265, -10)))), ((((-1781173115 ? var_5 : var_12))))));
            arr_25 [i_0] [i_0] [i_5] = 7;
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    var_19 = 11;
                    var_20 -= (min(-var_12, ((((((var_6 ? 53762 : 14821147814427152857))) ? (arr_9 [i_0] [i_8] [i_9] [i_9]) : (arr_3 [i_0] [i_8] [i_8]))))));
                    var_21 &= ((!((var_9 && (((var_1 ? 52546 : (arr_17 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_22 = (min(3625596259282398758, 65527));
                }
            }
        }
        var_23 &= (((((((((arr_16 [2] [16]) - (arr_26 [i_0] [6] [i_0])))) ? (max(67, var_1)) : (!var_4)))) ? (((var_3 && (!var_0)))) : (max((var_4 && -91), (((arr_8 [i_0] [i_0]) ? (arr_19 [i_0] [i_0] [6] [i_0]) : var_0))))));
        var_24 = (min(var_24, ((max((min(var_7, (min(-100, 12228649293046759005)))), (~2147483647))))));
        var_25 = (min((min((arr_4 [i_0]), (arr_27 [i_0] [i_0] [i_0]))), (max((arr_27 [i_0] [i_0] [i_0]), (arr_27 [i_0] [i_0] [i_0])))));
    }
    var_26 = (((var_5 && var_12) & ((var_0 ? (!var_2) : 7554))));
    #pragma endscop
}
