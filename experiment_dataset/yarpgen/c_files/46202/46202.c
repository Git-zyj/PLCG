/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_4);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (min((((arr_2 [i_2] [i_0 - 1]) >> (15063 - 15035))), (~var_0)));
                    var_11 = (((arr_5 [i_2 - 1] [i_0 + 1] [8]) <= ((((arr_5 [i_2 - 2] [i_0 - 1] [7]) || (arr_5 [i_2 - 3] [i_0 - 1] [i_2]))))));
                    var_12 |= (((max(1079130412, (arr_4 [12] [0]))) - (((((var_8 - (arr_3 [22] [i_2])))) ? (min(3939527434, var_8)) : ((var_1 ? (arr_1 [i_0]) : (arr_3 [8] [22])))))));
                }
            }
        }
    }
    var_13 = (max(var_13, ((((var_7 - var_1) ? (!3939527427) : ((((min(var_0, var_3))) ? var_3 : ((max(1023, 14489))))))))));
    #pragma endscop
}
