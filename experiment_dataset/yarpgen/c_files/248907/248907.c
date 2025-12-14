/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= -var_13;
    var_19 = var_9;
    var_20 = (var_1 >> ((((min(var_9, var_15))) ? (!var_1) : -984284802884701524)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [0] [i_1] = ((+((min((arr_1 [i_0]), 4494)))));

                for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    var_21 *= (((-4495 ? 0 : (arr_5 [i_2 + 2] [i_0] [i_0]))));
                    var_22 = ((~(arr_5 [i_2 + 1] [4] [i_2 - 1])));
                    var_23 |= ((var_10 ? var_13 : (!4517)));
                }
                for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] = -1;
                    var_24 = (((((((((arr_3 [i_0] [7] [i_3 - 2]) << (((arr_8 [i_0] [7] [i_0]) + 5374))))) ? (~967271752) : (((arr_5 [i_0] [i_1] [i_3]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))))) ? ((((((arr_1 [i_0]) >> (arr_5 [1] [1] [i_3])))) ? var_5 : -967271748)) : ((((-1376801026843136656 + 9223372036854775807) >> (((arr_9 [1] [10] [10] [i_0]) ? 58 : (arr_3 [i_0] [i_1] [i_0]))))))));
                }
                for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
                {
                    var_25 = (((((arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 2]) ? (arr_7 [i_4 - 1] [i_4 + 1] [i_4 - 1]) : (arr_7 [i_4 - 1] [i_4 + 1] [i_4 - 1]))) + (((arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 2]) ^ 148))));
                    var_26 = (arr_3 [i_4] [i_4 + 1] [i_4]);
                    var_27 = ((!(arr_14 [i_0] [i_4 - 1] [i_4])));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
                {
                    var_28 |= (((arr_3 [i_0] [i_0] [i_0]) <= 105));
                    arr_18 [i_0] [i_0] [i_5] [i_0] = (((arr_12 [i_5] [5] [i_1] [i_0]) < (var_7 < -15)));
                }
            }
        }
    }
    var_29 = (min(var_17, ((~((-4474 ? var_3 : 967271766))))));
    #pragma endscop
}
