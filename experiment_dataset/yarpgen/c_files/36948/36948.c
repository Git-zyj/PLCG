/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_3 + var_5);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        var_13 = ((arr_1 [i_0] [i_0]) && (arr_1 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (+(max((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1]))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_14 = (max(((min(59723, (arr_0 [i_1])))), (((5828 ? 59700 : 59719)))));

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                var_15 = (((((arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1]) < (((var_6 % (arr_3 [i_2])))))) && (arr_9 [i_3 + 1] [i_3 - 1] [i_3 - 1])));
                var_16 = (max((arr_2 [i_1] [i_2]), (min(((-(arr_6 [i_2]))), (((arr_12 [i_2]) ? -1114989204 : var_9))))));
                var_17 &= (max(57804, 1392921710));
                var_18 = ((((((arr_11 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3 + 3]) || (arr_9 [i_3 + 1] [i_3 + 2] [i_3 + 2])))) << ((((min((arr_11 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3 + 3]), (arr_11 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3 + 3])))) + 14226))));
            }
            var_19 = (((arr_8 [i_1] [i_2]) ^ (~var_2)));
            var_20 += (min((max((arr_4 [i_2]), (arr_9 [i_1] [i_1] [i_1]))), var_9));
        }
        arr_13 [i_1] = ((arr_9 [1] [1] [i_1]) ^ (~var_6));
        var_21 = (arr_9 [i_1] [i_1] [i_1]);
    }
    #pragma endscop
}
