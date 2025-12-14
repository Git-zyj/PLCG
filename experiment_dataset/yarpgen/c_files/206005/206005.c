/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_18, var_5))) % var_3));
    var_21 = (((~(!var_5))));
    var_22 = var_5;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((11836861254228165473 & 39098) * (arr_1 [i_0] [20])));
        var_23 = ((!((!(arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((~(arr_1 [i_1] [i_1]))));
        arr_6 [i_1] = (arr_1 [i_1] [20]);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] &= (((arr_1 [5] [i_2]) + (arr_0 [i_2] [18])));
        var_24 = ((!((min((arr_0 [i_2] [5]), (arr_1 [i_2] [i_2]))))));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_14 [19] [19] [i_3] = (((arr_7 [i_2]) ^ ((((!(arr_4 [i_3])))))));
            arr_15 [i_2] [i_2] [15] = (((((~((-(arr_0 [i_2] [i_2])))))) ^ (arr_9 [i_2])));
            var_25 = max((arr_8 [i_2] [i_3]), ((((-(arr_9 [5]))) % (((~(arr_7 [4])))))));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_26 = ((!(arr_4 [i_5])));
                            var_27 = (min(((-(arr_16 [12]))), ((~(((!(arr_0 [i_2] [i_2]))))))));
                            arr_26 [i_2] [i_6] [i_5] [i_6] [i_7] = (((~(arr_12 [i_2]))));
                        }
                    }
                }
            }
            var_28 = ((!(((min((arr_18 [i_2]), (arr_16 [i_4])))))));
            var_29 += (max((arr_9 [i_2]), ((((arr_3 [i_2]) || (arr_21 [i_2] [i_2] [i_4] [i_2]))))));
        }
        arr_27 [i_2] = (~-413845277);
        var_30 = ((-(min(((-(arr_11 [i_2]))), (((!(arr_21 [i_2] [20] [20] [i_2]))))))));
    }
    #pragma endscop
}
