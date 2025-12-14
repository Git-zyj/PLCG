/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((~(arr_0 [1] [i_0]))), (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_21 = (max(var_21, (((((max(-367249815, 164))) ? ((((-3029373459690897066 ? 111 : 0)))) : (arr_0 [i_0] [i_0]))))));
            arr_5 [11] [i_0] [13] = (max((arr_3 [i_0] [12] [i_1]), (((!((min(7677265225105981671, var_0))))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_22 = ((-1739047376 < -1204023487) - 367249814);
            arr_9 [i_0] [14] [i_0] = ((-(arr_8 [i_0] [i_0])));
            var_23 = ((var_10 - (((-(arr_3 [i_0] [8] [8]))))));
        }
        var_24 = (min(25795, 1));
    }
    #pragma endscop
}
