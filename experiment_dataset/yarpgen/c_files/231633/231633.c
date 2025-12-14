/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (9223372036854775807 && -var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_11 [9] [i_1] [i_1] [i_0] = (max(16792001183964139871, 5954645271542925522));

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_14 [i_1] = max((((((max(19, var_7))) ? (((max((arr_6 [5]), 237)))) : var_8))), var_3);

                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            var_15 = ((255 ? ((((max(612594156, var_9))) ? ((~(arr_2 [i_1] [i_3 - 1]))) : (min(var_4, 0)))) : (((var_11 ? var_10 : (arr_6 [i_3 + 1]))))));
                            arr_17 [i_2] [i_2] [i_2] [i_2] [i_1] = ((var_13 + (max(var_8, (arr_2 [i_4 + 1] [i_3 + 1])))));
                            var_16 = 16384;
                            var_17 ^= (min(((-(((var_4 || (arr_12 [i_0] [i_1] [4] [i_3] [i_4 + 1])))))), (min(((100919430 ? var_11 : var_11)), 255))));
                        }
                    }
                    var_18 = 237;
                }
            }
        }
    }
    var_19 = ((var_2 ? (max((max(var_7, var_11)), var_6)) : ((((!(4294967295 || var_0)))))));
    #pragma endscop
}
