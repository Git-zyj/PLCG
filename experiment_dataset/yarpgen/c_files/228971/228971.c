/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 37737;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? (max(5574, -814575528744719354)) : ((((min((arr_1 [i_0]), (arr_1 [i_0]))))))));
        arr_3 [i_0] = ((((((((arr_1 [13]) ? (arr_1 [i_0]) : (arr_0 [i_0] [8])))))) > (((((6506 ? (arr_0 [i_0] [i_0]) : -814575528744719354))) ? (arr_1 [i_0]) : ((14867 ? 3334204673 : 143))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_10 [i_1] = (((((max((arr_4 [i_0]), (arr_7 [i_0] [i_0])))) + (((arr_7 [i_0] [i_0]) ? var_9 : (arr_9 [i_1]))))));
                        var_16 = (max(var_16, (((((min((48754 * 5585), (((-32767 - 1) ? var_1 : (arr_7 [i_1] [i_3])))))) ? ((((((var_4 ? (arr_4 [i_0]) : var_2))) ? (arr_5 [i_2 - 3]) : ((max((arr_1 [i_1]), (arr_1 [i_1]))))))) : ((((((arr_7 [i_0] [i_1]) ? (arr_0 [i_0] [i_1]) : (arr_4 [13])))) ? ((max(1639673852, 1))) : (((arr_9 [i_2]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [15]))))))))));
                        arr_11 [i_0] [i_2] [i_3] = (((arr_7 [8] [i_3]) ? ((((arr_6 [i_3] [i_3] [1]) ? 3944638078 : (arr_7 [i_0] [i_1])))) : (arr_5 [i_2])));
                    }
                }
            }

            for (int i_4 = 4; i_4 < 20;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_17 = (arr_17 [i_0] [i_1] [i_1] [4]);
                            arr_19 [i_0] [i_1] [i_4] [i_5] [i_6] = ((!((min(6665572820341779626, (arr_5 [i_1]))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (~14873);
                        }
                    }
                }
                arr_21 [i_0] [i_0] [i_0] = (((arr_1 [i_4]) ? ((min((arr_18 [i_4 - 1] [i_4 + 1] [i_4 - 4] [i_4] [i_4]), (arr_18 [i_4 - 4] [i_4 + 1] [i_4 - 2] [i_4] [i_4])))) : ((max(((min(1, 113))), 6665572820341779626)))));
            }
            arr_22 [i_0] [i_0] [i_0] = (min((((960762623 - (arr_7 [i_0] [i_1])))), (max((((arr_9 [i_0]) ? (arr_12 [i_0] [i_0]) : (arr_7 [i_0] [i_0]))), -3976505062140778110))));
        }
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_18 = ((var_12 ? ((((((17000 ? var_4 : (arr_24 [9] [i_7])))) ? -32758 : (1 < var_10)))) : (arr_7 [i_7] [i_7])));
        arr_25 [i_7] [i_7] = arr_9 [i_7];
        arr_26 [4] = (max((arr_17 [i_7] [i_7] [i_7] [i_7]), ((((max((arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]), var_6))) != (((arr_9 [i_7]) ? (arr_15 [i_7]) : var_4))))));
        arr_27 [i_7] = ((arr_17 [i_7] [i_7] [17] [i_7]) ? (arr_17 [i_7] [i_7] [i_7] [i_7]) : (((1900 ? 65535 : 18022))));
        arr_28 [i_7] = var_11;
    }
    #pragma endscop
}
