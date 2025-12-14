/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 = 159;
        var_21 = (min((((-32754 + (arr_3 [i_0])))), (arr_0 [i_0] [i_0])));

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                arr_9 [i_0] [i_0] &= (((((((min(var_12, 32736))) * -9796))) - ((var_2 ^ (arr_1 [i_0 + 1] [i_1 + 3])))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_22 = arr_8 [i_1] [i_1] [i_3];
                            var_23 = (min(var_18, ((1 ? var_1 : (arr_6 [i_1] [i_0])))));
                            var_24 ^= (min((min(255, (min((arr_7 [3] [9] [i_3]), var_0)))), (((0 % (arr_5 [i_0 - 2] [i_1 + 1]))))));
                            var_25 = (min(var_25, (((((!((min(255, 1))))) ? (((((arr_0 [i_0] [i_1]) || (arr_5 [i_2] [i_2]))))) : ((min(var_2, ((((arr_8 [i_2] [i_2] [i_4]) && 1)))))))))));
                            var_26 = 0;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_18 [i_0] [i_0] [i_0] [7] = (arr_4 [i_0 - 2] [i_0 - 2]);
                var_27 = (((arr_7 [i_1] [i_1] [i_1 - 2]) % var_6));
            }
            arr_19 [i_0] = -1;
            arr_20 [6] [4] [i_1] = ((-((-(arr_14 [2])))));
            var_28 = (max((((arr_16 [i_1 + 1] [i_1 - 1] [i_0 + 1]) && (arr_16 [i_1 + 1] [i_1 - 1] [i_0 + 1]))), (!var_6)));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_30 [i_6] [i_7] [i_6] [i_6] = (((min(((1631061842 << (var_15 - 100))), 1)) > ((1 + (-2147483647 - 1)))));
                            arr_31 [i_0] [i_0 - 1] [i_6] [i_6] [i_6] [i_7] [i_8] = (max(((min(2147483647, 1))), ((-1830835290 ? 1 : 16002877832823348380))));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_29 *= (((((arr_12 [i_0] [i_0] [i_0 - 2] [i_0] [i_6 - 1]) ? (arr_12 [i_0] [4] [i_0 - 2] [0] [i_6 + 1]) : (arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_6 + 1]))) / (max(1, ((-696758479 ? 2147483647 : 1))))));
                            var_30 = (+(((arr_24 [i_1 + 3] [i_1] [i_1] [i_0 - 2] [i_1 + 3] [i_9]) ? (arr_24 [i_1 + 3] [i_1 + 3] [i_7] [i_0 - 2] [9] [i_1 + 3]) : 2)));
                            arr_34 [i_6] [i_7] [i_6] [i_0 - 2] [i_6] = (max(((-(arr_1 [i_0] [i_0]))), (arr_16 [i_7] [i_6 - 1] [i_1])));
                            var_31 = (min(var_31, (((((67 || 15) ? (1830835289 - var_14) : 1))))));
                        }
                        var_32 *= (14790880345287668991 ? ((((min(487207573, 173))) ? (arr_21 [i_7] [i_1] [i_6] [i_6]) : var_16)) : (arr_23 [i_0] [i_0] [i_0] [i_7]));
                        var_33 *= ((((((!1) ? (arr_24 [i_7] [i_1 + 3] [i_6 + 1] [i_1 + 3] [i_0 - 2] [i_0 - 2]) : 14030958789520055464))) || ((-4 && ((max(1, -18)))))));
                    }
                }
            }
        }
        var_34 = (max(var_34, ((((((~13) + 2147483647)) >> ((min((arr_33 [4]), (arr_33 [6])))))))));
    }
    var_35 &= 1;
    #pragma endscop
}
