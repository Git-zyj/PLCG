/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((~((var_7 ? ((20 ? -1786836788221685579 : 8899565862244720393)) : 9547178211464831224)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = (3241851588 != 8899565862244720404);
                    var_22 = (((((var_8 * (arr_4 [i_0] [i_0])))) || (!-8653453214432338316)));
                    var_23 -= ((var_13 ? (max((arr_5 [i_1 + 1] [i_2] [i_1 - 3] [i_1 + 1]), 8899565862244720387)) : -3241851588));
                }
            }
        }
    }
    #pragma endscop
}
