/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [i_1] [8] [i_0] = ((((((arr_5 [i_1] [i_2]) * var_7))) * (((((-(arr_1 [i_0])))) ? ((-3497864704126917964 ? var_0 : var_0)) : ((((arr_1 [i_3 - 1]) / 6366602468808030644)))))));
                            var_11 *= (((arr_6 [i_0] [i_2] [i_3 - 1]) + (((arr_6 [i_0 + 4] [i_0] [i_0 + 2]) ? (arr_6 [0] [i_2] [i_3 + 2]) : (arr_6 [i_1 + 1] [i_2] [i_3 + 2])))));
                            arr_11 [0] [i_1 + 1] [i_1 + 1] [i_1] [i_3 - 1] = (((arr_2 [i_0] [14]) > (((min(-6366602468808030645, var_5))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_4] [i_5] = min((((((!(arr_2 [i_0] [i_1 + 2])))))), (min((arr_14 [i_0 - 3] [i_1 - 1] [i_4 - 1] [i_5 + 1]), -9863177664224125882)));
                            arr_18 [i_1] [i_1] [i_4] = ((~(min(((((arr_3 [i_1] [i_1]) < (arr_16 [i_0] [i_1] [i_4] [i_5])))), (((arr_6 [i_0] [i_0] [i_0]) * 8583566409485425733))))));
                        }
                    }
                }
                var_12 = (~var_3);
            }
        }
    }
    var_13 += (((!(((16334 ? var_0 : var_0))))));
    #pragma endscop
}
