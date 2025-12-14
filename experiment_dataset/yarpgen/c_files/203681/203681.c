/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((((((max(var_1, 0))) ? ((var_13 ? var_1 : 12023)) : var_3)) >= (max((var_16 || var_8), var_11)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_18 += (max((((0 <= 14039) ? (((arr_6 [i_0] [i_1] [i_2]) * (arr_9 [i_0] [i_0] [i_2] [i_3]))) : var_7)), ((((-1 ? 65535 : (arr_9 [i_3] [i_2 + 1] [3] [i_0]))) & (arr_0 [i_2 + 3])))));
                        arr_10 [i_3] [i_2 - 1] [i_0] [i_0] = -463637601;

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_19 = var_8;
                            arr_13 [i_0] [i_4] [i_0] [i_4] [i_4] = ((((((0 || (arr_12 [10] [i_4 - 2] [i_2 + 1] [i_4]))) ? (((arr_1 [i_0]) ? (arr_2 [i_1]) : (arr_9 [i_4] [i_2] [i_1] [i_0]))) : 0)) ^ ((-((((arr_0 [i_0]) && 17948467273141644431)))))));
                            var_20 = (min(((!(arr_0 [i_2 - 2]))), (((arr_0 [i_1]) || (arr_0 [i_2])))));
                        }
                    }
                }
            }
        }
        var_21 = (max(var_21, ((max(((((min(var_1, 30737)) <= var_8))), (((var_16 >= 53513) ? (arr_5 [i_0] [i_0] [i_0]) : (((var_16 ? 14039 : -17))))))))));
        arr_14 [i_0] [i_0] = min(((((((~0) + 2147483647)) << ((((6368521475557699496 ^ (arr_6 [1] [1] [i_0]))) - 6368521475557699534))))), (max(-72057594036879360, var_12)));
    }
    #pragma endscop
}
