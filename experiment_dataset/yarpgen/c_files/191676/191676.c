/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_15 = (~var_5);
        arr_2 [i_0] = ((14531427856663432285 ? ((7851306648576306000 ? -1 : var_13)) : var_13));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 -= -1;
        var_17 = (10415394112704690500 + -4);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_18 = (max(var_18, ((max(15177, ((4 ? (65535 >= var_5) : var_14)))))));
            var_19 = (min(var_19, (((!((((((22 ? var_2 : var_12))) ? (min(564624807, var_14)) : var_11))))))));
            arr_9 [i_2] [i_3] = (~var_3);
            var_20 = ((((((min(var_14, 51185)) <= var_7))) * -1));
        }
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            var_21 = (((((max(var_14, var_3)) != (!var_5))) ? (((var_14 ? 4 : ((max(104, var_12)))))) : ((1305663948977067033 % ((min(var_3, -8294494347913676079)))))));
            var_22 = ((((((min(var_8, -1)) == 0))) & (min(((7974102874602320175 ? 32767 : -83)), ((-5554928456485227466 ? var_11 : -13))))));
        }
        var_23 = (max(var_23, ((((-1907933013337152507 > -3462) ^ (max(4294967295, -1)))))));
        var_24 = (min(var_24, (((((min(-13, 27848))) != (!-8968165844872890936))))));
    }
    var_25 = 35050593008599644;
    #pragma endscop
}
