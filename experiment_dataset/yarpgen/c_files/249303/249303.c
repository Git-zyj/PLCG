/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = ((!(((arr_3 [i_1 - 1] [i_1]) || ((((arr_1 [i_0]) ? var_5 : var_15)))))));
                arr_4 [1] [i_1] [1] = (arr_3 [i_0] [i_0]);
                var_20 = (~4);
                var_21 = (arr_1 [i_0]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_22 |= (((161 || var_12) <= ((101 ? 2259686048 : 4177920))));
        arr_7 [i_2] [i_2] = (((arr_6 [22]) || var_6));
        var_23 = (((~161) <= (((arr_5 [i_2]) & -112))));
        arr_8 [i_2] [i_2] = ((((arr_6 [i_2]) <= -1073741824)));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((~(((!(arr_9 [i_3]))))));
        var_24 = 14297;

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_25 = arr_13 [i_3] [10];
            var_26 = (arr_5 [i_3]);
            arr_14 [i_3] = ((!6) <= 92);
        }
    }
    var_27 = var_18;
    #pragma endscop
}
