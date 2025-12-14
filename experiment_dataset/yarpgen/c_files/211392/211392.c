/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_11;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = (max(var_17, (((((((arr_2 [i_0]) - 8))) || ((min((arr_1 [i_0] [i_0]), 805516212))))))));
        var_18 = ((((((((arr_2 [i_0]) || (arr_1 [i_0] [i_0])))) < ((min((arr_0 [i_0] [i_0]), var_13))))) ? ((~(arr_0 [i_0 + 2] [i_0]))) : ((max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 2]))))));
        arr_3 [i_0] = -20;
        arr_4 [i_0] = (max((((-(((arr_0 [i_0] [i_0]) ? var_3 : var_1))))), (((arr_1 [i_0 - 1] [i_0 + 1]) ? ((var_3 ? 14356245230142794658 : var_9)) : (min((arr_1 [i_0] [3]), (arr_2 [i_0])))))));
        arr_5 [i_0] [i_0] = (5 < -8);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_1] [i_2] = ((((((((4090498843566756958 ? (arr_12 [i_3] [i_2] [i_2] [i_1]) : 39725))) ? (arr_10 [i_2] [i_2]) : var_6))) ? ((((!(((-121 ? -1 : -11289))))))) : (min((min(var_2, (arr_11 [i_1] [3] [i_3]))), (arr_12 [i_1] [i_2] [i_2] [i_3])))));
                    var_19 -= (((((((((arr_8 [i_1]) ? 4090498843566756958 : 4))) ? ((39725 ? 2610366928655515232 : (arr_11 [11] [11] [11]))) : (max(25802, 4090498843566756958))))) ? (min((arr_8 [i_1]), ((14356245230142794658 ? 11289 : 4090498843566756962)))) : var_7));
                }
            }
        }
        arr_14 [i_1] = (((min((max(867776515, var_4)), ((14102772682667296466 >> (11459649495143517807 - 11459649495143517763))))) >= (max((((4294967295 ? 1510632147 : 39))), (arr_7 [i_1])))));
    }
    #pragma endscop
}
