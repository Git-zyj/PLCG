/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min(0, (min(4355719706229661704, 11939398)))), var_17));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [19] [4] [i_0] = (arr_2 [i_1 + 1]);
                var_19 = (max(var_19, (((((-(arr_4 [i_0] [16]))) >= var_14)))));

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [5] = 1056496143;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [20] [0] [i_3 - 1] [i_0] [6] = ((((min((arr_7 [i_0] [i_0]), (((arr_0 [i_0]) ? -6987024876696472663 : 11939398))))) ? 11939398 : -8575));
                                arr_14 [i_0] [i_1 - 3] [i_2] [i_0] = (arr_10 [i_0] [14] [i_0] [i_0]);
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_20 = (min(var_20, 32594709));
                                arr_23 [i_0] [i_0] [1] [i_5] [20] [i_0] = (!32594709);
                            }
                        }
                    }
                    arr_24 [20] &= (!536870880);
                    arr_25 [i_0] [i_0] [i_0] [i_0] = -11939399;
                    var_21 ^= (((((1056496143 ? 18778 : 32594709))) ? (min((arr_15 [1]), (min(var_14, var_7)))) : (((((min((arr_15 [14]), (arr_22 [i_0] [9] [9] [i_5])))) ? ((12 ? 14390 : 1)) : (var_14 > var_0))))));
                }
            }
        }
    }
    var_22 = (max(var_22, ((((min(((var_13 ? var_11 : 11680666776286506273)), ((min(4262372587, var_2))))) % (((-(min(var_12, var_10))))))))));
    #pragma endscop
}
