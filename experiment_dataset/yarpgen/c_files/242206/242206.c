/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = -6083253132405884909;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = (max(((41347 | (-729578307733997126 % 4157988932))), (max((max((arr_0 [i_0 + 1]), var_6)), (arr_4 [i_2] [i_4 + 1])))));
                                var_21 = (24180 >= 41348);
                                arr_13 [i_0 - 1] [i_1] [i_2] [18] [i_4] = (max(((0 || (((arr_4 [i_2] [i_3 + 1]) || 31024)))), ((!(2099012021 + 20740)))));
                                var_22 = ((((((((arr_3 [i_4 + 1] [i_1]) / 55043)) & 46858))) ? (max((arr_9 [i_0 + 1] [i_0 + 1] [i_2] [i_3]), (arr_9 [i_0] [i_0] [i_2] [i_4 + 1]))) : (((arr_8 [i_3 - 1] [i_3] [i_4] [i_1] [i_4] [i_3]) ? 22753 : (arr_8 [i_3 - 1] [i_4] [i_3 - 1] [i_1] [i_4] [i_4])))));
                            }
                        }
                    }
                    var_23 = (((max(-2099012022, 356952755)) | var_18));
                }
            }
        }
    }
    #pragma endscop
}
