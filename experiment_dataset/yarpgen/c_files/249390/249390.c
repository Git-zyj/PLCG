/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = 9223372036854775807;
        var_20 = ((((min(-29585, 29678))) ? ((max((arr_1 [i_0]), 0))) : (arr_1 [1])));
        var_21 = ((((min(((max(41, -1))), (-11277 ^ 40629)))) ? (max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))) : (((((1 ? 29678 : (arr_0 [i_0] [14])))) ? ((((arr_1 [i_0]) & 11277))) : (max(255, (arr_0 [i_0] [8])))))));
        var_22 = (min((((((~(arr_1 [i_0])))) ? (~1) : (arr_1 [i_0]))), ((-32767 ? 15 : (~11277)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_23 = (max((((-27885 * ((1 ? 1 : -19438))))), (min(-26831, ((19 ? -8242 : 11329619564392768637))))));
        var_24 = (min(-26831, -20991));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_25 = (max((arr_5 [i_1]), (max(((0 ? 11277 : 255)), -0))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        var_26 = (min(-255, ((min((arr_10 [i_1] [i_3] [i_1] [i_1]), (min(255, 1)))))));
                        arr_12 [i_1] [i_2] [21] [i_4 + 1] = (((arr_8 [i_3]) ? ((-32767 ? (arr_2 [i_4 + 1]) : (15 % 18446744073709551593))) : (((((var_8 ^ (arr_9 [i_2] [i_2])))) ? 18446744073709551615 : (~-26347)))));
                    }
                }
            }
        }
        arr_13 [i_1] [i_1] = (((((((((arr_10 [15] [i_1] [i_1] [i_1]) ? 8191 : (arr_6 [1] [i_1] [i_1])))) ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : ((min((arr_11 [i_1] [i_1] [i_1] [16]), (arr_6 [i_1] [i_1] [i_1]))))))) ? ((max(128, (arr_9 [i_1] [i_1])))) : -32767));
        arr_14 [i_1] = ((((((!11329619564392768637) / (((arr_5 [i_1]) ^ (arr_7 [i_1] [i_1] [i_1] [i_1])))))) ? (min(((min(var_9, (arr_7 [i_1] [i_1] [12] [i_1])))), 4486591113886106258)) : (((((((max(0, (arr_2 [i_1]))))) >= (min(29678, -4486591113886106259))))))));
    }
    var_27 = min(11277, -12549);
    #pragma endscop
}
