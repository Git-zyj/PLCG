/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_1 != -var_15);
    var_17 = var_8;
    var_18 = ((((21508 || 255) * (min(var_5, 1073741823)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((max((max(1073741814, -3053615084782621225)), var_15))) ? (((((arr_1 [i_0]) != (arr_1 [i_0]))))) : (max(((var_14 ? 8444 : var_9)), ((max(-1821246976, var_12)))))));
                arr_6 [i_0] [i_0] = (min(((~((((arr_2 [i_0] [i_1]) != 8))))), ((min((arr_3 [i_1]), ((((arr_1 [i_0]) == (arr_4 [i_0] [i_0] [i_1])))))))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (((((((((arr_0 [i_0]) && var_6))) - (((var_12 <= (arr_9 [i_0] [i_3]))))))) ? 44569 : ((((min(var_3, -3053615084782621218))) ? (!10) : var_0))));
                                arr_15 [i_0] [i_3] [15] [i_1] [i_0] = (4832024851321046396 != 208);
                                var_20 = (min(var_20, -5048806742989629711));
                            }
                        }
                    }
                    var_21 = ((((((arr_13 [i_1] [1] [i_1] [i_1] [i_2 - 1]) ^ var_6))) ? ((((var_12 / var_12) / var_7))) : ((~((237 ? var_1 : (arr_7 [10] [i_1] [i_1] [i_2 - 1])))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_22 = ((((!(arr_19 [i_7] [i_5 - 2] [i_5 - 2]))) ? (((arr_19 [i_5 + 3] [i_6 + 2] [i_7]) ? (var_5 > 13) : var_0)) : ((~(arr_22 [i_6])))));
                    arr_25 [7] [0] = (((((var_14 & 1073741813) > (~var_1))) || (arr_23 [i_5] [i_6 + 1] [i_7])));
                    var_23 += ((((min(var_2, (((arr_16 [i_5] [i_6 - 2]) ^ (arr_24 [i_5])))))) * (((arr_18 [i_6 + 1] [i_5 + 3]) ? (arr_18 [i_6 + 1] [i_5 + 3]) : (arr_18 [i_6 + 2] [i_5 + 3])))));
                    var_24 = (((((-7091854321118057960 ? -2097088 : (arr_16 [i_7] [i_6 + 2])))) ? 1 : (((max(var_14, (arr_22 [i_5])))))));
                }
            }
        }
    }
    #pragma endscop
}
