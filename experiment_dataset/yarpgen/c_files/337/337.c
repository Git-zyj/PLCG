/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((249 ? 1 : 1));
    var_18 = (max(var_18, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = ((((((arr_6 [i_1 - 2] [16] [i_2 - 1]) | var_12))) % (13 | 859692924)));
                    var_19 = (min(((((arr_4 [i_1 - 3] [i_1 + 1]) >= (max(var_11, (arr_6 [i_2] [i_1] [i_1])))))), ((((((~(arr_6 [i_0] [i_1] [i_2]))) + 2147483647)) >> (var_10 - 5994728425162207581)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = ((-(((arr_2 [i_2 - 1]) ? (arr_2 [i_2 + 1]) : (arr_2 [i_0])))));
                                var_21 = ((var_3 - (min(((((arr_13 [i_0] [i_1] [i_3] [i_4 - 1]) ? (arr_6 [i_0] [i_1 - 3] [i_2]) : (arr_6 [i_1] [1] [i_4])))), (arr_5 [i_1] [i_1] [i_1 - 4])))));
                                var_22 = (max(var_22, var_10));
                                var_23 = ((-(max((((1 && (arr_2 [i_3 - 1])))), (((arr_7 [i_0] [i_1] [i_2] [i_1]) * (arr_11 [i_0] [i_2] [i_3] [i_4])))))));
                            }
                        }
                    }
                }
                var_24 = (max(var_24, (((!((min(((1 ? 3396523089687453093 : 1)), (((var_9 ? var_12 : var_4)))))))))));
            }
        }
    }
    #pragma endscop
}
