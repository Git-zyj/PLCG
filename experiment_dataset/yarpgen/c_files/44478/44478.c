/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] |= (arr_1 [i_0] [i_0]);
        var_18 = arr_1 [i_0] [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_2 + 3] = (min(((!((max(1155145274, (arr_5 [i_0] [i_1] [i_2])))))), (((613514380891164600 != 613514380891164619) < 613514380891164603))));
                    arr_10 [i_2] [i_2] [i_2] = ((max((min((arr_1 [i_2 - 2] [i_0]), (arr_0 [i_0] [i_1]))), 1030603478)) | (arr_3 [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (min(((((arr_14 [i_4] [i_2] [i_2] [i_1] [i_1] [i_0]) && (arr_5 [i_0] [i_0] [i_0])))), (((arr_0 [i_2 + 2] [i_3]) ? 18446744073709551615 : 656099593))));
                                var_20 = arr_8 [i_2] [i_1] [i_2];
                                var_21 = var_1;
                            }
                        }
                    }
                    var_22 = ((((((arr_4 [i_0] [i_0] [i_0]) | ((((!(arr_4 [i_0] [i_1] [i_0])))))))) || ((((arr_5 [i_2 + 2] [i_2] [i_1]) ? (max(342143618162253190, var_8)) : (((var_7 | (arr_14 [i_2 + 1] [i_2] [i_2 - 2] [i_0] [i_0] [i_0])))))))));
                }
            }
        }
        var_23 ^= 18446744073709551615;
    }
    #pragma endscop
}
