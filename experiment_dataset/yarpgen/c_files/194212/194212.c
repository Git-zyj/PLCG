/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((((((14737344205071885607 ? 14737344205071885607 : var_17))) ? (min(13, 754038861918020325)) : 754038861918020324)) * var_15);
    var_20 = (max((((-29786 <= var_13) ? (3709399868637666023 < 18921) : ((var_11 ? 0 : var_5)))), ((((var_4 < 2147483647) <= (min(var_12, 0)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] |= (min((!14737344205071885599), 1));
                    arr_12 [i_0] = 3709399868637666008;
                    arr_13 [i_0] [i_1] [i_2] = 7;
                }
            }
        }
    }
    var_21 = (min(var_21, var_15));
    #pragma endscop
}
