/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (!-var_4)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 |= (min(((-((max(1, 1))))), 1));
            var_21 -= (max((min(1, 1)), 1));
            var_22 |= min(0, 1);
            var_23 = (min(var_23, (min((min(1, 1)), (min(1, 1))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_24 = (max(var_24, (min((max(1, 1)), (min(1, 1))))));
                    var_25 = (min(var_25, ((((max(1, 0)))))));
                }

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_26 = min(1, 1);

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_27 = min(1, (min(1, 1)));
                        var_28 *= (min(((max(1, 0))), (max(((min(1, 1))), 1))));
                        arr_16 [i_6] [i_5] [1] [1] [i_2] [i_2] [1] = (max((max(-0, ((max(1, 1))))), ((max((max(1, 1)), (max(1, 1)))))));
                        var_29 = 1;
                        arr_17 [1] [i_5] [1] [i_3] [i_0] [i_0] = (!((min(1, (~1)))));
                    }
                }
                var_30 = (min(var_30, ((((min(1, 1)))))));
                var_31 = (max(var_31, 0));
            }
            var_32 = (min(var_32, (max((min(1, 1)), 1))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_33 = 0;
            var_34 -= 0;

            /* vectorizable */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                var_35 += (~1);
                var_36 = (~1);
                var_37 = (max(var_37, 0));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_38 += (((max(1, 1))));
                var_39 -= (~-0);
                arr_25 [i_0] [i_7] [i_9] = max((max(1, 1)), (max(1, 1)));
                var_40 = max((min(1, 1)), 1);
            }
        }
        arr_26 [i_0] [i_0] &= max(1, 1);
        var_41 = (min(var_41, (min(1, (min(1, 1))))));
    }
    #pragma endscop
}
