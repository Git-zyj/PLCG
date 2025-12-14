/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [5] [i_1] [i_1] = min(((+(max((arr_2 [i_0] [3] [i_1]), var_7)))), (arr_0 [i_0] [i_0]));
                var_12 = (min(var_12, (((-(((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : var_6)))))));
            }
        }
    }
    var_13 = 2117477182;
    var_14 = ((((min(4398246944760019620, (-2117477183 > var_8)))) ? ((max(16, var_10))) : (!14888)));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_3] [i_3] = (min((max(var_9, 13610210429458268765)), ((max(var_6, var_3)))));

                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    var_15 = var_7;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_21 [i_3] [i_3] [i_4] [i_5] [i_3] = ((((min((((var_5 ? var_4 : (arr_14 [i_3])))), (arr_1 [i_6 + 3])))) && (((~((var_7 ? var_2 : -1264136478905723414)))))));
                                arr_22 [i_2] [14] [i_3] = ((!(((((((arr_15 [i_3] [i_3] [i_4]) ? (arr_0 [i_2 - 2] [i_4]) : 7110447534028059598))) ? -12304469217019484690 : ((((arr_5 [i_2]) ? (-2147483647 - 1) : (arr_15 [i_3] [i_3] [4])))))))));
                                arr_23 [i_3] = ((!(arr_19 [i_2 - 1])));
                                arr_24 [i_2] [3] [i_3] [i_4] [i_5] [i_6] [12] = ((-(((((arr_11 [i_3]) > -5546282796926744832)) ? (!var_1) : (var_11 && 14048497128949531995)))));
                            }
                        }
                    }
                    arr_25 [i_3] [i_3] [i_3] [i_3] = ((((((arr_19 [i_4 - 1]) && var_7))) > (((~var_9) << (((~var_0) + 2011647104))))));
                }
                for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    var_16 = (max((arr_15 [i_3] [i_3] [i_3]), (min((arr_6 [i_2 + 3]), (arr_6 [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_34 [i_2] [i_2] [i_3] [i_7] [9] [i_3] = (((((arr_0 [i_2 - 1] [11]) ? var_11 : (arr_17 [i_2] [i_3] [i_7 - 2]))) > (((max(var_7, (arr_15 [i_3] [i_3] [i_3])))))));
                                var_17 = ((-(((arr_3 [i_2] [i_2 + 2]) ? var_2 : (max(0, 15015136409602084089))))));
                                arr_35 [i_3] [i_3] [i_3] = ((!((((~var_2) ? ((((!(arr_26 [i_2] [i_2] [i_2]))))) : (arr_7 [i_8]))))));
                            }
                        }
                    }
                    var_18 *= 1264136478905723414;
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 17;i_10 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, (((-26314 ? (-5546282796926744832 ^ 26314) : (~var_3))))));
                    arr_39 [i_3] [i_3] [i_10] = (~(arr_11 [i_3]));
                    var_20 = (((arr_28 [i_10 + 1]) << (((arr_36 [1]) - 115254772))));
                    arr_40 [i_10 + 1] [i_3] [i_2] = ((var_2 ? (arr_26 [i_2] [i_3] [i_10]) : -5546282796926744832));
                }
                arr_41 [i_3] [i_3] [i_2] = 236;
            }
        }
    }
    #pragma endscop
}
