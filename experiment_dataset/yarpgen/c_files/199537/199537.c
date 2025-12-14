/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = ((+(((((arr_0 [4] [i_0]) ? (arr_4 [i_1 + 1]) : var_9)) | (1586041717 <= 0)))));
                arr_5 [i_1] [i_0] [i_0 + 1] = min((max(1, -940168895)), ((var_5 ? (var_2 || var_2) : ((0 ? 28843 : (arr_3 [i_0 + 1] [8]))))));
                var_12 = (((((max(var_1, var_8))) ? (var_3 || var_7) : -var_6)));
                var_13 = ((-(((arr_1 [i_0]) ? var_5 : (arr_1 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (var_9 % 119)));
                            arr_11 [i_0] [i_0] = var_2;

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_15 = ((-(arr_7 [i_2 + 1] [i_2 + 1])));
                                var_16 = (max((arr_2 [4] [i_0] [14]), (max(((var_10 ? (arr_4 [i_0]) : var_3)), (arr_1 [i_0])))));
                                var_17 = (min(var_1, var_2));
                                var_18 = (arr_4 [i_4]);
                                var_19 = ((((var_2 ? (max(var_1, (arr_8 [i_0] [i_1 + 2] [i_1 + 2] [1]))) : (~var_5)))) ? -var_2 : ((((var_8 ^ var_8) && ((max(var_1, (arr_8 [i_4] [i_2] [i_0 + 1] [i_0 + 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= var_10;
    var_21 ^= var_5;
    #pragma endscop
}
