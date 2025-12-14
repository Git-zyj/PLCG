/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((!(arr_0 [i_0])));
        arr_4 [i_0] = (max(127, 6941333608087054530));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_10 = (20991 || 47471720);
        var_11 = (max(var_11, ((((arr_0 [i_1]) ? (((arr_7 [i_1]) | var_6)) : (arr_7 [i_1]))))));
        var_12 = (~-6588637829998307305);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (((((var_2 >= (((min(-16740, var_4))))))) & -18184));
        arr_12 [9] = ((!((((var_9 ? -500191726 : 8238683722532256215))))));
        arr_13 [i_2] = ((((min((min((-127 - 1), var_7)), var_7))) & ((((arr_9 [12] [i_2]) < (arr_9 [i_2] [i_2]))))));
    }
    var_13 = ((~(max(var_8, (min(0, 1))))));
    var_14 = (max(54402, -var_5));
    var_15 = var_1;
    #pragma endscop
}
