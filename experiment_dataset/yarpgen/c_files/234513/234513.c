/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_11 |= var_6;
            var_12 = (max(var_12, ((max(var_7, (max(760273725126213014, 53530)))))));
            arr_6 [i_0] = 1;
            arr_7 [i_1] [i_0] = max(1, ((255 - (arr_4 [i_0]))));
        }
        arr_8 [i_0] = ((((max(1, var_6))) ? ((max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))) : ((max(var_8, 247)))));

        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            arr_11 [i_0] [i_0] [2] &= ((11303383587148065543 ? 1 : 1));
            arr_12 [i_0] [i_0] = ((((arr_5 [i_0]) | (((arr_4 [i_0]) | -7136)))));
            arr_13 [i_0] = ((4605638079336019619 ? var_2 : 0));
            var_13 = (max((-9223372036854775807 - 1), 247));
            arr_14 [i_0 + 1] [i_0 + 1] [i_0] = -var_4;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 6;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_22 [i_0] = (max((((!(arr_5 [i_0])))), var_1));
                        arr_23 [i_0] = (max((7 << 1), 1));
                    }
                }
            }
            var_14 = ((var_6 & var_3) - (arr_1 [i_3]));
        }
        arr_24 [i_0 + 1] [i_0] = (max((max((!var_3), var_2)), (((((max(-6561591508913921700, 0))) && ((max(var_4, var_1))))))));
        var_15 = (((((arr_19 [i_0] [i_0] [6] [i_0 + 1]) <= (arr_5 [i_0]))) ? (arr_4 [i_0]) : 7135));
    }
    var_16 = var_7;
    var_17 = var_1;
    #pragma endscop
}
