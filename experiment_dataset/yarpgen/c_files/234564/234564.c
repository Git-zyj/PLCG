/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 -= (((((var_1 == ((((!(arr_1 [i_0] [i_1])))))))) & (arr_5 [i_0] [i_0] [i_1])));
                    var_13 -= (!2907688271582414890);
                    arr_8 [i_0] [i_0] [i_2] = (((((arr_5 [i_2] [i_2 - 1] [i_0]) - (arr_5 [1] [i_0 - 3] [i_0]))) << (((max((max(2907688271582414890, var_3)), (((var_11 ? var_4 : var_7))))) - 9312555003568022827))));
                    var_14 = (min((min((arr_6 [9] [i_0] [i_2]), var_7)), ((~(arr_6 [i_2] [i_0] [i_2])))));
                }
            }
        }
    }
    var_15 &= ((((((max(15539055802127136732, var_11)) / var_1))) ? var_11 : (((((2907688271582414890 ? -31 : 10251919954934248516))) ? (min(15539055802127136715, 1047872179)) : 15539055802127136723))));
    #pragma endscop
}
