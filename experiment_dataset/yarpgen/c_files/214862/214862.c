/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (!-1);
                    arr_6 [i_1] [i_1] [i_0] = ((((max((((arr_4 [i_1]) ? (arr_4 [i_0]) : var_7)), -17))) | (((((arr_1 [i_0] [i_0]) + 4653047404869390404)) - 822446214))));
                    arr_7 [i_0] = ((~(((!(822446206 ^ var_2))))));
                    var_11 = (arr_2 [18] [i_2]);
                }
            }
        }
    }
    var_12 = var_4;
    #pragma endscop
}
