/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_1 / (((157 ? var_5 : var_5)))))) ? var_8 : 4294967295));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((~((4294967295 ? -42 : (arr_3 [i_0 - 1]))))))));
                var_18 = (((arr_0 [i_0 - 2]) ^ (max((~5), (((~(arr_3 [i_0 + 2]))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = (min(763087535, 5));
                    var_19 = (((((max(var_5, (arr_0 [1])))) || ((max(var_7, 4294967295))))));
                    var_20 = ((18446744073709551612 * (max((((arr_1 [1] [9]) * var_0)), ((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_0 - 1] [i_2]))))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_13 [3] [7] [3] = var_6;
                    var_21 = (min(-19455, 148));
                }
                arr_14 [1] = var_6;
            }
        }
    }
    var_22 = max(((var_8 ? ((-17 ? var_11 : var_5)) : var_10)), var_13);
    #pragma endscop
}
