/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (90 == 0);
    var_20 = (((0 & 0) ? (((-11436 + 2147483647) >> (8472241035268728607 - 8472241035268728597))) : 28986));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = (((arr_3 [i_0]) ? (8472241035268728607 - -11436) : ((((max(8472241035268728607, var_2)))))));
        var_22 = 8472241035268728602;
    }
    var_23 = (max(var_23, 20));

    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_24 ^= ((((max(25378, ((1 ? (arr_2 [i_1] [i_1]) : (arr_3 [i_1])))))) ? (arr_3 [i_1]) : ((((min((arr_3 [i_1]), (arr_2 [i_1] [i_1])))) ? (arr_0 [i_1]) : (((arr_2 [i_1] [i_1]) ? var_3 : (arr_0 [i_1])))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_25 = (26 ? 2361844448753921237 : 8472241035268728607);
                    arr_11 [i_1] [i_2] [i_3] = 1668067674;
                }
            }
        }
        arr_12 [i_1] = var_18;
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_19 [i_5] [i_4] [i_1] = (min((max(-2361844448753921237, (arr_8 [i_1 - 1]))), (max((arr_8 [i_1 + 1]), (arr_8 [i_1 + 1])))));
                    var_26 = (arr_13 [i_5] [i_4] [i_1]);
                    arr_20 [i_1] [i_1] [i_1] [i_1] = ((var_15 ? ((-11436 ? 9974503038440823008 : 1)) : 167));
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        var_27 = (arr_22 [i_6]);
        var_28 = (max(((10638 ? 9974503038440823009 : 255)), (((((8472241035268728602 ? var_10 : 13620)) & -236611374)))));
        arr_23 [i_6] = ((~(25378 + 79)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_29 = (((+-1754291572) | (arr_25 [i_6] [i_7])));
                    var_30 = 9974503038440823014;
                }
            }
        }
    }
    #pragma endscop
}
