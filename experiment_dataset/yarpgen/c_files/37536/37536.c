/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (max((--31992), var_12));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = ((-(min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        var_20 = (max(1248776766273765248, ((~(arr_1 [i_0] [i_0])))));
        var_21 = ((((max((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) ? ((((((arr_2 [i_0] [0]) ? var_2 : (arr_1 [11] [18])))) ? 1248776766273765248 : var_9)) : -1248776766273765249));

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_22 = 1565317744066625933;
            var_23 = -var_15;
            var_24 = var_10;
            var_25 = (arr_3 [i_0] [i_1]);
        }
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            var_26 = (min(var_26, (arr_9 [7])));
            arr_11 [i_0] [i_0] |= (max(var_15, -2115997561));

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_27 = (min((min(20041, 0)), ((max(1, (arr_8 [i_3] [i_2 - 1]))))));
                var_28 = var_16;
            }
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                var_29 = (max(((((arr_5 [i_2] [i_2] [i_2]) / (arr_12 [i_0] [i_2 + 1] [i_4])))), (min(0, (max(1248776766273765227, 2115997561))))));
                var_30 = ((243 ? 142 : ((((((arr_7 [i_4] [i_2] [i_0]) ? (arr_10 [i_4] [i_2]) : (arr_9 [i_4])))) ? ((max((arr_1 [i_0] [i_0]), var_4))) : (arr_15 [i_0] [i_0] [i_4] [i_4])))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_31 ^= 1862083642227487508;
                var_32 = (arr_20 [i_2 - 2] [i_2] [i_2 - 2] [i_2]);
                var_33 = var_10;
            }
            for (int i_6 = 4; i_6 < 19;i_6 += 1)
            {
                var_34 = (min(var_34, var_6));
                var_35 = (min(((var_3 ? var_2 : ((1 ? 1248776766273765252 : 15127967411532031237)))), (arr_18 [i_0] [i_0] [i_0] [i_0])));
                var_36 = (max(var_36, var_15));
                var_37 = (arr_0 [i_2] [i_6 + 1]);
            }
            arr_23 [i_0] = var_9;
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_38 = (min((arr_12 [i_0] [i_2] [i_7]), (min(-1248776766273765228, 114))));
                            var_39 *= (arr_0 [i_0] [10]);
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_40 = (((arr_34 [8]) ? ((((((arr_16 [14]) & var_12))))) : (max((min((arr_9 [i_0]), (arr_19 [i_0] [i_0] [i_0] [i_0]))), (max((arr_19 [i_0] [i_0] [i_0] [i_0]), (arr_32 [i_10] [1] [i_10] [i_0] [i_0] [i_10])))))));
            var_41 = (16 > var_2);

            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_42 = var_7;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_43 = (arr_16 [i_0]);
                            var_44 = (min(var_44, ((((!65523) != var_2)))));
                            var_45 = 2115997567;
                            var_46 = ((((max((var_16 < var_8), (arr_0 [i_11] [i_13])))) ? var_12 : var_9));
                            var_47 = var_3;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    var_48 = var_1;
                    var_49 = (min(var_49, (arr_37 [i_15] [i_15] [i_15])));
                }
                var_50 = (min(var_50, (((arr_15 [i_0] [i_10] [i_14] [i_10]) ^ var_9))));
            }
        }
        var_51 = (max(1562679553808267920, 66));
    }
    #pragma endscop
}
