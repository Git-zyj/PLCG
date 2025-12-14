/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((min((arr_4 [2] [i_1] [8]), (((929880125 && (arr_0 [i_1 - 1])))))))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_12 = ((!((min((arr_1 [i_0]), (min(var_5, var_5)))))));
                    arr_8 [2] [2] [i_2 - 1] |= (max(((~((min(2996, 2996))))), var_10));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((min(2987, 2996)))));
                                var_14 = (max(var_14, ((max(179, (20183 ^ 26))))));
                            }
                        }
                    }
                }
                for (int i_5 = 4; i_5 < 8;i_5 += 1)
                {
                    arr_17 [i_5] [i_0] [i_0] [i_0] = var_5;
                    var_15 = (max(var_15, 62540));
                }
                var_16 = (((min((arr_10 [i_0 + 2] [5]), (arr_10 [i_0 + 1] [2]))) <= (((max(62540, 76))))));
                arr_18 [i_0] = ((((((var_5 + 0) & var_1))) ^ (max((min(var_0, (arr_0 [3]))), (!var_7)))));
                arr_19 [i_0] = (((((!(~77)))) < (~229)));
            }
        }
    }
    var_17 -= (!var_9);
    #pragma endscop
}
