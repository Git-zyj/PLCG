/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = ((((((1 ? 2610 : 1491837583))) ? (min(120, 2046)) : (!2595))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_18 = (arr_0 [i_0]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_19 &= ((((arr_8 [i_0 - 1]) ? -773007952 : (arr_12 [8] [i_3 - 1] [i_4]))));
                            var_20 = (((arr_11 [i_2]) ? ((((((arr_4 [17] [7] [i_0]) ? -2639 : (arr_8 [i_2])))) ? ((min((arr_3 [i_0] [i_3] [i_0]), (arr_4 [i_2] [i_1] [i_4])))) : 1)) : 1040070194));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_21 = (!2031);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] [8] &= ((!((min((arr_15 [i_8] [i_8 + 1]), 0)))));
                            arr_24 [i_0] [4] [i_0] [i_0] [i_8] = (((((14465815247355328325 ? (arr_3 [i_8] [i_8] [i_0]) : (arr_17 [12] [i_0] [i_6])))) ? (1566019379 * 4172462010) : 1963411282));
                            arr_25 [i_0] = ((((min((arr_3 [i_0] [i_7] [i_0]), ((0 ? (arr_21 [i_0] [i_5] [i_6] [i_7] [i_8] [i_0]) : (arr_3 [i_6] [i_5] [i_0])))))) ? (((!(arr_12 [i_8 - 1] [i_0 + 2] [i_0])))) : 2588));
                        }
                    }
                }
            }
            arr_26 [16] &= max(((((arr_19 [i_0] [i_0] [i_0] [16] [i_0] [4]) + ((32767 ? (arr_4 [i_5] [9] [4]) : (arr_0 [12])))))), ((9223372036854775807 ? -35859 : ((29674 ? (arr_20 [8] [10] [10] [i_5]) : (arr_12 [i_0 + 1] [i_5] [i_0]))))));
            var_22 = (((!(arr_15 [i_0] [i_0 + 2]))));
        }
        var_23 = (((!2803129712) || (arr_18 [i_0])));
        arr_27 [i_0] = (arr_11 [i_0]);
        var_24 = (max(var_24, ((((arr_10 [i_0] [i_0 - 1] [i_0] [i_0] [15] [i_0 - 1]) ? ((((arr_10 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] [i_0]) : (arr_10 [i_0] [i_0 + 2] [i_0 + 1] [17] [17] [i_0])))) : (~3579431235773842167))))));
    }
    #pragma endscop
}
