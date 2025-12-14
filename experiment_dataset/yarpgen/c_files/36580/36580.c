/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] [i_1] [i_4] = (var_12 ? (arr_2 [i_0 - 3]) : (var_4 < -1888647688));
                                var_17 -= (((arr_0 [i_0 - 1] [i_0 + 1]) > (arr_0 [i_0 + 1] [i_0 + 2])));
                                arr_14 [i_0] [i_4] [i_2] [i_4] [i_3] [i_2] = ((var_4 < (18364 % 3545917033)));
                                arr_15 [i_2] [i_3] |= var_14;
                            }
                        }
                    }
                    var_18 = (~749050263);
                }
                var_19 = ((((max(var_13, var_5))) ? (arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 - 2]) : (max(6245004929327558681, 2651487943))));
            }
        }
    }
    var_20 += ((((((3545917033 << (var_6 - 3249776919))) >> (var_2 + 972662872))) / var_4));
    #pragma endscop
}
