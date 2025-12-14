/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (+((((arr_5 [i_1]) >= var_7))));
                arr_7 [i_0] [i_0] [i_0] = (max(((-637851400286992700 ? (arr_5 [i_0]) : -8752093088590744110)), (((var_10 ? (arr_5 [i_0]) : (arr_5 [i_1 + 3]))))));
                arr_8 [i_0] [i_0] [12] = ((!(!var_2)));
                arr_9 [i_0] [i_1 - 1] = (((arr_0 [i_1]) ? (((arr_4 [i_0] [9]) % (arr_4 [i_0] [i_0]))) : (((63 || (~-637851400286992719))))));
                arr_10 [10] = ((-((((arr_2 [i_0]) <= (arr_1 [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
