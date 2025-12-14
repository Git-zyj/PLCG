/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = ((((((min(var_8, var_7)) << (var_2 + 9654)))) && ((min((10 & 10588081550131532526), var_4)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((1073741823 ? (arr_6 [i_0] [i_0] [i_2]) : (arr_6 [i_0] [21] [i_2]))) : ((0 << (68 - 58))));
                    arr_7 [i_1] [i_1] [i_2] [i_1] = (arr_6 [i_0] [i_1 - 1] [i_2]);
                }
            }
        }
        var_18 = ((8796093022208 ? 17286488601760098133 : (((((((arr_4 [i_0] [i_0] [i_0]) ? 8161 : 11028635441520189548))) ? 2590395082 : (arr_4 [i_0] [i_0] [i_0]))))));
        arr_8 [i_0] = (((((arr_3 [i_0] [i_0] [22]) ? (arr_6 [i_0] [i_0] [i_0]) : 3926461521975107199)) <= 1704572207));
        var_19 = (arr_4 [i_0] [13] [i_0]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 20;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_20 |= ((((((arr_3 [i_4] [i_4 - 4] [i_4]) <= (arr_12 [i_4] [i_4 - 4] [i_4] [i_4])))) >> (4194288 - 4194283)));
                                arr_17 [i_6] [i_3] [10] [i_3] [2] = (arr_10 [i_6] [i_6] [i_6]);
                                var_21 = (max(var_21, (arr_14 [i_4 + 2] [i_4 + 2] [i_4 - 4] [i_4 - 4] [i_4 - 3] [i_4])));
                                arr_18 [i_6] [21] [21] [i_0] [i_0] = min(((((arr_12 [i_4] [i_4 - 4] [i_4 + 1] [3]) <= (arr_16 [i_4] [i_4 - 1] [i_4 - 4] [i_4] [18])))), (min((arr_13 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [8] [i_4 - 1]), (arr_13 [i_4] [i_4 + 1] [i_4 - 4] [i_4] [i_4] [i_4]))));
                                var_22 = -1918699200790948616;
                            }
                        }
                    }
                    var_23 *= (((((min(1704572203, 14520282551734444427)))) <= ((~(arr_15 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 3] [i_4 + 1] [i_4 + 1] [i_4])))));
                }
            }
        }
    }
    #pragma endscop
}
