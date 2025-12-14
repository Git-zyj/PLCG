/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_9;
    var_18 = ((23460 ? (((var_10 ? 168 : var_10))) : var_7));
    var_19 = (max(var_19, var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 ^= ((32746 ? (((168 ? 2097144 : 250))) : 29434));

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    arr_7 [i_0] [i_2] = (((2019938443 ? -2019938443 : 234)));
                    arr_8 [i_0] [i_2] [i_2] [i_0] = (min((((0 ? 23460 : ((232 ? 240 : -23468))))), (max((var_12 & 12523), 18446744073709551615))));
                    var_21 = (~-23443);

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_22 = (!103);
                        var_23 += -2147483637;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_24 = (min(var_24, (((((((((144115188075855871 ? var_12 : 38301))) ? 65283 : (~110)))) ? ((var_5 ? 7881299347898368 : 103)) : (((((-1539600807 ? 15496 : -2097145))) ? var_14 : -10998284063585334894)))))));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_25 = (min(var_25, -var_15));
                            var_26 = ((31349 ? (max(9, ((10 ? 6722556063808604478 : -861789410511585851)))) : ((237 ? -2311084951970555294 : -24))));
                            var_27 = (((max(var_2, -114))));
                            arr_17 [i_0] [i_2] = 38;
                        }
                        var_28 = (var_7 ? var_15 : (((110 ? 212 : var_2))));
                        var_29 = (260096 ? 225 : 30);
                        var_30 = (-((861789410511585850 ? 9157442554013394280 : 1)));
                    }
                    for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_31 = (min(var_31, (~59)));
                        var_32 *= 8318944639230444915;
                        var_33 = var_7;
                        var_34 += (~var_0);
                    }
                    for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_35 = ((-var_6 ? (((((1 ? 65306 : 250))) ? 1 : 1)) : 113));
                        var_36 = ((!((max(((-114 ? 113 : var_3)), 163)))));

                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            var_37 = (min(var_37, var_9));
                            arr_28 [i_8] [i_2] [i_2] [i_2] [i_0] = (((245 ? 116 : 1)));
                        }
                    }
                }
            }
        }
    }
    var_38 = (((((-382471062 ? var_4 : (!-120)))) ? (-382471057 | var_7) : var_5));
    #pragma endscop
}
