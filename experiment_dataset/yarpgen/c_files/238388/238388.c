/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max(var_16, ((max(1, (!1)))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (max((max(((min(1, 1))), (arr_0 [15] [i_0]))), (max(1001077646, var_7))));
        var_19 *= (~var_13);
        var_20 = (min(3293889637, 2037843593));
        var_21 *= (min(3293889650, (min(((max(123569875, (arr_1 [i_0])))), ((-(arr_0 [i_0] [11])))))));
        var_22 = (max(var_22, (((max(((-(arr_3 [9] [12])), (max((arr_3 [i_0] [i_0]), 3444192350)))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_11 [i_1] [i_1] = ((!((!(arr_9 [i_1] [i_2] [i_2])))));
            var_23 = var_16;
            var_24 = (min(var_24, (((14 ? -123569851 : 83)))));
        }
        var_25 = (max(var_25, ((((arr_3 [i_1] [i_1]) ? (min(((min(1, 255))), (max((arr_5 [i_1] [i_1]), var_13)))) : ((((((max(-126, 4294967282))) && (!-1076495885))))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            arr_16 [i_3] = 1;
            var_26 = ((-(((~(arr_14 [i_3] [i_3] [i_3]))))));
            var_27 = (~6347016811108351337);
        }
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_28 = (min(var_28, (((max(((arr_2 [i_5 + 1]), 8)))))));
            arr_21 [i_3] [i_3] [i_5] = (min((max(-4505, 64)), 3));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_29 -= (min((min(1, 248)), var_6));
                        arr_31 [i_3] [6] [0] [i_8] &= ((1 ? -1 : ((((min((arr_0 [i_3] [i_7]), 1))) ? 19186 : (arr_22 [i_6] [i_6])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
