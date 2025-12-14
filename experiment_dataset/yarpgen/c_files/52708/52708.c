/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_3));
    var_11 = (~var_7);
    var_12 = ((((((((1860286176 ? 1 : 17614489766176490650))) ? -var_8 : ((var_5 ? var_0 : var_1))))) ? ((22405 ? 1 : 2182450241354430864)) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_13 = (arr_0 [i_0]);
                    var_14 = ((((((arr_2 [i_1 - 1] [i_1 - 1] [i_1]) ? (arr_2 [i_1 - 2] [i_1 - 2] [i_1]) : (arr_2 [i_1 - 2] [i_1 - 2] [i_1])))) ? (((1 ? 1 : (-32767 - 1)))) : (((arr_4 [i_1 - 1] [i_1 - 1] [i_1]) ? (arr_4 [i_1 - 2] [i_1 + 1] [i_1]) : (arr_4 [i_1 - 1] [i_1 - 3] [i_1])))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_15 |= (arr_5 [i_0] [i_0]);
                    arr_8 [i_0] [i_0] [i_0] |= (-(((arr_2 [9] [i_1 + 1] [i_0]) ? (arr_4 [i_0] [i_1 + 1] [i_0]) : (arr_2 [i_1 - 3] [i_1 + 1] [i_1]))));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    var_16 = (max(var_16, ((((((~(((arr_1 [i_0]) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_10 [i_0] [i_0] [6])))))) ? (((!(arr_1 [i_1 - 3])))) : (((arr_0 [i_1 - 2]) ? (arr_0 [i_1 - 2]) : (arr_0 [i_1 - 2]))))))));
                    var_17 |= ((~((((((arr_0 [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_4] [i_4])))) ? (arr_7 [i_0] [i_1 - 3]) : (arr_6 [i_1] [i_1] [i_1] [3])))));
                }
                var_18 = ((~((+(((arr_9 [i_0] [2] [2] [i_1]) ? (arr_3 [i_1] [i_1] [i_1 - 1]) : (arr_2 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
