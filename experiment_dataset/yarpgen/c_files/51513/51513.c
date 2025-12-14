/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = var_8;
    var_13 |= var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_3;
                                var_14 |= -7249207552275733287;
                                arr_14 [18] |= ((((-2147483647 - 1) ? ((var_4 ? 2251418100532039609 : var_7)) : (((((arr_1 [1]) + 9223372036854775807)) << (arr_5 [i_2] [16]))))));
                                var_15 = (((((((arr_3 [i_0] [i_0] [i_0]) < var_6)) ? (!27) : (arr_9 [i_0] [i_0] [i_2] [i_0] [i_4])))) ? (arr_0 [i_0]) : ((((max(var_4, var_2))) ? (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]) : var_5)));
                                arr_15 [i_0] = ((((-5074805883392690801 ? (arr_7 [i_0]) : -15251601303758756355)) != ((max((arr_6 [i_1] [i_3] [i_4]), (((!(arr_11 [i_4])))))))));
                            }
                        }
                    }
                    var_16 = (min(var_16, ((max(52746, -52751)))));
                    arr_16 [i_0] = 0;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_17, (arr_2 [i_0] [i_5] [i_6])));
                                var_18 = (max(var_18, -45228809));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
