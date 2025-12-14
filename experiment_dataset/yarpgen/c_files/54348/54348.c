/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= 0;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [12] = (((56708 | var_18) && 8086822083383850715));
            var_20 = (~-1);
            var_21 -= ((!-25) >= 8827);
            arr_8 [i_1] = 938427263;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_22 = ((arr_10 [i_0] [i_2]) / ((1979415562 ? -8827 : 56724)));
            var_23 = (((((arr_2 [i_0] [i_2]) != 65535)) ? (max(938427252, (arr_5 [i_0] [i_2]))) : (arr_5 [i_0] [i_2])));
            var_24 = (arr_0 [i_0]);
            arr_13 [i_0] = ((((max(((var_17 ? (arr_10 [i_0] [i_0]) : 3585)), (938427252 || var_12)))) ? (((~((((arr_11 [i_0]) != 1)))))) : (arr_6 [i_0])));
        }
        var_25 = (((0 == var_6) ? (((arr_12 [i_0] [i_0]) / 3585)) : ((938427237 ? 0 : 126))));
        var_26 = (max(var_26, (((-8828 ? ((((~4605) ? 938427249 : ((51 ? 61951 : var_3))))) : ((((max(-690968199, 56708))) ? (!3356540032) : -7708750575342326633)))))));
        var_27 = ((((((((~(arr_12 [i_0] [i_0])))) && ((((arr_0 [2]) * -1))))))) != ((-(((arr_11 [i_0]) ? 938427263 : 0)))));
        var_28 = (min((((arr_1 [i_0]) ? 6304860084845661288 : (arr_1 [i_0]))), ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = -35;
        var_29 = 690968199;
        var_30 = (min(var_30, (((((max(-1, ((var_3 ? 15148 : var_11))))) ? ((((((max(3509018802, (arr_6 [0])))) && ((3509018802 < (arr_3 [8]))))))) : (arr_3 [i_3]))))));
        var_31 = (min(var_31, (((!(((((((arr_5 [i_3] [i_3]) && 0))) * (var_17 <= 4007498920)))))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_32 = (((((((max(1, (arr_14 [i_5 + 1])))) ? ((max(255, 0))) : 1))) ? ((-((-2342801553663524101 / (arr_12 [i_5 - 1] [9]))))) : ((max((max((arr_19 [i_4] [i_4]), 553258945)), 8828)))));
                    var_33 = (min((((min(287468376, 56708)) >> (1583755328783623771 - 1583755328783623748))), var_14));
                }
            }
        }
        var_34 = (min(var_34, var_1));
    }
    var_35 = (min(var_8, var_9));
    #pragma endscop
}
