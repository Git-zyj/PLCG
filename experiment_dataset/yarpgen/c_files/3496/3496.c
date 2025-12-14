/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 += (((((arr_1 [i_0]) ? ((var_2 ? (arr_2 [i_0] [2]) : 0)) : 60)) * ((-853860956301024694 ? 200 : 1))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_17 = (arr_8 [i_4] [i_1 - 1] [i_4]);
                            var_18 = ((((var_10 == (arr_8 [i_1] [i_3] [i_1]))) ? (((arr_7 [i_0] [i_1 - 2] [i_1 - 1] [i_0]) ? (arr_7 [i_0] [i_1 - 2] [i_1] [i_0]) : (arr_7 [i_0] [i_1 - 2] [i_1 + 1] [i_0]))) : (min((((!(arr_0 [i_0])))), (arr_0 [i_2])))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_19 = ((1813520415 ? (((arr_15 [i_0] [i_1] [i_0]) ? 782358277 : 4294967295)) : 1));
                            var_20 = (((var_12 ? 1 : (arr_12 [i_5] [i_5] [i_2] [i_5 - 1] [i_5] [i_5]))));
                        }
                        var_21 = 663385839;
                        var_22 = arr_10 [i_2] [i_0] [i_3] [i_1 + 1];
                        var_23 = ((((max(2381350774, 0))) ? -222 : (max(3696719566, ((1299128048479585086 << (1250012794 - 1250012792)))))));
                        arr_19 [i_3] [i_0] [i_2] [i_3] = arr_5 [i_3] [i_1];
                    }
                }
            }
            arr_20 [i_0] = (((max(((max((arr_3 [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])))), 9223372036854775805)) == (((-1469298322 ? (~197) : (arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
        }
        var_24 = (max(var_24, (((((((((arr_14 [i_0] [i_0] [10] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_15 [12] [12] [12])))) ? 339908966 : (var_10 == 7352514994857947956))) << (var_2 - 2054776882))))));
    }
    var_25 |= ((((((max(49073, 16))) || -100)) || (var_9 < var_2)));
    var_26 = var_13;
    #pragma endscop
}
