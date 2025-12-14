/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [3] [i_2] [i_1] [i_3] [i_4] = ((-(((-8064926187985377025 + (arr_6 [i_0 - 4] [i_1 + 2]))))));
                                var_14 = ((9610842066109740226 | (((min(54210, 2251250057871360)) / 8064926187985377024))));
                                arr_15 [i_0] [i_2] = (min((arr_3 [i_0 - 2] [i_1 - 2]), (((!(arr_3 [i_1 + 1] [i_1 - 2]))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0 - 3] = (arr_6 [i_0] [i_0]);
                            }
                        }
                    }
                }
                var_15 = (min(var_15, (((max(95, ((((arr_12 [i_0] [i_1] [i_1] [i_0] [i_1]) || var_10)))))))));
            }
        }
    }
    var_16 |= ((var_6 ? var_7 : var_3));
    var_17 = var_7;
    var_18 = (((((-(!var_1)))) / (min((max(15042666100944019058, -497668986)), ((max(var_1, var_9)))))));
    var_19 &= (((!-var_13) < var_12));
    #pragma endscop
}
