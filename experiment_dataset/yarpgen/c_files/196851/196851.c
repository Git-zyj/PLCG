/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((min((-899669881 != 17), (max(var_2, var_14)))), ((min((255 == var_3), (var_16 / var_8))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_20 = (i_0 % 2 == 0) ? (((((var_7 ? (min(var_4, (arr_3 [i_0]))) : ((min((arr_3 [i_0]), (arr_0 [i_0])))))) * (((((var_15 ? var_17 : 1)) >> (((arr_0 [i_0]) + 879588054)))))))) : (((((var_7 ? (min(var_4, (arr_3 [i_0]))) : ((min((arr_3 [i_0]), (arr_0 [i_0])))))) * (((((var_15 ? var_17 : 1)) >> (((((arr_0 [i_0]) + 879588054)) - 422493827))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_21 &= 0;
                        var_22 = (min(var_22, (((((max((arr_7 [1] [6]), ((max(0, var_11)))))) ? 116 : (((((arr_2 [i_0] [i_1]) ? 1315925338 : (arr_5 [i_0 - 3] [i_0 - 3] [7] [i_3]))))))))));
                        arr_11 [i_0] [i_0] [i_0] [5] [i_0] [i_3] = (max((((((0 ? 0 : -24705))) ? var_15 : (min(var_5, (arr_8 [i_0 - 3] [4] [i_2] [i_3]))))), (((-((min(125, (arr_3 [i_1 + 2])))))))));
                    }
                }
            }
            var_23 = var_11;
            var_24 ^= (min(32705, 16383));
        }
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            var_25 -= ((((-(arr_0 [i_4]))) <= (arr_5 [i_0] [i_0 - 2] [i_0 - 2] [13])));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    {
                        var_26 -= (min(((var_1 ? ((max(var_6, var_5))) : var_11)), (~var_13)));
                        var_27 = (arr_14 [i_5] [i_5]);
                        arr_19 [i_0] [i_4] [i_5 + 1] [i_4] [i_6 - 2] = ((((((((~(arr_15 [i_0])))) ? (min(4294967295, -69)) : 30))) ? ((min((arr_5 [i_6 + 1] [i_5] [i_4] [1]), var_12))) : (((((((arr_18 [i_5]) + (arr_9 [1] [0] [1] [i_4])))) && 1)))));
                        var_28 = (min((max((((-(arr_5 [i_4] [i_4] [i_0] [i_6])))), (((arr_10 [i_0] [i_4] [i_4] [i_5] [i_5] [i_6]) ? var_8 : var_18)))), var_13));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_25 [i_0] [i_0] [i_0] = (arr_3 [i_0]);
                        var_29 &= (((arr_14 [i_0] [i_0]) <= (arr_21 [i_0] [i_0])));
                        var_30 -= -32722;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_31 &= (max((((((var_0 ? var_18 : -8))) ? (arr_12 [i_0]) : ((max(var_15, 4294967282))))), (arr_3 [i_10])));
                        var_32 = (min((((!(arr_6 [i_0] [i_0] [i_10] [i_10])))), (min((arr_28 [i_9 + 1] [i_9 + 1] [i_10] [i_10]), (arr_6 [i_0] [i_9 - 3] [i_9] [i_9])))));
                    }
                }
            }
        }
        for (int i_11 = 2; i_11 < 13;i_11 += 1)
        {
            var_33 -= var_7;
            var_34 = (min(var_34, (max((arr_33 [i_0 + 1] [i_11 - 2] [i_11]), ((max(0, -14)))))));
        }
        var_35 = ((var_16 | var_8) - (max(((136 ? var_10 : -1)), 1)));
        var_36 -= var_0;
    }
    #pragma endscop
}
