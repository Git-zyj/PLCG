/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_0] [i_1] = var_6;
                        arr_12 [i_2] [i_2] [i_2] [6] = var_0;
                        arr_13 [i_2] [i_0] [i_0] [i_2] [i_2] [i_3] = ((((arr_7 [i_2] [i_2]) ? -4125987218195485885 : 4125987218195485874)));
                        arr_14 [i_2] [i_2] [1] [i_2 + 1] [i_2] [i_2] = ((+(max((arr_2 [i_0] [i_2] [i_3]), (arr_2 [i_2 + 1] [i_1] [i_0])))));
                    }
                }
            }
        }
        arr_15 [i_0] = (((((var_6 ? 104 : 4125987218195485874))) * (((var_5 / (arr_5 [i_0] [i_0] [i_0]))))));
        arr_16 [i_0] = (((((var_9 ? ((var_7 ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0] [i_0] [12]))) : var_12))) ? (arr_5 [i_0] [i_0] [7]) : (arr_4 [i_0] [i_0])));
    }
    var_15 = (max((max((4125987218195485908 >= 3283113584), 104)), var_0));

    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        arr_20 [3] [i_4] = 178;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                arr_26 [i_6] [i_5] = (((arr_21 [i_6 + 1]) ? (arr_8 [14] [i_6] [14] [i_4]) : ((1118984339 ? (arr_6 [i_5]) : var_10))));
                arr_27 [i_4] [i_5] [1] = (((arr_9 [8] [1] [i_4 - 2] [i_5]) >= (arr_9 [i_5] [i_5] [i_4 - 1] [i_6 - 1])));
            }
            arr_28 [i_5] [i_4] [4] |= (((arr_6 [i_4 - 1]) && (arr_3 [0] [i_4 - 2])));
        }

        for (int i_7 = 4; i_7 < 8;i_7 += 1)
        {
            arr_31 [i_7] [i_7] [i_4] = ((5 ? (arr_3 [i_4] [5]) : (arr_3 [i_7 - 1] [1])));
            arr_32 [i_4 + 1] [i_4 + 1] [i_7] = (1 && var_5);
            arr_33 [i_4] [i_7] = (max(128, 65534));
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_38 [i_4] [i_4] = (((((77 ? ((max(0, -60))) : 34))) ? var_12 : (!0)));
            arr_39 [i_4] = var_3;
            arr_40 [i_4] = (min(((min(65534, 104))), (arr_30 [i_4 - 1] [i_4] [i_4])));
        }
        arr_41 [2] [i_4] = -4125987218195485885;
    }
    var_16 = 4125987218195485908;
    #pragma endscop
}
