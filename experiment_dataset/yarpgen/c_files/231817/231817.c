/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = (((-(723627918 & -723627934))));
                    arr_10 [i_0] [i_0] = (((((((-1 + 2147483647) >> (var_12 - 448786401))))) ^ ((-((var_4 + (arr_5 [4] [4] [i_2])))))));
                    arr_11 [i_0] [i_0] [1] [i_2] = (min(((((arr_0 [i_0]) << (var_6 - 1410110613)))), (min(var_11, (arr_0 [i_0])))));
                }
            }
        }
    }
    var_16 = ((((!(var_8 / var_1)))) ^ var_8);
    #pragma endscop
}
