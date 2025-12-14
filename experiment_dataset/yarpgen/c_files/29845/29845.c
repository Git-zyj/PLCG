/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = min((arr_2 [i_1]), (((((14732786464408860117 ? 8 : 3713957609300691498))) ? (~1023) : ((var_4 ? var_12 : -26975)))));
                var_16 = ((var_0 ? 1 : ((-1 ? 1 : (((arr_1 [i_1]) ? (arr_0 [i_0] [i_1]) : 555866476))))));
                var_17 = (1902044442 ? 1506525731 : 242);
                var_18 = (max((((!(arr_0 [i_0] [i_0])))), 853522204));
            }
        }
    }
    var_19 = var_4;
    var_20 -= (((((65535 ? (239 < var_11) : (1 / var_10)))) ? (max(((var_11 << (var_0 + 926826526))), ((var_5 ? var_11 : 1048575)))) : (((((max(14008933102545231805, -1048563))) ? -1048576 : (var_4 < 20407))))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_21 = ((-100858641 ? (arr_2 [i_2]) : var_11));
        var_22 = 4294967295;
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_23 = (arr_0 [i_3 - 3] [i_3 - 1]);

        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            var_24 = (((((-(arr_0 [i_4] [i_4 - 1])))) ? 2964505791642249536 : ((var_11 ? (arr_5 [i_3]) : (max((arr_7 [i_4]), var_3))))));
            var_25 -= (min((max(22379, ((59999 ? 2845 : 4045077633028112558)))), var_13));
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_26 = 1;
        var_27 ^= (((!1025) ? (((arr_13 [i_5] [i_5]) ? 3156891521122619238 : (arr_13 [i_5] [i_5]))) : (((3836 ? 1025 : (arr_13 [i_5] [i_5]))))));
    }
    #pragma endscop
}
