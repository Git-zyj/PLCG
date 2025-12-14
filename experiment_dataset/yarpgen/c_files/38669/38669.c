/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_11 = -14057;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_12 = (((-14048 | 30846) - var_9));
                        var_13 -= var_1;
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_14 |= (~-1);
                        var_15 = (!var_0);
                        arr_13 [i_0] [8] [1] [1] = -1;
                    }
                }
                var_16 = (max(var_16, (var_7 >= var_3)));
                arr_14 [1] [3] [i_0] |= (((var_6 | 14056) ? ((((0 / 110) == var_1))) : var_6));
            }
        }
    }
    var_17 = (min(var_17, 14047));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_18 = ((((max(13699, 14058))) || 8449784436752340693));
                    arr_22 [14] [i_6] [i_6] [i_6] = (((((((-14059 + 2147483647) >> (578582976 - 578582974))))) / 14057));
                    arr_23 [1] [1] [i_7] [i_7] = (((var_0 >= var_1) - (0 / var_8)));
                }
                var_19 = (max(110, var_10));
            }
        }
    }
    var_20 = (max((((var_6 + var_2) ? var_2 : (var_4 * var_0))), ((var_2 - (max(var_0, 4294967282))))));
    #pragma endscop
}
