/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (min(-3657, (min((~var_4), (max((arr_1 [i_0]), var_4))))));
        arr_4 [1] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_11 = 1330383031;
        arr_7 [i_1] [i_1] |= (((arr_1 [i_1]) ? ((min(3653, 1))) : ((0 & (arr_1 [i_1])))));
        arr_8 [i_1] [i_1] |= (((((3657 ? (arr_0 [i_1] [i_1]) : (arr_2 [i_1] [i_1])))) ? (min(var_0, ((27845 ? -3972059933136236061 : 27865)))) : -0));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_12 = var_2;
                    var_13 = (arr_12 [i_4]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_14 = (~3875150007500724965);
                    var_15 = (max(var_15, ((((((!(((-944565938737252768 ? (arr_19 [i_6]) : (arr_12 [i_6]))))))) > (arr_13 [i_2] [i_2] [i_2]))))));
                    var_16 = (arr_10 [i_5 - 1] [i_5 - 3]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_17 = (max(var_17, ((((arr_22 [i_2] [i_2]) != (((arr_19 [i_2]) ? 12885334889400158355 : (((6955 % (arr_20 [i_2] [9] [i_2])))))))))));
                    var_18 = (arr_15 [i_2] [i_2] [i_2]);
                    var_19 = ((((max(65167, (arr_13 [i_2] [17] [9]))) ? (((!(arr_23 [i_2] [i_7] [i_8])))) : (((!(arr_12 [i_2])))))));
                    var_20 = (max(var_20, ((min((max(12885334889400158355, var_6)), 28947)))));
                    var_21 = (((((-(arr_21 [i_2] [i_7] [i_7] [i_7])))) ? (((~(arr_15 [i_8] [i_8] [i_8])))) : (max(((min(368, (arr_24 [i_2] [i_7])))), -7532160986998274265))));
                }
            }
        }
    }
    var_22 = ((-1330383026 ? var_2 : -6334364784413505308));
    #pragma endscop
}
