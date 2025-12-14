/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((((max(53, var_3))) ? ((var_9 ? var_4 : var_9)) : (((24662 ? var_10 : var_0))))), (((((max(24827, var_2))) ? ((24827 ? var_0 : var_2)) : ((var_6 ? var_10 : var_3)))))));
    var_12 = ((((min(((var_0 ? var_10 : 0)), ((var_2 ? var_10 : var_10))))) ? ((max(((16376 ? 0 : -1)), (max(18022, var_5))))) : ((((min(-38, var_6))) ? (min(var_0, var_9)) : (((var_0 ? 8 : 128)))))));
    var_13 = ((((max((max(var_9, 0)), ((max(var_2, var_10)))))) ? ((max((max(-243787060, var_2)), (min(-1, var_5))))) : ((((max(var_1, var_10))) ? ((max(var_9, var_3))) : ((7466 ? var_9 : var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((((((max(1645354931, 0))) ? (max(30, var_6)) : ((((arr_2 [0]) ? var_4 : var_7)))))) ? ((((((var_3 ? (arr_4 [i_0] [i_1] [6]) : 16376))) ? ((max(var_7, (arr_9 [i_0] [7] [i_0])))) : (max(1, (arr_8 [i_2] [i_0])))))) : (min(((9223372036854775807 ? 1 : (arr_4 [i_0] [i_0] [i_0]))), ((((arr_2 [i_0]) ? 0 : var_9))))))))));
                    var_15 = (min(var_15, ((((((((-22889 ? 18446744073709551615 : 32321))) ? (min((arr_8 [i_0] [8]), var_5)) : (((arr_3 [i_1] [i_1]) ? var_10 : (arr_6 [i_2] [i_0] [i_0])))))) ? (((((((arr_7 [i_0]) ? var_0 : (arr_7 [10])))) ? (((arr_7 [i_0]) ? -5121145442564241897 : (arr_5 [i_2] [i_1]))) : (((max((arr_5 [i_1] [i_0]), -1))))))) : (min(((max((arr_8 [i_2] [7]), (arr_7 [i_2])))), (min((arr_6 [0] [i_1] [i_2]), 18446744073709551615))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_16 = (((((var_1 ? var_4 : 63))) ? ((((arr_2 [1]) ? (arr_0 [i_3]) : -2))) : (((arr_5 [i_0] [i_1]) ? var_4 : (arr_2 [3])))));
                        var_17 = (((((arr_0 [i_0]) ? 240 : (arr_11 [i_3] [i_0] [i_1] [i_1] [i_0])))) ? (((10 ? -1384661778 : 178))) : (((arr_5 [i_0] [i_0]) ? var_4 : 85)));
                    }
                    var_18 = ((((max(1677101648, 127))) ? (((((max(-1078084156, var_9))) ? ((((arr_2 [9]) ? var_9 : 131510120))) : (max(1621291170916730615, 29531))))) : (max(((var_0 ? var_0 : (arr_10 [8] [3] [1] [i_2]))), (((0 ? (arr_3 [3] [i_2]) : (arr_3 [i_0] [i_1]))))))));
                    var_19 -= ((((min((max((-32767 - 1), (arr_8 [i_1] [i_2]))), (max(-29, (arr_7 [i_1])))))) ? (max(((max((arr_8 [i_0] [i_0]), -1638245765))), (((arr_12 [i_1] [i_1] [i_1] [i_1]) ? var_4 : 0)))) : (((((var_8 ? 255 : var_9))) ? (((arr_2 [i_1]) ? 31 : var_4)) : (((128 ? -31 : 168)))))));
                }
            }
        }
    }
    #pragma endscop
}
