/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((((max(2880521627, 175))) && var_8));
    var_12 = (max(var_3, (((184 < (4095 * 16875782585543876841))))));
    var_13 = ((var_0 >= ((-6148107693085795258 ? var_6 : -64))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] &= ((((max(2130716011, 92))) && ((max(108431852, 164)))));
                var_14 = (min((arr_3 [i_0]), 3717720395));
            }
        }
    }
    #pragma endscop
}
