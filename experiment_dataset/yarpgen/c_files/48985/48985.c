/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (min((max(var_7, var_5)), var_2));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_11 ^= (min((((max(var_2, var_1)))), (max((min(var_7, var_4)), (!var_1)))));
            arr_5 [i_0] [i_0] [i_0] = var_6;
        }
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            var_12 = (min((max(var_4, (!var_2))), ((min(250, 34)))));

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                arr_11 [i_0] [i_2] = (max(var_6, var_6));
                arr_12 [i_0] [i_0] = var_9;
            }
            var_13 = (max(((max((min(var_1, var_2)), var_2))), var_3));
            arr_13 [i_0] [i_0] [i_2] = (max(var_7, var_1));
            var_14 -= ((~(max(var_9, -var_8))));
        }

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_17 [i_0] [i_0] [i_0] = max(((max(var_7, var_4))), ((max((min(var_9, var_2)), var_0))));
            arr_18 [i_4] [i_0] [i_4] = max((min((!var_1), var_4)), (((-((max(var_9, var_6)))))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_15 = (max(((max(220, (min(202, var_0))))), ((~(!var_1)))));
            var_16 += (!-120);
            arr_21 [i_0] = (!-21);
            var_17 += (max((min((max(var_9, var_7)), (~var_0))), (((-(~var_2))))));

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    var_18 |= var_3;
                    arr_26 [i_6] [i_5] [i_6] [i_7 - 1] [i_0] |= (max(((max((!var_7), var_1))), (max((max(var_1, var_7)), (~var_5)))));
                    arr_27 [i_7] [i_6] [i_0] [i_0] [i_5] [i_0] = (min((max(var_4, (max(var_7, var_0)))), ((max(((max(221, 15))), (min(var_2, var_6)))))));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_19 += var_5;
                    arr_31 [i_0] [2] [i_0] = var_8;
                    var_20 = (min(-var_7, ((-(min(var_9, var_7))))));
                }
                arr_32 [i_0] [i_0] = (max((((max(var_9, var_8)))), ((min(((max(var_9, var_0))), var_8)))));

                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    var_21 = (max(var_21, ((min(var_4, (max(var_7, ((max(var_0, var_6))))))))));
                    var_22 = (max((min(var_4, ((min(var_8, var_5))))), (((~((max(var_5, var_6))))))));
                    var_23 = (min(var_23, (((max((max(-9222137963700297756, -2489883170592450105), var_6)))))));
                }
                arr_35 [i_0] [i_0] [i_0] = ((-(~var_2)));
                arr_36 [i_0] = ((~(min((!var_0), (max(var_0, var_1))))));
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_40 [i_0] [i_0] = (min((max((~var_1), ((max(var_9, var_5))))), (max(-13059, var_8))));
                arr_41 [i_0] [i_0] [i_0] = (max(((max(((max(var_8, var_8))), (~var_4)))), (max((max(var_3, var_3)), (max(var_7, var_7))))));
                var_24 = ((-(max(((min(var_4, var_2))), (max(var_3, var_8))))));
            }
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                arr_44 [i_11] [i_0] [i_0] [i_0] = (!var_8);
                arr_45 [i_0] [i_5] [i_0] = (max(((max((~var_1), var_2))), (max((min(var_4, var_0)), (~248)))));
            }
        }
        for (int i_12 = 3; i_12 < 16;i_12 += 1)
        {
            arr_48 [i_0] [i_0] [i_12] = min((max((min(var_5, var_3)), (max(var_8, var_3)))), (max((min(var_9, var_3)), ((min(var_1, var_8))))));
            arr_49 [i_0] [i_12 - 1] = ((~((~(max(var_4, var_6))))));

            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                var_25 = (max((max((max(var_3, var_0)), (~var_3))), (((max(var_5, var_1))))));
                arr_52 [i_13] [i_12 - 1] [i_12 - 1] [i_13] |= var_6;
                var_26 = (max(((-(min(var_7, var_9)))), var_1));
            }
        }
    }
    for (int i_14 = 3; i_14 < 11;i_14 += 1)
    {
        var_27 = (min(((min((max(var_1, var_4)), (~var_1)))), var_3));
        var_28 *= (max((min(var_2, (min(var_2, var_3)))), ((min(var_5, (~var_4))))));
    }
    #pragma endscop
}
