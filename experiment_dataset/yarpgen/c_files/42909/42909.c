/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = ((60 ? (min(125, 1829281791993215166)) : (~1829281791993215166)));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_14 += (min((((arr_7 [i_0]) ? ((-1829281791993215166 ? var_8 : (arr_2 [i_2]))) : (((arr_0 [i_0] [i_2]) & var_9)))), ((((((!(arr_6 [i_2])))) >> (((max((arr_2 [21]), 1829281791993215182)) - 1829281791993215159)))))));
                    var_15 = (min(var_15, -5974444728548363386));
                    arr_8 [i_2] [5] [i_0] [i_0] = var_6;
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_16 = (5974444728548363381 ^ 1485262101);
                    var_17 = (min(var_17, (((!((((arr_5 [i_1 + 3] [i_1 - 2] [i_1 - 3]) & (arr_5 [i_1 + 2] [i_1 + 3] [i_1 - 2])))))))));
                }
                /* vectorizable */
                for (int i_4 = 4; i_4 < 21;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_17 [i_4] [i_5] = (arr_5 [i_4 - 3] [i_4 - 3] [i_4]);
                                var_18 = 5974444728548363383;
                            }
                        }
                    }
                    var_19 = ((~134217727) <= (arr_13 [i_4] [18] [i_1 + 4] [i_4 - 2]));
                }
            }
        }
    }
    var_20 -= (~var_12);
    #pragma endscop
}
