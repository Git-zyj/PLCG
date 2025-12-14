/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = ((~(arr_2 [i_0 + 3])));
        var_20 = (min(var_20, ((min((max((-9223372036854775807 - 1), 10)), (arr_1 [i_0]))))));
        var_21 = ((+(min((((var_16 ? (arr_3 [i_0]) : 578653526))), (max((arr_3 [i_0 - 2]), -9223372036854775805))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_22 = (min((max(((~(arr_5 [i_1]))), var_7)), (min((arr_0 [i_1 + 2]), (arr_3 [i_1 + 4])))));
        var_23 = ((~(((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 3]) : var_5))));
        arr_7 [i_1 + 3] = (max(9223372036854775807, 9223372036854775807));
        var_24 -= ((0 ? (((!(arr_1 [i_1 + 4])))) : ((((-7322364930013942534 && (arr_6 [i_1]))) ? ((max(var_4, 1))) : (((!(arr_5 [i_1]))))))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_25 = (max(var_25, ((min((max(var_10, (arr_11 [i_1 + 2] [8] [i_1 - 1] [i_3]))), (((9223372036854775807 ? 3 : 57344))))))));
                var_26 += var_12;
            }
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                var_27 = ((((min((min((arr_5 [i_2]), var_12)), (arr_14 [i_4 - 2] [i_2] [i_2] [i_1 - 1])))) ? (((max((!-71991832082796146), var_15)))) : ((((max(-7349467640348666330, -107))) ? 1 : 9223372036854775807))));
                arr_16 [i_2] [i_2] [i_2] = -9223372036854775807;
                var_28 = (!var_8);
                arr_17 [i_1] [i_2] = (arr_2 [i_1]);
            }
            arr_18 [i_2] = ((((max((arr_0 [i_1 + 3]), 1073479680))) ? ((~(~-9223372036854775807))) : ((min((((~(arr_1 [i_1])))), (min(var_7, (arr_11 [i_1] [i_2] [i_2] [i_2]))))))));
            var_29 = (((((max(var_7, (arr_3 [i_1 + 1])))) ? (arr_6 [i_1]) : (min((arr_6 [i_1]), 14691)))));
            arr_19 [i_2] [i_2] = ((((max(var_3, (50845 && var_2)))) ? (min(8191, 4294967292)) : (-9223372036854775807 - 1)));
            arr_20 [8] [i_1] [i_2] |= (max(var_1, var_9));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            arr_23 [i_1] [i_5] [i_5] = (max(9223372036854775806, (-9223372036854775807 - 1)));

            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                arr_26 [i_1] [i_5] [i_6] = (+(((arr_5 [i_1 + 1]) / (arr_5 [i_1 + 1]))));
                arr_27 [1] = (!-843858572);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_30 &= var_3;
                            arr_35 [i_1] [2] [15] [i_7 + 1] [i_1] = 18446744073709551615;
                            arr_36 [i_1] [i_1] [i_1] [i_1] = var_0;
                            arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((((!(arr_9 [i_8] [i_5]))) ? ((8796093022207 ? 0 : 1025000172471152184)) : ((min(54114, (arr_24 [i_1] [i_5] [i_6])))))) ^ (var_6 - 8210)));
                            arr_38 [i_1 + 2] [i_1 + 2] [i_1 + 2] = var_5;
                        }
                    }
                }
                var_31 = (max(var_31, var_16));
            }
            arr_39 [i_1] [i_5] = ((((((min(var_7, (arr_1 [i_5])))) ? (max(var_16, (arr_6 [i_5]))) : var_17)) == ((((min((arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [11] [i_5]), (arr_6 [10])))) ? 57326 : (arr_21 [i_1 - 1] [i_1 + 2])))));
            arr_40 [i_5] = (~63);
        }
    }
    var_32 = (min(((2459760315 ? (max(var_9, var_3)) : var_10)), var_18));
    #pragma endscop
}
