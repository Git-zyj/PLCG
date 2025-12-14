/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_2, 59456));
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] = max((arr_1 [i_0]), (((max(56, var_6)))));
                arr_6 [i_0] [i_1] = (max((arr_4 [i_0] [i_0 + 3] [i_1]), var_4));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_12 = min(((max((min(6020, var_2)), 59515))), 35531);
                    arr_10 [i_2] [i_1] [i_0] = (max((((max(59515, var_4)))), var_2));
                    var_13 = (min(var_13, (((max(((min((arr_0 [i_2]), var_1))), (min(9213774107448179250, 145))))))));
                }
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            var_14 = var_5;
                            var_15 = (arr_2 [i_5 - 2] [i_4]);
                        }
                        arr_18 [i_4] [11] [i_3] [i_1] [i_1 - 1] [i_0] = (arr_2 [i_1] [i_1]);
                        var_16 = (arr_12 [i_3 - 4] [16] [16]);
                        var_17 = (min((max(var_8, var_7)), var_9));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_18 = (min(var_18, var_4));
                        var_19 = (max(var_19, var_3));
                        var_20 -= 30005;
                        var_21 = (min(var_21, var_6));
                    }
                    arr_22 [i_0 + 1] [i_0] [i_0] = (min((max(var_9, 17085)), (max((max((arr_1 [i_0]), var_5)), var_4))));
                    arr_23 [i_0 + 3] [i_1] [i_3 - 4] [i_0 + 3] = ((max(2325570508160575630, (max(31802, 29486)))));
                    var_22 ^= var_2;
                    var_23 = (max(2325570508160575630, 35531));
                }
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    var_24 = (max(var_24, ((max((max(var_0, ((min(155, (arr_0 [i_0])))))), (max(14494291482921612130, ((max(var_9, var_7))))))))));
                    var_25 &= ((max(30005, -719663845534406416)));
                }
            }
        }
    }
    #pragma endscop
}
