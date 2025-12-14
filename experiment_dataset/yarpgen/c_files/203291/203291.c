/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3233573220284848509;
    var_18 -= (max(-3233573220284848509, 3233573220284848509));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_19 *= ((((min(255, 3233573220284848509))) ? (arr_0 [i_0] [i_0 + 1]) : ((-3233573220284848509 ? (min(-10, -3233573220284848518)) : (((8 >> (-43 + 58))))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = (((((((((arr_2 [i_0 - 1] [i_1]) % 127))) ? ((-10 ? var_16 : var_3)) : 9))) ? ((-9 ? -22 : ((min(12, 9))))) : (max(-22, (!-10)))));
            var_21 = ((!(-127 - 1)));
        }
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_10 [1] [i_3] [i_3] = (max(((3233573220284848507 ? ((var_3 ? 3233573220284848531 : var_10)) : (((4 ? 9 : var_9))))), (((-4 ? (((arr_4 [i_2] [i_2]) ? var_8 : -6)) : 34878)))));
            arr_11 [i_3] [i_3] = ((((-40 ? 3 : 6))));
            arr_12 [i_2] = (((9 ? -6 : 4)));
        }
        var_22 = (min(var_22, ((((((-40 + 2147483647) >> (((arr_9 [0] [0] [0]) - 19250)))))))));
        var_23 = (min(var_23, ((max(((-6 ? (-23 || 5) : ((var_11 ? (arr_5 [i_2]) : 54)))), -123)))));
        var_24 = (var_10 == -17);
    }
    #pragma endscop
}
