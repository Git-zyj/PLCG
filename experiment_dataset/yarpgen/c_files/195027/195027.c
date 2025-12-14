/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(1254988480, 3984083762);
    var_19 += (min(((3707699418 ? (var_2 >= var_12) : var_5)), var_17));
    var_20 = (max(var_20, (((!((((var_0 == var_4) ^ (3478464441187211717 ^ var_17)))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (var_6 ? ((57855 ? var_13 : 4194303)) : (arr_0 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_21 = (arr_7 [i_0] [0] [i_1 + 1]);
                        var_22 = (max(var_22, ((((((max(31550, (arr_1 [i_3])))) ? ((-909770760 ? -14591 : (arr_4 [i_0]))) : ((96 ? 19533 : -1981476129))))))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_23 = 13997840275793222321;
                            var_24 = (max((var_17 == 1244328233), ((max((arr_7 [i_1 - 1] [10] [i_1 - 1]), (arr_7 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
                            var_25 += ((((arr_3 [8] [i_1 - 1]) ? (arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1]) : 3061044365)));
                            var_26 = var_0;
                        }
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_5 - 2] [i_2] = ((3 ? ((var_15 >> (130 - 101))) : ((((!3997900143) || (var_17 | 2262422787696744959))))));
                            var_27 = (max(var_27, ((((min(var_16, (8734333707109105067 > 25)))) ? 2828396780 : (arr_4 [1])))));
                        }

                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            arr_19 [i_1] [i_1] [i_6] = ((7 ? 15284825372319866307 : -45071664336615703));
                            arr_20 [i_0] [i_1] [i_3] [i_0] [12] [10] = (arr_17 [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 1] [14]);
                        }
                        var_28 ^= -3521612945577784873;
                    }
                    var_29 |= 843300655879843245;
                    var_30 = (min(var_30, ((min(((((arr_15 [i_2] [i_2] [i_2] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]) > var_13))), (arr_15 [i_2] [0] [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
