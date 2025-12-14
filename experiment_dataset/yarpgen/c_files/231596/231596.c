/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = (((((((min(4611685468671574016, 13835058605037977600))) ? (arr_5 [i_1 - 3] [i_0] [i_1 - 3]) : (((arr_3 [i_0]) ? var_4 : 2999991015))))) ? (((+(((arr_0 [i_2] [i_0]) ? (arr_0 [i_0] [i_0]) : 1294976280))))) : (min((arr_6 [i_0] [i_0] [i_2]), (~-5419506723225127679)))));
                    var_18 = arr_4 [i_0] [i_0] [i_2];
                }

                for (int i_3 = 4; i_3 < 24;i_3 += 1)
                {
                    var_19 -= ((min((arr_6 [i_3] [20] [i_3 - 1]), (arr_8 [18] [i_1 + 1] [11] [i_1 - 1]))));
                    var_20 = (max(var_20, (((((max((arr_6 [i_1 - 2] [2] [i_3]), (arr_6 [i_1 - 1] [24] [i_3])))) ? var_15 : ((+((30310 ? (arr_6 [i_0] [18] [i_3]) : (arr_2 [i_1] [i_0]))))))))));
                }
                var_21 = (arr_11 [i_0] [i_0] [6]);
            }
        }
    }
    var_22 = (var_6 ? (min(var_17, (min(var_11, var_0)))) : ((((((max(var_3, 329144193997681204))) || (((var_10 ? var_5 : 29363))))))));
    #pragma endscop
}
