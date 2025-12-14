/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((var_19 >> (-61798 + 61807))), ((-(~13876)))));
    var_21 = 116;
    var_22 ^= var_2;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((+(min((arr_1 [i_0]), 1632187573))));
        arr_3 [i_0] = -1;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_8 [i_2] [i_1] [4] = (arr_5 [i_2] [i_1]);

                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] = ((35508 - (arr_1 [i_1])));
                    var_23 = (((~13876) ? 40290 : 254));
                    var_24 |= (arr_1 [11]);
                }
            }
            var_25 = (min(var_25, var_6));
        }
    }
    var_26 = ((var_15 / (min(var_11, (~var_2)))));
    #pragma endscop
}
