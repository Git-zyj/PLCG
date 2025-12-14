/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((-(~-1)))) ? (max(var_10, 11067551214004501613)) : (((((7379192859705050003 ? 5604521533627681405 : 8349401127240492797)))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_20 = (max(var_20, 11067551214004501613));
        arr_2 [i_0] = (max((7379192859705049998 < -3055461265551439508), (-2147483647 - 1)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_21 += 4283142832;
                        var_22 = 2147483647;
                    }
                }
            }
        }
        var_23 = (((-2147483619 % 11067551214004501592) ? (20849 ^ 3160170985698686323) : 1));
    }
    for (int i_4 = 4; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4 - 1] = min(3160170985698686324, (-1 * 24576));
        var_24 = ((min(1, ((-495274188 ? 1391228664 : 11067551214004501613)))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_25 = ((-56 ? ((7379192859705049998 ? 2903738631 : 2147483629)) : (9 ^ 247)));
                        var_26 = 18446744073709551615;
                    }
                }
            }
        }
    }
    for (int i_8 = 4; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_27 = 1;
        arr_27 [i_8 - 1] [i_8] = (2147483647 ^ -1397967264);
        arr_28 [i_8] [i_8 - 3] = -3635885970891861277;
    }
    var_28 -= var_10;
    var_29 = 888053200;
    var_30 = (min(var_30, ((((((1 ^ 46) ? (1397967264 | -1397967269) : 1607142357087660271)) % -8194950267526320788)))));
    #pragma endscop
}
