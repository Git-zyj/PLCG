/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((13993112962623806807 ? (((max(97, 16483)))) : ((1737129673 ? 13387158148757271846 : (arr_1 [i_0 + 1])))));
                var_19 = (arr_4 [i_1]);
                var_20 = 7;
                var_21 = ((+((((((arr_4 [i_0 - 1]) * (arr_0 [i_0])))) ? var_15 : (((min(1543, 47834))))))));
            }
        }
    }
    var_22 = ((((((8153315015061226337 != var_12) ? 70368744177663 : ((var_14 ? var_7 : var_2))))) ? var_13 : 29986));
    var_23 = ((((max((max(104, 15978)), var_18))) ? (max(203, 2905164772)) : var_3));
    var_24 = ((max((max(var_0, 1512203218237443018)), 27696)));
    var_25 = 60773;
    #pragma endscop
}
