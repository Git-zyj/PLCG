/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_1] = (arr_4 [i_0]);

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_16 = ((var_2 ? 16028091133134110941 : 2400400329470367453));
                arr_9 [i_0] [i_1] [i_1] [i_2] = 2671344896;
                arr_10 [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_1] [i_2] [i_2]);
                var_17 |= var_7;
            }
        }
        var_18 = (arr_3 [i_0]);
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_19 = ((~(arr_11 [i_3 + 2] [i_3 - 1])));
        var_20 = (((!1623622400) == (((!((((arr_11 [i_3] [i_3]) ? var_8 : var_0))))))));
    }
    var_21 = (min(var_21, var_12));
    var_22 += (min((max(18446744073709551615, -var_9)), (((~((min(23, 76))))))));
    #pragma endscop
}
