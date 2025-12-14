/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((max(3821071852, 28554)))) ? var_0 : (((((var_5 ^ var_5) && var_4))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((+(min((arr_1 [i_0] [i_0]), (~var_4)))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [12] = 1005394295;
            var_17 ^= 1531241388;
            var_18 = (min(var_18, (((!((((arr_0 [i_0 + 1]) % (arr_3 [i_1 - 2] [i_0] [8])))))))));

            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                var_19 -= ((max((473895443 > 1), (arr_0 [i_2 - 1]))));
                arr_9 [i_0] [1] [i_0] = var_12;

                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    arr_13 [i_0] = (min(86, (~-1)));
                    var_20 ^= (((1 ? 8 : -115)));
                    var_21 -= ((((-(arr_4 [4] [i_2 + 1]))) > ((~((473895473 ? 83 : var_11))))));
                }
            }
        }
    }
    var_22 ^= var_9;
    #pragma endscop
}
