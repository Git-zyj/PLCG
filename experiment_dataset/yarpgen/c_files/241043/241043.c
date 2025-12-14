/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((!1) ? ((var_10 ? var_16 : var_18)) : ((max(var_12, var_11)))))) ? (((((var_15 ? var_1 : 4258157390)) >= (~var_4)))) : ((((var_9 >= var_12) && (var_12 >= var_11))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_21 = 116;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    {
                        var_22 = ((((arr_8 [i_0] [i_1 - 1] [i_2] [i_3 + 2]) && (arr_8 [i_0] [i_1] [i_2] [1]))) && (((var_14 ? (arr_8 [i_3] [i_2] [i_1 - 3] [i_0 - 1]) : (arr_8 [i_3 - 1] [8] [8] [i_0 + 1])))));
                        var_23 -= 3071960177563017343;
                    }
                }
            }
        }
        var_24 = (max((arr_4 [i_0 - 1] [i_0] [i_0 + 1]), (((((1 ? (arr_4 [i_0 - 1] [i_0] [i_0]) : 0))) ? var_6 : (arr_8 [4] [i_0] [i_0 - 1] [i_0 + 1])))));
    }
    for (int i_4 = 4; i_4 < 9;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_25 = ((~((max(var_13, 43)))));
                    var_26 = ((((+(((arr_13 [i_4 - 1] [i_5] [i_6]) - (arr_8 [i_4 + 2] [i_4 + 2] [1] [i_4 + 2]))))) - (((-43 + (arr_6 [i_6] [6] [i_4]))))));
                }
            }
        }
        var_27 = (226 / 1);
    }
    for (int i_7 = 4; i_7 < 9;i_7 += 1) /* same iter space */
    {
        var_28 = (max(var_28, ((((-127 - 1) ? ((4294967295 ? ((1275744019 ? 32175 : 4404419419830411895)) : 1)) : ((-1 ? (arr_12 [i_7 + 1]) : -4404419419830411896)))))));
        var_29 = ((!(((arr_13 [i_7 - 3] [i_7] [i_7 + 1]) && (((-2310832237863167216 ? (arr_2 [i_7] [i_7] [i_7 - 3]) : 127)))))));
        var_30 = 126;
    }
    /* LoopNest 3 */
    for (int i_8 = 3; i_8 < 8;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    var_31 = ((((max(((((arr_20 [i_8 + 2] [i_8]) ? (arr_26 [i_8 - 3] [6] [i_8]) : (arr_23 [i_8] [i_8])))), ((24 ? (arr_23 [i_10] [i_9]) : var_14))))) >= ((-(arr_7 [i_8 - 3])))));
                    arr_29 [4] [i_9] |= (max((((!(arr_17 [i_8 - 1])))), (max((!var_10), (arr_0 [i_8 - 2])))));
                    arr_30 [i_8] [i_9] [i_8] = (((((((arr_7 [i_10]) >> (((arr_28 [i_8] [i_8]) - 78)))) + (((~(arr_5 [i_8] [i_8] [i_10] [i_10])))))) >= (!var_13)));
                }
            }
        }
    }
    #pragma endscop
}
