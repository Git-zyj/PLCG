/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(!var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = min(26424, ((((-3782667248738348752 == (arr_7 [i_0] [i_2] [19] [i_0]))) ? (~7134372239290425824) : ((((!(arr_7 [i_1] [1] [i_1] [i_0]))))))));
                    arr_8 [i_0] [i_0] = (min(-8651682694519408725, ((max((arr_3 [i_0] [i_0] [i_0]), (arr_1 [i_0]))))));
                    arr_9 [i_0] [i_0] [i_0] = (((min((((arr_5 [i_0] [i_1 + 3] [i_0]) ? (arr_0 [15] [i_1]) : (arr_7 [i_2] [i_2] [i_2] [i_0]))), (arr_6 [i_0] [i_0] [i_0]))) > ((min((arr_3 [i_2] [i_2] [1]), (min(-1473486153, (arr_4 [i_0] [i_0]))))))));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = (arr_0 [i_0] [i_0]);
                    var_19 = (((-714 ? -10 : (((arr_6 [24] [i_1 + 2] [i_1 + 3]) ? (arr_7 [i_1] [24] [i_2] [i_0]) : (arr_1 [i_0]))))));
                }
            }
        }
    }
    var_20 = -var_2;
    var_21 = ((((~1) <= 40475)) ? var_15 : var_4);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    arr_19 [i_5] = (!46);
                    var_22 = (arr_3 [i_3] [i_4] [i_5 + 2]);
                    var_23 = (max(var_23, (((arr_12 [15]) ? ((((((arr_3 [i_3] [i_5] [12]) + 2147483647)) >> (((arr_1 [i_4]) - 1633653240))))) : (arr_18 [i_3] [1] [i_5])))));
                }
            }
        }
    }
    #pragma endscop
}
