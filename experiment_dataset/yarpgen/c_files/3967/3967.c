/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~-4);
    var_19 = (min(((var_10 % (((27171 ? 1 : var_3))))), (((((min(14533108813416513958, 1))) ? (~1) : ((1 ? 1 : var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = 6508686420809878274;
                var_21 -= ((1 && -35) || -1);
                arr_6 [i_0] [i_1] = ((-((((min(5071129375602884774, 1))) ? (1 - 37378) : 60419))));
                arr_7 [i_0] [i_0] [i_0] = (max(((((!(arr_1 [i_1]))) ? (arr_2 [i_1 + 1] [i_0]) : ((-63442638 ? 23171 : var_3)))), (((((1 ? 37390 : 46801)) < ((((arr_4 [i_0] [i_0] [i_0 + 2]) || 192))))))));
                arr_8 [i_0] [i_1 + 2] [i_1] = (((1 - 10428315653261231818) << (((min(1, 1)) ? (arr_4 [i_1 + 2] [i_1 + 1] [i_1 - 1]) : ((var_14 ? 1 : (arr_0 [i_0 + 1])))))));
            }
        }
    }
    #pragma endscop
}
