/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = (arr_3 [i_1] [i_0 + 2] [i_1 + 1]);
                    var_11 = ((((min(var_1, (arr_3 [i_1] [i_0 - 1] [i_0 - 1])))) ? (((arr_3 [i_1] [i_0 + 1] [i_0 + 2]) ? (arr_3 [i_1] [i_0 + 2] [i_0 + 2]) : var_5)) : (arr_3 [i_1] [i_0 + 1] [i_0 + 2])));
                    var_12 = (min(var_1, (min(-1090580109229596041, 511))));
                    var_13 = (+(max(((var_9 ? (arr_2 [23] [i_2]) : var_0)), ((min(var_5, var_6))))));
                    var_14 &= (((arr_7 [14] [i_0 + 1] [14] [12]) ? ((((arr_7 [i_0 + 2] [i_0 + 2] [i_1 + 1] [i_1 + 1]) > ((((!(arr_7 [i_2] [i_1] [i_0] [i_0])))))))) : (((var_0 && (arr_2 [i_2] [i_0 + 2]))))));
                }
            }
        }
    }
    var_15 = ((!(!var_3)));
    var_16 = (min(var_16, (((var_7 >= (((max(var_3, var_5)) - var_4)))))));
    #pragma endscop
}
