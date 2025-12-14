/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 = ((~(arr_0 [i_0])));
        var_17 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 *= (min(((min(((51201 ? (arr_3 [i_1]) : var_8)), (!var_9)))), ((~(min(var_0, var_5))))));
        arr_5 [i_1] = (((!4991021628964216279) ? (((51203 ? ((var_13 ? var_13 : (arr_4 [1]))) : (max(var_13, var_3))))) : (min((!51463), ((242 ? 16347 : 17347837254860705198))))));
        arr_6 [i_1] [i_1] = ((19 ? 53660 : 959436470));
        var_19 = (arr_4 [i_1]);
    }
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        var_20 *= ((((max((arr_7 [i_2] [i_2 + 1]), (arr_7 [i_2] [i_2 + 2])))) ? ((var_15 ? (max(15642396511554065977, 7917)) : (((max(12, 32760)))))) : ((((arr_7 [i_2 - 1] [i_2 + 3]) >> (((arr_8 [12]) - 51397)))))));
        var_21 -= (~-24616);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_4 + 1] = var_1;
                    arr_15 [i_2] = (max((((((3584 ? (arr_12 [i_2] [i_2]) : (arr_8 [i_2])))) ? var_10 : (min((arr_8 [i_2]), var_15)))), (arr_13 [i_2 + 3])));
                    var_22 = (arr_13 [i_2 - 2]);
                }
            }
        }
    }
    var_23 = ((-((((max(var_12, var_1))) ? var_3 : var_15))));
    var_24 += max(var_3, var_5);
    #pragma endscop
}
