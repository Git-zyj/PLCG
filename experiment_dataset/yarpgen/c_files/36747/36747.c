/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = -1949150056;
                            arr_10 [10] [i_0] [1] = (((arr_4 [i_0] [1] [i_0]) ? var_10 : (((var_10 < ((64197 >> (-28213 + 28239))))))));
                            var_14 |= (-((var_8 ? (arr_4 [i_1] [i_1 + 1] [i_0]) : (arr_9 [4] [i_1] [i_1] [16]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_15 = (((((((var_7 ? -1949150078 : 18446744073709551615))) ? (var_8 != var_10) : (arr_7 [i_5] [i_1 - 1] [i_4]))) < (((!(arr_6 [i_1] [i_1 + 1] [i_0] [i_1 + 1]))))));
                            var_16 |= ((-1949150073 ? ((-121 / ((var_10 ? var_0 : (arr_2 [3]))))) : ((64197 + ((64199 ? (arr_13 [i_1] [i_1] [i_5] [i_1] [i_5]) : (arr_0 [i_1] [i_4])))))));
                            var_17 = (max(var_17, (((((max((arr_9 [i_1 - 1] [i_1 - 2] [i_5] [i_1 - 2]), (arr_9 [i_1 - 1] [i_1 - 2] [i_1] [i_1])))) ? -var_8 : (max(1338, (((arr_9 [i_0] [0] [i_5] [i_5]) ? 9631 : (arr_6 [i_0] [i_1] [i_5] [i_5]))))))))));
                            arr_15 [7] [i_4] [i_0] [i_4] [3] [9] = -var_5;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
