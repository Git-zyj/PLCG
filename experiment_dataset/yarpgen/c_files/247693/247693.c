/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((arr_2 [i_0] [i_1] [i_0]) ? (arr_0 [i_1] [i_0]) : -512))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_22 = 10539532825017843116;
                    var_23 = (((arr_0 [1] [i_0]) + (((arr_5 [i_0] [i_0] [i_0]) + 512))));

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            var_24 = var_2;
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] |= arr_8 [i_1] [i_2] [i_3 - 1];
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] |= ((arr_13 [i_3] [i_2] [6] [6]) + (((((117 ? (arr_7 [17] [i_1] [i_2] [i_2]) : (arr_7 [i_0] [i_1] [i_2] [i_3])))) ? 4092 : (arr_7 [4] [i_2] [i_3] [i_5]))));
                            arr_16 [i_0] [i_1] [i_1] [i_5] [i_5] = ((((var_9 ? -327830488553007723 : 327830488553007723))));
                            arr_17 [i_0] = ((0 << ((((((var_0 ? var_6 : (arr_8 [i_5] [i_5] [i_2]))) + (arr_10 [i_3]))) - 8983228884956003694))));
                        }
                        arr_18 [i_1] [i_1] [i_0] = (((((((((arr_1 [i_1]) ? -15 : 0))) ? (~-6580372000615468527) : (arr_6 [i_0] [i_0] [i_0] [i_3 - 2])))) ? (((arr_10 [i_0]) ? (arr_4 [i_2] [i_3 + 2] [i_3]) : ((1073741823 ? (arr_0 [i_1] [12]) : (arr_13 [i_0] [11] [i_2] [i_0]))))) : ((~((0 ? 9887275097886563704 : var_16))))));
                    }
                    var_25 = ((((32767 <= (arr_14 [i_1] [8]))) ? (arr_0 [i_0] [i_2]) : ((((var_1 ? (arr_2 [i_0] [i_1] [i_2]) : 18227350466471115632)) ^ (0 * 47876)))));
                    var_26 = (((arr_9 [i_2] [i_2] [i_1] [i_0] [i_0]) ? (((arr_9 [i_0] [i_0] [i_1] [i_2] [i_2]) ? (arr_13 [i_0] [i_1] [i_2] [i_0]) : 161)) : ((((arr_9 [18] [18] [i_0] [i_1] [3]) > (arr_13 [i_1] [i_1] [i_2] [i_1]))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_27 = ((161 ? 14 : 47853));
                    arr_21 [i_6] [i_1] [i_0] |= (-2147483647 - 1);
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_29 [i_8] = ((32749 && 11578114148379538278) ? ((-2581810933461770450 ? (arr_12 [i_0] [i_7] [i_0] [i_9]) : 13854238556733604772)) : ((((var_8 > ((var_1 ? (arr_0 [i_1] [i_7]) : -74)))))));
                                arr_30 [i_1] = (((arr_13 [i_0] [9] [i_7] [i_8]) >= 6868629925330013324));
                            }
                        }
                    }
                    var_28 = ((30720 ? (((((var_2 ? var_10 : (arr_8 [i_0] [i_1] [16])))) ? 648954224990647742 : (arr_10 [i_7]))) : (((+((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) && var_5))))))));
                    arr_31 [i_0] [i_1] [i_1] [i_1] = 1;
                }
            }
        }
    }
    #pragma endscop
}
