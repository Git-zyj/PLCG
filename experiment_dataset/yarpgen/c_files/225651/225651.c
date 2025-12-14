/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_6;
    var_12 += ((var_4 ? 0 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = (-2147483647 <= 1);
                                var_14 = 3529660545942831471;
                                arr_14 [i_0] = ((((((arr_7 [i_0]) - (min(18192553991284312160, 4294967295))))) ? (((254190082425239456 ? (arr_9 [i_0] [i_1] [i_3 - 1] [i_2 - 3]) : (arr_9 [i_2] [i_2 - 1] [i_3 + 2] [i_2 - 2])))) : (((arr_8 [i_1 + 1]) ? (arr_10 [i_3 - 1] [i_2 + 1] [i_1 + 1] [i_3 - 1] [i_3 - 1] [i_2 - 3]) : (arr_5 [i_0] [i_0])))));
                                var_15 = ((max((arr_7 [i_0]), 24713)));
                            }
                        }
                    }
                }
                var_16 = ((18192553991284312160 ? (-9223372036854775807 - 1) : 82));
                var_17 = 254190082425239439;
                arr_15 [i_0] [i_0] [i_0] = (((((arr_5 [i_1 - 1] [i_1 + 1]) + 2147483647)) >> (((min(41, 1290252264909438222)) - 29))));
            }
        }
    }
    var_18 -= ((((-127 - 1) <= 10331801104474994693)) ? var_1 : -1);
    #pragma endscop
}
