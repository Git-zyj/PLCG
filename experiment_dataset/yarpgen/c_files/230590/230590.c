/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) != ((((((var_3 ? (arr_1 [i_0] [i_0]) : 1)) == 1))))));
        var_18 = 22;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_19 = ((min((-69 <= 66), (-2147483647 - 1))));
                        arr_12 [i_1] [i_2] [i_1] [0] = (((((~(13149368403110587432 & var_11)))) ? (max(var_3, 2584308947)) : ((-2007247488 & (~1)))));
                        arr_13 [i_2] = 1116892707587883008;
                        var_20 = (-2147483647 - 1);
                    }
                }
            }
            arr_14 [i_1] [i_2] [i_2] = (((((((max(3138310025016747557, -1220140739))) ? 31081768 : (arr_9 [i_1] [i_1])))) ? ((min(4549437946023507545, 1))) : 1));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        var_21 = var_2;
                        arr_22 [i_2] [i_2] [i_1] [i_6] = (max(27205, (arr_8 [i_1] [i_2] [i_5] [7])));
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            arr_26 [i_1] [i_7 + 2] [3] = ((+(((arr_18 [i_7 + 2]) * 18446744073709551602))));
            arr_27 [i_1] = var_15;

            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                arr_32 [1] [1] [i_1] [i_1] = 447490263;
                var_22 = ((min(((var_3 - (arr_15 [i_1] [i_1] [i_1])), 1))));
                arr_33 [i_1] [i_1] [i_1] [i_1] = ((!(arr_10 [i_1] [i_1])));
                var_23 = (!((min((arr_4 [3] [i_7 - 1]), 3300495089))));
            }
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_24 = (min((arr_15 [i_1] [i_1] [i_9]), (arr_15 [i_1] [i_9] [i_9])));
            arr_38 [i_1] = ((73 ? ((((min(var_8, 18409037251215828366))) ? ((65518 ? (arr_5 [i_1]) : (-2147483647 - 1))) : (var_1 % 4294967291))) : ((min((min(var_17, 7757)), (!-1220140724))))));
            var_25 = (max(197, ((max(var_9, var_15)))));
        }
        var_26 = ((var_9 ? (--171) : ((min((arr_0 [i_1]), (arr_24 [i_1] [i_1] [i_1]))))));
        arr_39 [i_1] = 1220140738;
        arr_40 [i_1] [i_1] = var_3;
        var_27 = (max(var_27, ((max(((-(arr_18 [i_1]))), ((max(1, 65516))))))));
    }
    /* LoopNest 2 */
    for (int i_10 = 3; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 16;i_11 += 1)
        {
            {
                arr_46 [4] [4] = ((((((!(arr_41 [i_10] [i_10]))) ? (!20427) : (!65505)))) ? -3185556915650612961 : (((15280 ? (arr_0 [i_11 + 1]) : (arr_41 [i_10 + 4] [i_11 + 1])))));
                arr_47 [i_11] = (!-78);
                var_28 = (max((((!(arr_43 [i_10 + 1] [i_10 - 2])))), (arr_43 [i_10 - 3] [i_10 - 3])));
            }
        }
    }
    #pragma endscop
}
