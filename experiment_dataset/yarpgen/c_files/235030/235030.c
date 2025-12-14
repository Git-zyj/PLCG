/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    {
                        var_11 = (min(((min(((max((arr_5 [i_0] [i_0] [i_0]), 1))), (min((-2147483647 - 1), (arr_11 [i_1] [i_3])))))), (max((min((arr_8 [i_1] [i_1 - 1]), 0)), ((max((arr_8 [i_0] [i_0]), (arr_8 [i_3] [i_3]))))))));
                        var_12 = (max((max(-104, (max(127, 0)))), 67));
                    }
                }
            }
        }
        var_13 -= max(0, -16);
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_14 = (max((min((max((arr_6 [i_4]), 0)), ((min(3960641397, 127))))), ((max(((max(-53412543, var_5))), (min(2059934462, (arr_10 [i_4 + 1] [i_4] [i_4 + 1] [i_4]))))))));
        var_15 |= (max(((max(((max(var_7, var_10))), (max(var_6, 334325895))))), (min(((min(334325870, 21228))), (min(var_6, (arr_9 [i_4] [i_4 + 1] [2])))))));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_16 = (max(((max((min(var_6, (arr_17 [i_5] [i_5]))), (max(-1910017322, 53412557))))), (max((min((arr_16 [i_5]), var_3)), ((max(-30, (arr_17 [i_5] [i_5]))))))));
        var_17 &= (max(((min((min(-53412544, -5)), (max(var_10, 934637395))))), (max((max(var_4, var_1)), ((max(var_7, 53412557)))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_25 [i_5] [i_5] [i_7] = (min((min(((min(1, (arr_22 [i_5] [i_5] [i_5] [6])))), (max(2748016330, 65535)))), (max(((min(var_5, 802592949))), (min((arr_21 [i_5] [16]), (arr_23 [i_5] [i_7] [i_7])))))));
                    arr_26 [7] [i_6] [7] [i_7] &= (max(((min((min(-53412544, (-2147483647 - 1))), (min(53412539, 31))))), (min((max((arr_21 [20] [i_7]), (arr_23 [i_5] [10] [i_5]))), ((max(-30671, 31)))))));
                    arr_27 [i_5] [i_5] [10] [i_5] = (max((min(((min(19363, 10338))), (min(var_0, (arr_19 [i_5] [i_5] [i_5]))))), (max((max(802592949, -8701905597990375981)), (max(9, var_7))))));
                }
            }
        }
        arr_28 [i_5] = (max((max((max(var_9, -8701905597990375987)), (max(-4620358194203948595, 1)))), ((min(((min(802592949, -53412558))), (min(254, var_9)))))));
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        arr_31 [i_8 - 1] = (min(1, 6490));
        arr_32 [i_8] = (max(((min(65024, (max(1, 802592939))))), (max((max(var_6, 0)), ((max(-61, var_6)))))));

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            var_18 = 53412542;
                            var_19 = 254;
                        }
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_20 = (min((max((min(var_8, 802592939)), ((max((arr_17 [i_11] [i_13]), (arr_8 [14] [i_10])))))), ((max(7, 2)))));
                            var_21 = max(((max(((max(61, 254))), (min((arr_23 [i_8] [i_8 - 1] [i_8]), -1))))), (max((max(-53412518, var_1)), (max((arr_17 [i_11] [i_11]), var_10)))));
                        }
                        var_22 = min((max((min(32765, var_3)), (max(-62, -6676635059728816418)))), (min((max(var_3, var_0)), ((min(-32760, 1))))));
                        arr_44 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_10] [i_8 - 1] |= (min((max((max((arr_6 [1]), 30483)), ((max(65535, (arr_22 [5] [i_9] [i_10] [i_11])))))), ((min(((min(-61, 60))), (min(var_5, (arr_16 [i_9]))))))));
                        arr_45 [i_8] [5] |= (min((min(((max(186, 35080))), (max((arr_3 [i_10]), (arr_5 [i_8] [i_9] [i_10 - 1]))))), ((min((min((arr_41 [i_8] [i_10] [i_8] [i_11] [i_11] [9] [i_10]), -61)), (max(-55, (arr_17 [i_8] [i_8]))))))));
                        arr_46 [i_8] |= (max((min((max(1575369761, -8701905597990375979)), (min((arr_17 [i_8] [i_9]), var_0)))), (min((min(8701905597990375981, 2199023255551)), ((max(2097148, (arr_0 [i_11] [i_9]))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 4; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 12;i_15 += 1)
                {
                    {
                        var_23 ^= (min((max((min((arr_3 [i_9]), (arr_24 [i_14 - 3]))), ((min((arr_0 [i_9] [i_14 - 4]), -56))))), (max((max(var_4, var_0)), (max(592401285, -8701905597990375981))))));
                        arr_51 [i_8] [i_8 - 1] [1] [i_14 - 1] [i_14 - 1] = (max(1610612736, 2147483647));
                    }
                }
            }
            var_24 ^= (max((min((min((arr_35 [i_8 - 1] [i_9] [i_9]), (arr_38 [12] [i_9] [i_9] [i_8] [i_8] [i_8 - 1]))), ((max((arr_8 [3] [i_9]), (arr_48 [i_8] [i_8 - 1] [i_8] [i_9])))))), ((max((min(35075, var_9)), (max(0, 0)))))));
            arr_52 [i_8] [i_8] [i_9] = (max((min(((max((arr_41 [i_9] [i_9] [4] [i_9] [i_8] [i_9] [5]), var_9))), (min(var_10, var_2)))), ((max((min((arr_21 [14] [i_8]), 65531)), ((min((arr_17 [i_9] [8]), (arr_16 [i_9])))))))));
            var_25 ^= (max((max((min(2684354558, var_0)), (max(var_0, (arr_4 [i_8] [i_9]))))), ((max(((min(35047, (arr_11 [i_8] [i_8])))), (max((arr_1 [i_9]), (-2147483647 - 1))))))));
        }
    }
    var_26 = (max(((min(-32764, 4294967290))), (min((min(var_4, var_0)), (min(var_9, var_2))))));
    var_27 = (max((max((max(8701905597990375986, 0)), (max(var_9, var_2)))), (min((min(var_2, 1)), ((max(13981, var_5)))))));
    var_28 = max((max(((max(var_10, var_5))), (min(1, 268419072)))), ((max((max(35075, var_10)), ((min(var_1, var_1)))))));
    #pragma endscop
}
