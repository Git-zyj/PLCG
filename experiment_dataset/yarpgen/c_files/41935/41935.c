/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_12 = (min(((((arr_7 [i_1] [i_1 + 2]) ? -1 : var_8))), (arr_1 [i_1 + 2])));
                    var_13 = (max(var_13, var_5));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 &= (((arr_10 [i_0] [1] [i_0] [i_3] [i_0] [i_3] [i_2]) ? ((((arr_7 [i_4] [i_4]) <= 48950))) : (arr_6 [i_3])));
                                arr_12 [i_4] [i_1] [i_1 + 1] [i_2] [i_1] [i_0] = (((arr_6 [3]) >> (270264293 - 270264277)));
                                var_15 = ((~((min(134, 16585)))));
                            }
                        }
                    }
                }
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    var_16 |= (arr_10 [i_5 + 2] [i_5] [5] [i_1 + 2] [i_1] [i_0] [i_0]);
                    arr_17 [i_1] [i_1] = (((((((-(arr_4 [15]))) * -11664))) ? var_9 : -576460477425516544));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_17 = ((~(arr_8 [i_1] [i_1])));
                    var_18 &= (!var_0);
                    var_19 = (min(var_19, (arr_0 [i_1])));
                }
                arr_20 [i_0] |= (32767 / -4611686018427387904);
                var_20 = (((min(((var_6 ? 0 : (arr_10 [16] [i_0] [i_0] [i_0] [10] [i_0] [9]))), (min((arr_3 [10]), (arr_13 [i_0] [i_1] [i_0])))))) ? ((((arr_16 [i_0] [i_0] [i_1 - 1] [i_1]) ? (arr_11 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 1]) : (arr_16 [i_1] [i_1] [i_1 - 1] [2])))) : ((12164 ? (((max(65535, -11685)))) : 0)));
            }
        }
    }
    #pragma endscop
}
