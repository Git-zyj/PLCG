/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (70 >> var_12);
    var_18 = 66;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (((223 & 96) >= 1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 = (~(((-230472247 + 2147483647) >> (27744 - 27723))));
                            arr_10 [i_0] [i_1 + 1] [i_2] [i_3] [i_0] = ((((min((min(81, -74)), (arr_3 [i_0] [i_0] [i_0])))) & (min(((-(arr_4 [i_0] [i_3]))), (arr_5 [i_0] [i_0] [i_0])))));
                            var_21 = 1643243958;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_15 [3] [3] [i_0] [i_5] = (max((4294967280 | 605140992), ((min(1, (81 || -1))))));
                        var_22 = (min(((1 - (arr_0 [i_1 - 1]))), (354818406 || 26289)));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = (!96);
                                arr_23 [i_7] [i_0] [i_4] [i_0] [i_0] = 70;
                                arr_24 [i_0] [i_0] [i_4] [i_6] [i_0] [i_6] [i_7] = -118;
                            }
                        }
                    }
                    var_23 = (max((1 & 109), (min(((max(1, -460680406))), (max(26346, 1724986422))))));
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_24 = ((!((min((min(4294967295, (arr_2 [i_0]))), (((~(arr_0 [i_0])))))))));
                    var_25 = ((((+((min((arr_1 [i_0]), (arr_11 [i_0]))))))) && (76 & 0));
                    var_26 = (((-1643243958 + 2147483647) << (!23)));
                    var_27 = (arr_26 [i_0] [i_1 - 2] [i_8] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
