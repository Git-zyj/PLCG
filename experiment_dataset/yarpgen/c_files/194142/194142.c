/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((63970 | 63996) ? var_14 : (~-32767))) == var_3));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 *= (-2147483647 - 1);
        var_17 *= ((((min(63996, 1548))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    var_18 = (min((((3063281662 || 1548) || (var_13 && 1571))), ((((max(var_3, var_12))) == 1579))));
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_10 [i_2] [i_3] = ((((((((var_13 == (arr_2 [i_1])))) - ((1537 ? var_13 : 63997))))) ? (min(((var_0 ? 37 : (arr_6 [1]))), (arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2]))) : (max((((arr_3 [9]) ? (arr_6 [1]) : 0)), 1658317247))));
                    arr_11 [i_2] = ((~(min((77429307 == 1590), 4217537963))));
                }
            }
        }
    }
    #pragma endscop
}
