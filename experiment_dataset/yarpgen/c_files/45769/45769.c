/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(((((var_9 ? var_3 : 61)) % var_4)), var_9);
    var_17 *= max((min((!4922474444781889526), var_13)), 1427772241);
    var_18 ^= (var_7 ? ((((~var_3) ? (!var_7) : ((max(var_11, var_4)))))) : (((11253812336064985756 + -4922474444781889526) * (!var_4))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_2] [i_0] [4] = (((~var_9) | ((var_10 ^ (arr_0 [i_3])))));
                        var_19 = (min(var_19, (((((!(arr_3 [8] [1]))) ? (((~(arr_4 [i_0] [i_0] [i_0])))) : (((((((arr_9 [9] [1] [i_2] [i_2] [i_2] [i_2]) != -31054)))) + (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_8)))))))));
                    }
                }
            }
            var_20 = (max(var_20, (((((-4922474444781889526 ? var_0 : (arr_5 [i_0] [4] [i_1] [i_1]))) > ((max(var_14, 0))))))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_15 [i_0] [i_4] [i_4] [6] = (((((((((arr_14 [i_0] [i_0]) * (arr_4 [i_0] [i_4] [i_4])))) || ((((arr_12 [i_5] [i_4] [9]) + var_13)))))) <= (max((var_15 & var_11), (arr_7 [i_5] [i_4] [i_4] [7])))));
                var_21 = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_4] [i_5]);
            }
            var_22 = 274877906943;
            arr_16 [i_4] [i_4] [i_0] = (~var_12);
            var_23 = arr_6 [i_0] [i_0];
        }
        var_24 = ((~(0 & 0)));
    }
    #pragma endscop
}
