/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = arr_1 [i_0];
        var_13 -= (((arr_1 [6]) ? 22330 : (arr_0 [i_0])));
    }
    var_14 = var_0;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (-8309522952176764493 || -8309522952176764518);
        arr_5 [i_1] = ((1 ? (arr_3 [i_1]) : 58610));
        arr_6 [i_1] = -32756;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_15 |= ((((-var_2 >= (arr_2 [i_2] [i_2]))) ? 24075 : (((((min(91, -1678))) ^ ((min(1, (arr_9 [i_2] [i_2])))))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    var_16 = ((((min(-7941, (arr_7 [i_3 - 1] [i_4 + 2])))) ? (((((-(arr_9 [i_3 + 2] [i_2]))) > -var_7))) : ((min((max((arr_15 [i_4]), (arr_10 [i_2]))), (arr_11 [12] [i_3] [i_3]))))));
                    var_17 = (((arr_8 [i_3 + 2]) % ((~(arr_8 [i_3 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}
