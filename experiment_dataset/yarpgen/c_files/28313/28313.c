/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(4269229811, 299966586769544078));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = ((((-7 / (-32767 - 1))) * (min(-3558198552, ((-1440295592 ? 18446744073709551615 : 17995352303432532524))))));
                                arr_16 [i_0] = (min((((!(((var_5 ^ (arr_6 [i_0] [i_1] [i_2]))))))), ((~(arr_2 [i_0 - 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] = (max((((((arr_11 [i_0] [i_2 - 1] [i_2] [i_5] [i_6 - 3] [i_5 - 1]) + 2147483647)) << (((arr_11 [i_0] [i_0 - 1] [i_0] [i_6 - 4] [i_6 - 3] [i_5 - 1]) + 103)))), ((min((arr_11 [i_0] [i_1] [i_2] [i_5] [i_6 - 2] [i_5]), (arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))));
                                var_12 ^= max(((+((var_0 ? (arr_22 [i_0] [i_0] [i_1] [i_2 + 2] [i_5] [i_6]) : var_6)))), ((min((((!(arr_12 [i_5])))), var_2))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (-2147483647 - 1);
    var_14 = ((~((var_7 ? 32767 : var_4))));
    #pragma endscop
}
