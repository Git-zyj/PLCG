/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((max(1967332745, 55196)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = max((max((max(1967332745, 562112843)), (max(2327634551, var_4)))), (max((max(1967332745, 1684652047)), (max(134184960, (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 -= max((max(((max((arr_0 [i_0 + 1]), 4087144603))), (max(82, 10022267927391305266)))), (max(((max((arr_9 [i_0 + 2] [i_1] [i_2] [i_3]), 4292870144))), (max((arr_0 [i_0 - 3]), 18446744073709551605)))));
                            var_13 = (max((max(((max((arr_5 [i_0]), 1967332744))), (max(85, var_8)))), ((max(((max(217, 3903576222))), (max((arr_7 [i_0] [i_1] [i_2] [i_2]), (arr_8 [i_0 + 2] [i_0] [i_0 + 2]))))))));

                            for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
                            {
                                var_14 -= max((max(((max((arr_4 [i_1] [i_1] [i_1]), var_10))), (max(0, var_7)))), ((max((max(-1702047848, (arr_0 [i_0]))), ((max(0, (arr_12 [i_0]))))))));
                                var_15 &= (max(((max((max((arr_12 [i_0]), var_10)), ((max(1, var_1)))))), (max((max((arr_12 [i_0 - 3]), 3078379213)), ((max(var_5, 7)))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
                            {
                                var_16 = 790243314;
                                arr_18 [i_0 - 2] [i_1] [i_0 - 2] [i_1] [i_3] [i_5] [i_5 + 1] = 427181543;
                            }
                        }
                    }
                }
                var_17 -= max((max((max(var_7, var_6)), (max(1, var_7)))), (max((max((arr_7 [i_0 - 3] [i_1] [i_0 - 3] [i_0]), 1)), ((max((arr_16 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1]), (arr_16 [i_0] [i_1] [i_1] [i_1])))))));
            }
        }
    }
    var_18 = max(((max(((max(var_6, var_6))), (max(var_5, 1678451315))))), (max(((max(var_3, var_3))), (max(var_4, var_9)))));

    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_19 = (max((max((max(var_4, var_5)), ((max(-790243309, 1))))), ((max((max(2147483647, 254)), (max(-791150585, 1)))))));
        var_20 = (max(((max(536870911, 65313))), (max((max(85, (arr_19 [i_6]))), ((max((arr_5 [i_6]), 1)))))));
    }
    #pragma endscop
}
