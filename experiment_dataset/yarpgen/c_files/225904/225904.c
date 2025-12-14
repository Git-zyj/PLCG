/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!var_2) ? var_11 : -var_1));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_14 -= (((((((var_3 - (arr_0 [i_0])))) * (arr_2 [10]))) ^ var_3));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_15 = ((((!(((-(arr_3 [i_0] [i_0])))))) ? var_6 : var_9));
            var_16 += ((((!(arr_3 [9] [i_0]))) ? (arr_4 [i_1] [i_1 - 2] [i_1 + 1]) : (((((arr_3 [i_0] [i_0]) & var_4)) | (arr_1 [i_1 + 2])))));
            var_17 = (((!var_10) ? (((((((~(arr_4 [i_0] [i_0] [i_1 + 1]))) + 2147483647)) << ((((((-(arr_1 [i_1 + 1]))) + 7970693975301940140)) - 9))))) : -1));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_2] [i_0] = ((~((~(max(-1, (arr_6 [i_0])))))));
            arr_8 [5] = ((+(((min((arr_1 [i_2]), var_10)) / ((2 ? -5 : (arr_4 [i_2] [i_2] [6])))))));
            var_18 = (min(var_18, ((((((~(arr_0 [i_0])))) | ((((((arr_3 [i_0] [i_0]) ? (arr_1 [i_2]) : var_4))) ? (arr_3 [9] [i_0]) : (((arr_3 [i_0] [i_2]) ? (arr_0 [i_0]) : (arr_5 [i_2] [i_0] [i_0]))))))))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_19 = (5 || 14214);
            var_20 = (((max(var_5, var_3))) ? (!362968541) : ((((arr_5 [i_0] [i_0] [i_0]) > (arr_5 [i_3] [i_3] [i_0])))));
            var_21 |= ((!(((var_0 | (((arr_2 [i_3]) * (arr_9 [i_0]))))))));

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                arr_16 [i_0] = ((((((max(2393557381, 5)) << ((((4161476604 ? 1298116130 : -118)) - 1298116119))))) && ((((arr_12 [i_0] [i_3] [i_3] [i_4]) ? var_4 : var_8)))));
                var_22 = (min(((var_2 ? (arr_6 [i_0]) : (5 || 1901409914))), var_0));
            }
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                var_23 = ((((max((arr_18 [i_0] [i_3] [i_5 + 3]), (arr_18 [2] [i_0] [i_5 + 3])))) * (((arr_18 [i_0] [i_3] [i_5 - 1]) & (arr_18 [i_0] [4] [i_5 + 3])))));
                arr_20 [i_0] [6] [i_5 + 2] [i_5] = ((max((((var_8 ? (arr_10 [i_0] [i_0]) : 1767775503))), (((arr_6 [i_0]) ? var_2 : (arr_10 [i_5 + 2] [i_3]))))));
            }
            arr_21 [i_0] [10] = ((!((min((((var_11 <= (arr_5 [2] [5] [6])))), (~var_5))))));
        }
        var_24 = (((~53668) % var_2));
        var_25 = var_4;
        var_26 -= (max(((var_9 * (((arr_14 [i_0] [i_0] [i_0]) - (arr_11 [i_0]))))), (((((arr_19 [i_0] [i_0]) ? var_10 : (arr_11 [i_0]))) >> (((var_5 < (arr_9 [i_0]))))))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_27 = (arr_19 [i_6] [i_6]);
        arr_26 [i_6] = ((((((arr_17 [i_6] [i_6]) + (5700 - 1901409914)))) ? (((arr_15 [i_6]) ? (arr_18 [i_6] [i_6] [i_6]) : (max(var_8, -5)))) : (((((-626861515 >= (arr_24 [i_6] [i_6]))))))));
    }
    var_28 = (!-var_6);
    #pragma endscop
}
