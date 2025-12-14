/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (min(var_0, (!var_5)));
                arr_4 [i_0] |= (max((((!((((arr_2 [i_0] [i_1] [i_1]) ? var_10 : var_10)))))), -var_9));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            {
                arr_9 [i_2] = (arr_0 [i_3 - 2]);
                arr_10 [11] = (((3847802709203100585 ? 19935 : 249)));
                arr_11 [i_2] = (!var_1);
                var_12 = (min(var_12, (((-(max((((arr_5 [i_2]) ? (arr_3 [i_2] [17]) : (arr_6 [i_2]))), ((max((arr_5 [i_3]), var_8))))))))));
                var_13 = 1065151889408;
            }
        }
    }
    var_14 = ((var_8 ? (!var_0) : var_6));
    var_15 &= var_10;
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_19 [i_4 - 1] [i_4 - 1] [10] |= ((((-(arr_18 [i_4 + 2] [14] [i_5 + 2]))) % (~var_7)));
                    var_16 = (max(var_16, (arr_15 [i_4 - 2] [i_5] [i_4 - 2])));
                    var_17 = var_7;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_18 = (((max(((((arr_1 [i_4] [22]) > (arr_12 [6])))), 27)) >= (!var_5)));
                                var_19 = (((arr_15 [i_4 - 1] [i_6] [i_4 - 1]) && (arr_15 [i_6] [i_6] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
