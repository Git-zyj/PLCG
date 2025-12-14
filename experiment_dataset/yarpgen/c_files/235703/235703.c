/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (max(((((32767 >= 8190) > var_0))), (min((8183 >= var_1), var_1))));

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    var_11 += (arr_0 [i_2] [i_0 - 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = ((2027624937 ? ((((min(1370003251, -8184))) ? (arr_7 [i_4]) : (arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 1]))) : ((-(((arr_9 [i_0] [i_0] [i_4]) / var_6))))));
                                var_13 |= ((33554176 ? -8198 : 23584));
                                var_14 = (min(var_14, 101));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_15 += ((((-(arr_0 [i_0 - 2] [i_0 + 3]))) != ((((-4209835787472993274 / 8186) < ((((arr_10 [i_0] [i_1] [i_1] [i_5] [i_5]) ? 8183 : -24698))))))));
                    arr_16 [i_5] = ((((((arr_7 [i_0 - 2]) && (arr_7 [i_0 - 2])))) >= (arr_1 [i_1])));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [i_1] [i_1] [i_7] [i_8] [i_8] = (min((((arr_6 [i_8] [i_8 - 1] [i_7 - 2]) ? (arr_6 [i_8] [i_8 - 1] [i_7 - 2]) : 8173)), 1032192));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((!(arr_23 [i_1])))));
                                var_16 = (0 << var_1);
                            }
                        }
                    }
                    arr_26 [i_1] [i_0 - 2] [i_1] [i_6] |= ((min(-1, (arr_0 [i_0 + 2] [i_0 + 4]))));
                }
                var_17 = (min((arr_20 [i_0 - 2]), (arr_2 [i_0 - 2])));
            }
        }
    }
    var_18 = var_6;
    #pragma endscop
}
