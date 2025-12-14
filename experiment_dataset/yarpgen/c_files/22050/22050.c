/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            var_14 = (max(var_14, ((6016993352190563399 != (((((arr_7 [i_2 + 3] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1]) != (arr_2 [i_2 + 2])))))))));
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = (max(var_5, (max(-6016993352190563407, 0))));
                        }
                        var_15 = (((((arr_9 [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_3] [i_3 - 2]) - (arr_9 [i_3 - 1] [i_3] [i_3] [i_3 - 2] [i_3] [i_3 + 1]))) - ((-(arr_9 [i_3 - 1] [i_3] [i_3] [i_3 + 2] [i_3] [i_3 - 1])))));
                        arr_13 [i_0] [i_1] [i_2] = ((1966964605639109031 ? 22443 : -35));
                    }
                }
            }
        }
        var_16 = (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_14 [i_0] = -1966964605639109043;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                {
                    var_17 += (max((arr_0 [i_0] [i_0]), ((((min(6016993352190563406, 1187889941)) != ((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0] [i_6])))))))));
                    var_18 = var_12;
                    arr_19 [i_0] [i_0] [i_0] [i_0] = 0;
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((((((arr_2 [i_6 + 1]) - (arr_2 [i_6 - 1])))) / ((-1 ? 102 : -3027992908727287476))));
                    arr_21 [i_0] [i_0] [i_5] [i_6] = (arr_4 [i_0] [i_0] [i_0]);
                }
            }
        }
        var_19 = (min(var_19, ((((((5 ? (((1 ? 0 : 73))) : (-2020877367430166731 / 1984)))) ? ((((!(arr_17 [i_0] [i_0]))))) : (max((arr_4 [i_0] [i_0] [i_0]), ((((arr_5 [i_0]) ? 3864649729 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
    }
    var_20 = 1;
    var_21 = var_6;
    #pragma endscop
}
