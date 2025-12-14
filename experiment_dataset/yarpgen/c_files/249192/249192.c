/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 |= arr_0 [2];
        var_20 = (max(var_20, (((((min(251, 18446744073709551603))) ? (((max((arr_1 [i_0]), (arr_1 [i_0]))))) : ((63 ? (((arr_0 [i_0]) ? -958211733347460277 : (arr_0 [i_0]))) : ((~(arr_0 [i_0]))))))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_4 [i_1] [11] = ((((((!(((~(arr_2 [i_1])))))))) <= var_6));
        var_21 += (arr_3 [6]);
        var_22 = (min(var_22, (((var_0 ? ((-(arr_3 [i_1 - 2]))) : ((34348 ? (((~(arr_2 [i_1 - 1])))) : ((var_6 & (arr_3 [i_1]))))))))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    {
                        var_23 = (max(var_23, (((((((var_8 > (arr_13 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]))) ? ((max(-1, var_10))) : (max(4497385692520730103, var_6)))) * (arr_6 [2] [2] [12]))))));
                        var_24 = (min(var_24, (max((arr_11 [6] [i_2] [i_2] [8] [i_4]), ((((((arr_3 [i_1]) || (arr_10 [0] [i_2] [i_2] [i_3] [i_3] [i_4]))) && 1)))))));
                        arr_14 [i_1] [i_2 - 1] [6] [i_2] = (max(251, (((!(arr_8 [i_1] [i_4 + 2] [i_3]))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_25 = (max(var_25, (((((max((max((arr_15 [i_5]), (arr_18 [i_5]))), (((arr_15 [i_5]) / (arr_15 [i_5])))))) ? (max(((max(var_15, (arr_18 [i_5])))), ((var_12 ? 10840616948560800200 : (arr_18 [i_5]))))) : ((((!(arr_15 [i_5]))))))))));
        arr_19 [1] |= ((((!var_2) ? (((!(arr_18 [i_5])))) : ((-(arr_17 [16] [i_5]))))));
        arr_20 [i_5] [i_5] = ((3008459098 + ((((((min((arr_18 [17]), 3141900887295721472))) || 553132486))))));
        arr_21 [i_5] [i_5] = (max((min(58436, 1)), (((!(arr_16 [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_24 [i_6] = (((~var_8) ? (arr_17 [i_6] [i_6]) : (((arr_23 [i_6] [i_6]) ? (arr_18 [i_6]) : (arr_17 [i_6] [i_6])))));
        var_26 = (~var_7);
    }
    var_27 = ((((max((var_17 + 17939), var_5))) == var_16));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 16;i_8 += 1)
        {
            {
                arr_31 [i_7] [i_8] = 12288331253470739960;
                arr_32 [i_7] [i_8] = (-9223372036854775807 - 1);
            }
        }
    }
    #pragma endscop
}
