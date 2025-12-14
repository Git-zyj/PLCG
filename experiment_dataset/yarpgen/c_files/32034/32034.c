/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((~(min(4025176424, 119))));
                var_20 = var_13;
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_21 = min((min(var_13, var_6)), (min((min(var_5, var_17)), var_4)));

        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            arr_10 [i_3] [i_3] [i_3] = (max((max((max(var_5, var_17)), var_2)), (~var_10)));
            var_22 += -var_13;
            arr_11 [i_2] = (!-var_12);
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_23 = var_13;
            arr_14 [i_2] [i_2] = var_9;
            var_24 = (min((!var_17), var_6));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_19 [i_2] [i_2] [8] = -var_5;
            var_25 += max(18446744073709551611, 99);
            arr_20 [i_2] = (min((!var_7), -var_8));
            arr_21 [i_2] = var_10;
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_26 = (!var_12);
            var_27 ^= (!4365773774109139068);
        }
    }
    #pragma endscop
}
