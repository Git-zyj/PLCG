/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (~-var_8);
                    arr_7 [i_0] [i_1] [i_2] [i_2] = -7327342554376285606;
                    arr_8 [i_2] [14] [15] = (min(((((max((arr_2 [i_1] [i_1]), 7327342554376285611))) + -266077028571364427)), ((((8224 ? 3012442309 : 0))))));
                    var_11 = (min((((803545769 * (arr_2 [15] [i_0])))), 1003819868044807544));
                    var_12 = 4192256;
                }
            }
        }
        var_13 = (min(var_13, ((((arr_3 [i_0] [i_0] [21]) ? (min((arr_3 [i_0] [i_0] [16]), (max(96480617, var_9)))) : (var_7 + -7327342554376285598))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_14 = (max(((+(min((arr_1 [i_0]), 7327342554376285604)))), ((((((var_1 && (arr_10 [5])))) == (arr_5 [i_0] [i_3] [i_3 + 2]))))));
                    var_15 = (max(var_15, ((((!3491421550) ? (((!(arr_11 [i_0])))) : ((max(var_2, var_5))))))));
                }
            }
        }

        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_16 *= ((!((min(var_8, (max(var_3, var_8)))))));
                            var_17 ^= min(((((arr_9 [i_6] [i_6]) >> (((arr_6 [i_6] [i_5]) - 2379871866641376887))))), ((var_3 ? var_9 : (arr_12 [i_0] [i_0] [i_6] [i_8]))));
                        }
                    }
                }
            }
            var_18 |= (max(7, var_7));
        }
    }
    var_19 = (max(((-(max(var_5, var_6)))), 5390674329238559335));
    #pragma endscop
}
