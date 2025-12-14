/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((((-251829708 ? 131008 : var_1))) ? (max(4467570830351532032, 81)) : ((max(var_6, var_12))))), ((min((((-2147483623 + 2147483647) << (92 - 92))), (var_9 ^ var_2))))));
    var_16 = (((((1842767892 ? ((min(81, 2678664111))) : 1700440854497075663))) ? (max(((min(var_10, (-2147483647 - 1)))), (2147483642 & 4467570830351532045))) : ((((((var_10 ? var_14 : var_10))) / (max(var_6, var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((((-7 & 591642679) ? (((arr_4 [i_2]) ^ var_10)) : ((min((arr_8 [i_0] [i_0] [i_1] [i_1]), (arr_2 [i_0])))))) ^ ((min(((var_1 ? (arr_2 [i_0]) : 2147483621)), (((arr_4 [i_0]) ^ var_5))))))))));
                    arr_9 [i_0] [i_0] [6] = (max((((((min(1, 1616303198))) ? ((var_2 ? 1 : (arr_8 [i_2] [i_1] [i_2] [i_1]))) : (min(-2147483615, -1723946434))))), (((max(10469137399650739716, 1)) >> (min((arr_1 [i_1]), 7))))));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_18 = (((((((max(-16226, (arr_7 [i_0] [i_2] [i_3])))) ? ((-2147483637 / (arr_1 [i_1]))) : (((15 || (arr_1 [1]))))))) ? (min(((min((arr_8 [15] [i_2] [i_1] [i_0]), (arr_0 [i_0])))), ((var_0 ? var_10 : var_4)))) : (max((((var_6 ? (arr_12 [14] [i_1] [i_3] [14]) : (arr_6 [i_0] [i_1] [i_2])))), (max((arr_11 [i_0] [i_0]), (arr_6 [i_0] [i_1] [i_2])))))));
                        var_19 = (max(var_19, (min((4204254453476510437 == 2147483647), (min((max(228, 12303521973479147995)), ((min(var_14, var_7)))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
