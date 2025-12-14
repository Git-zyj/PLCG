/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((var_13 ? var_2 : ((((min(var_16, 20670))) ? (((20657 ? 108 : 38233824))) : (min(var_13, var_10)))))))));
    var_21 = ((max((max(20671, 38233824), var_2))));
    var_22 = (max(var_15, (max((max(44866, var_10)), (max(13737327698524416183, var_15))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_23 = (min(((((-113 ? 32750 : 4256733448)))), (max(((min(var_13, var_11))), (((arr_5 [i_1]) * -9040293884547148333))))));
                    var_24 = (((((-44867 ? ((32750 ? (arr_6 [i_2] [i_1]) : (arr_2 [3] [1]))) : (((!(arr_4 [7]))))))) ? (!125) : (max((((arr_8 [i_0] [i_1] [i_2] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0] [i_1]))), ((max(1, (arr_8 [5] [5] [i_1] [i_2]))))))));
                    var_25 = (min((arr_2 [i_0] [i_1]), ((min(var_3, (arr_3 [i_0] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
