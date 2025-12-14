/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((min(-6052650646017107216, 0)))) ? ((min(var_4, (min(var_7, 230))))) : var_4));
    var_13 = (min(((-var_6 ? var_3 : (min(var_3, var_7)))), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] = (arr_9 [i_0] [i_1] [i_2 + 2] [i_2]);
                            var_14 = -219;
                        }
                    }
                }
                arr_12 [i_1] = (max(((max((arr_2 [i_0]), (((!(arr_3 [i_0] [i_0]))))))), (min((((arr_8 [i_0] [1] [18] [i_1]) ? (arr_7 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_1 + 1]))), (((-(arr_9 [i_0] [i_1] [i_1 + 1] [8]))))))));
                var_15 = (arr_5 [i_0] [i_0]);
                var_16 *= (arr_9 [i_0] [i_0] [i_0] [16]);
            }
        }
    }
    #pragma endscop
}
