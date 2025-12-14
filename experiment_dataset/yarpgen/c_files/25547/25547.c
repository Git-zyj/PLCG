/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max(255, -4750067984508051286)), ((min(1, (min(1, (-127 - 1))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((min((arr_1 [i_0]), (arr_1 [i_0])))) ? (arr_1 [i_0]) : (min((arr_1 [i_0]), 0)));
        arr_3 [i_0] = ((((min(31, (((((arr_1 [i_0]) + 9223372036854775807)) >> 1))))) ? 1 : (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? 82 : (arr_1 [i_0]))) : (((arr_1 [13]) ? (arr_1 [i_0]) : var_9))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [13] [13] [13] [i_1] [i_0] [i_2] = ((4294967292 ? (-1 > 236288525) : (arr_10 [i_0] [i_0] [i_0] [8])));
                        arr_13 [i_1] = (max((((arr_10 [i_3] [i_0] [i_1] [i_0]) ? (arr_8 [i_0] [i_0] [i_2]) : (arr_10 [1] [i_2] [10] [i_0]))), ((((arr_4 [i_1]) ? 4294967295 : (1 > 3370632918))))));
                        arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] = ((var_1 || (((((arr_10 [i_1] [i_1] [i_1] [i_2]) || (arr_7 [1] [i_0] [i_2] [5]))) || (((12 << (arr_11 [i_3] [i_3] [i_2] [i_1] [i_3] [i_0]))))))));
                    }
                }
            }
        }
    }
    var_15 = ((448299108658963573 != (((((max(123, 23))) ? 78 : var_12)))));
    var_16 = -var_4;
    #pragma endscop
}
