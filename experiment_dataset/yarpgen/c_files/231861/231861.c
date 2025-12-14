/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_10 = max(var_6, ((max(5801385304948890642, 4294967295))));
        arr_2 [15] [i_0] = (max((max(140737488355327, 0)), ((((!-140737488355346) << (12645358768760660965 - 12645358768760660951))))));
        var_11 -= (((max((0 & 17874524135419206733), (!var_5))) <= ((max(4294967290, 1)))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_12 = (max(var_12, (12645358768760660951 - 5141512565677756415)));
        var_13 = (((max(((-2882 ? -117 : var_4)), 0))) != 303573529);
        arr_5 [i_1] = ((!(-67 != -117)));
        var_14 = (((((min(-1270600089520975711, var_5)) ^ (2375229727 ^ 5801385304948890640))) << (((max(var_2, 916003793)) - 1210274255))));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_15 = (max((1 * var_8), (8 / -118)));
                    arr_16 [i_3] [i_3] [i_4] [i_2] = 12645358768760660965;
                    arr_17 [i_2] [i_2] = (12645358768760660987 / 5971775558776694437);
                    var_16 = (min((~-124), (~var_3)));
                }
            }
        }
        var_17 = ((~194) + (257698037760 <= 2205822522));
        arr_18 [i_2] = (max((max(12645358768760660986, 303573529)), (var_5 + 303573517)));
    }
    var_18 *= ((-(!-39)));
    #pragma endscop
}
