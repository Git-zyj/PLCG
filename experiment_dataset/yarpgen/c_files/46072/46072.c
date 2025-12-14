/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = var_3;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= ((-148176876 ? -7957 : 7935));
        var_18 = ((((((min(7955, 2030200569937653478))) ? 1 : ((15190389819171749814 ? -7957 : 0))))) ? (((((arr_0 [i_0]) / var_15)) | (arr_0 [i_0]))) : (((((((16416543503771898137 ? (arr_1 [i_0]) : var_14))) && (((137438887936 ? var_15 : var_4))))))));
        var_19 = (max(var_19, ((((arr_0 [i_0]) - ((var_1 - (arr_0 [i_0]))))))));
        var_20 = (max(var_20, (((-(((!((((arr_1 [i_0]) + 0)))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [16] |= -10118;
        var_21 += 237;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_3] = (arr_6 [i_1]);
                    var_22 = ((!(arr_11 [i_1])));
                }
            }
        }
        var_23 = (min(var_23, (((2475057938507104809 != -5269923181272456172) / 1148417904979476480))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_24 = (min(var_24, (!5269923181272456167)));
        var_25 = (arr_4 [i_4]);

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_19 [i_4] = var_5;
            var_26 = ((!(arr_17 [i_4])));
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_27 = (min(var_27, (!5269923181272456172)));
                            var_28 += (min(((max((arr_22 [i_8] [i_9]), (max(var_11, 7962))))), (min(var_9, (arr_20 [i_7] [16])))));
                            var_29 = (max(15971686135202446806, ((((arr_24 [i_10]) ? (arr_24 [i_6]) : (arr_24 [i_7]))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_30 = (((arr_32 [i_6]) ? (arr_32 [i_11]) : (arr_32 [i_7])));
                            arr_34 [i_11] [i_6] = -var_1;
                            var_31 = (arr_28 [i_6] [i_6]);
                        }
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            var_32 = (((((14897080631043286587 ? (arr_26 [i_6] [17] [i_6] [i_9]) : 249))) != ((6970954795922654390 ? -3581869741324623042 : -619069659289160389))));
                            var_33 |= (min((~-101), (((((2030200569937653478 ? 56217 : (arr_31 [i_6] [i_6])))) ? (max(var_0, var_10)) : var_14))));
                        }
                        arr_39 [i_6] [i_6] = min(((((0 ? -3565170257707114543 : var_15)))), (arr_25 [i_6] [i_7]));
                        arr_40 [i_6] [i_8] [i_6] = (((((min(14, 13379)))) / ((-(min(-443458024, -7983121616958661278))))));
                        var_34 = ((((arr_28 [i_6] [i_9]) * var_12)));
                    }
                    var_35 = ((var_4 ? 536870912 : var_13));
                }
            }
        }
        var_36 = (!24);
    }
    #pragma endscop
}
