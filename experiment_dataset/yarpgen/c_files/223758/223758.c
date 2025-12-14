/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 += min(677760014, var_17);
        arr_2 [i_0] [14] = ((arr_0 [i_0]) ? (max(var_2, var_13)) : 716906610);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_0 [1]);
                    var_20 = (max(-334049007, 6299067097797269281));
                }
            }
        }
        var_21 = (max(var_21, ((max((max(var_11, (min(38694, var_7)))), (min((arr_1 [i_0] [i_0]), (-9223372036854775807 - 1))))))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = (0 <= (min(var_17, ((max(var_0, 487774884))))));
        var_22 |= (min((!var_14), (max(7437595812183189656, (arr_10 [2])))));

        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            arr_15 [i_3] [i_3] = (min((1427575347 & var_13), var_18));
            arr_16 [i_3] [i_3] = ((!((max(-10, (arr_10 [i_3]))))));

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_19 [i_3] [i_3] [i_3] [i_5] = (min(-1, ((max(7437595812183189675, 7627920743313429783)))));
                var_23 = (((max((arr_17 [i_4 - 1] [i_4] [2]), -43)) <= ((((var_4 || (arr_17 [i_4 - 1] [i_4] [i_4 - 1])))))));
                var_24 = (arr_13 [i_3] [i_4 + 2] [i_4]);
            }
        }
        arr_20 [i_3] = ((((min(var_10, (max(9223372036854775807, 4292870144))))) ? (((min((arr_14 [i_3] [i_3]), 38381)))) : var_2));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_25 = (arr_18 [i_6] [1] [i_6] [0]);
        var_26 += (((((var_5 >> (((arr_14 [i_6] [i_6]) - 11495))))) ? (var_10 / var_15) : (arr_22 [i_6] [i_6])));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_27 = ((((min(334049005, (arr_23 [i_9])))) ? ((var_17 ? (~677759994) : -var_16)) : ((4071337892964215937 ? 677760014 : 125))));
                var_28 = (max((min((arr_26 [i_7] [i_8 - 3] [i_8 + 1]), (arr_24 [i_7] [0]))), var_16));
                arr_29 [i_7] [i_8 - 2] [i_9] = (min((min(9223372036854775786, ((-(arr_23 [i_7]))))), (((((max((arr_18 [i_7] [i_7] [0] [i_7]), (arr_26 [7] [i_8] [i_8])))) ? (var_6 == var_3) : ((1744590852 ? 123 : -17035)))))));
            }
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                arr_34 [i_10] [i_8] [1] = 3580845790;
                arr_35 [i_10] [i_8] [i_7] = ((-(arr_18 [i_8] [i_8 + 1] [i_8 + 3] [i_8 - 3])));
            }
            for (int i_11 = 1; i_11 < 18;i_11 += 1)
            {
                var_29 = ((1700563669 ? (min((arr_18 [i_7] [12] [12] [12]), ((((arr_27 [i_7] [12] [i_11]) ? var_8 : (arr_31 [i_7] [i_8 + 3] [i_11] [i_7])))))) : ((max(9223372036854775807, (arr_32 [i_11 + 2] [i_8] [i_8 + 3]))))));
                var_30 = 334049007;
            }
            arr_40 [1] [i_8] [i_8] = (((min(var_18, -17035))));
        }
        var_31 += (min(((-(arr_17 [i_7] [i_7] [i_7]))), ((min(406842952, 1502757107)))));
        var_32 *= (((((((min(4294967275, var_11))) ? var_1 : (arr_26 [i_7] [i_7] [i_7])))) ? ((min(226, 1607761515))) : ((~(max(var_7, var_18))))));
        arr_41 [i_7] = (((((arr_22 [i_7] [i_7]) ? (arr_22 [i_7] [i_7]) : var_6)) << (((((arr_22 [i_7] [i_7]) ? (arr_22 [i_7] [i_7]) : (arr_22 [i_7] [i_7]))) - 15436101544552841250))));
    }
    var_33 = (max(((((((var_12 ? var_5 : var_0))) ? ((var_17 ? 1028 : var_13)) : ((min(0, 51)))))), ((((max(var_4, var_17))) ? var_5 : (max(var_13, var_11))))));
    var_34 += var_10;
    #pragma endscop
}
