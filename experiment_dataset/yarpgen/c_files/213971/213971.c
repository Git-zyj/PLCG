/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -124;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = -1548176426;

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_13 &= (max(((min((arr_0 [i_0]), (arr_0 [i_0])))), (arr_0 [i_0])));
            arr_5 [i_0] = ((var_9 || ((((arr_2 [i_1] [i_0]) - 8096031444181267443)))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_14 = (max((((arr_0 [i_0]) ? (arr_0 [i_2]) : (arr_0 [i_2]))), ((min(var_2, (8096031444181267443 || var_9))))));
            arr_9 [i_0] = 8096031444181267459;
            var_15 = (min(var_15, 8096031444181267450));

            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] = ((((arr_4 [i_0] [i_3]) && (arr_13 [i_0] [i_0] [3] [i_0]))) ? ((((((arr_2 [14] [i_3]) ? (arr_7 [i_0] [14] [14]) : (arr_11 [i_0])))) ? ((min(var_6, (arr_8 [i_3])))) : (-106 * 10350712629528284161))) : ((((!(arr_4 [i_0] [i_0]))))));
                var_16 = (min((((~(arr_7 [i_0] [i_2] [i_3])))), ((var_6 - (10350712629528284173 ^ var_1)))));
                var_17 ^= ((!(arr_11 [i_3])));
                arr_15 [i_0] = ((+((min((arr_13 [i_0] [1] [i_3] [i_3]), (arr_13 [i_0] [i_0] [i_0] [i_0]))))));
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
            {
                var_18 = (max((arr_13 [i_0] [i_2] [i_2] [i_4]), (arr_13 [i_0] [i_2] [i_2] [i_0])));
                var_19 = ((min(-68, (arr_17 [i_0] [i_0] [i_0] [i_4]))));
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_22 [i_5] = ((max(var_3, var_8)));
        arr_23 [9] = (((((((arr_2 [i_5] [i_5]) / 10350712629528284173)))) ? ((min((arr_3 [i_5]), (arr_3 [i_5])))) : (+-68)));
        var_20 |= (((min(((var_6 ? var_0 : var_8)), ((var_2 ? var_4 : var_3))))) ? var_2 : (max(((max((arr_13 [8] [8] [2] [i_5]), var_7))), (arr_20 [i_5] [i_5]))));
    }
    var_21 = (min(((((((var_4 ? var_3 : var_8))) || var_9))), var_8));
    #pragma endscop
}
