/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((32265 ? 16180 : 7524926536855615053));
    var_21 = (min(var_21, (((~(min(var_10, 4095)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (~0);

                for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_23 = (!(arr_9 [i_2] [i_2 + 1] [i_2 - 1]));
                        var_24 *= (arr_3 [i_3 - 1] [i_3 - 1]);
                    }
                    var_25 = (~var_15);
                    var_26 = (min(((~(4945266532901149786 ^ 0))), ((max(var_5, (min(var_16, 0)))))));
                }
                for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_27 |= (((min((min(11, var_18)), ((max((arr_9 [i_0] [i_1] [i_4 + 1]), 15))))) <= (max(var_18, ((((arr_0 [6] [i_1]) == 30)))))));
                    var_28 ^= (min((30296 ^ 0), (((((arr_7 [i_0] [i_1] [i_4] [8]) + var_2))))));
                }
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_29 &= (min((~2199023255551), ((((!2) || -16181)))));
                                var_30 = (((arr_4 [i_0] [5] [i_0]) ? (var_1 + 16180) : var_10));
                                var_31 = (((!-4932030400342675750) ? (arr_1 [i_1] [i_0]) : ((((((~(arr_5 [i_5] [i_1])))) ? (73 && var_10) : ((0 / (arr_5 [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = (--21930);
    #pragma endscop
}
