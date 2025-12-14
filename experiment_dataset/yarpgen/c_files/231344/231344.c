/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (((min(((var_5 ? var_3 : var_6)), ((min((arr_0 [i_0]), var_0)))))) ? ((((arr_0 [i_1 - 1]) ? (arr_1 [i_0] [i_1 - 1]) : (arr_1 [i_0] [i_1 + 2])))) : (((arr_0 [i_1]) - (max(-5362864544005241945, 5362864544005241944)))));

                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    var_11 = (((arr_1 [i_1 + 3] [i_1 + 3]) >= (((var_5 != (arr_5 [i_1 - 1] [i_1]))))));
                    arr_9 [i_2] [4] [0] = var_0;
                    arr_10 [i_2] [i_1 + 1] [i_1] [i_2] = (((((arr_3 [i_1 + 1]) / (arr_7 [i_2 - 4]))) < (max((arr_3 [i_1 + 1]), (arr_7 [i_2 - 3])))));
                }
                var_12 = (min((max(var_0, (((arr_5 [i_0] [i_1]) ? 5362864544005241945 : (arr_7 [i_0]))))), var_2));
            }
        }
    }
    var_13 = (((min(((var_7 ? var_8 : var_2)), (max(var_1, var_8)))) << ((((var_4 ? var_1 : var_3)) / var_8))));
    var_14 = (max(var_14, (!4294967295)));
    var_15 = ((max((5362864544005241944 != var_6), ((5816 ? -9223372036854775799 : 8388600)))));
    #pragma endscop
}
