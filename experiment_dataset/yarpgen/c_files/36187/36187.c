/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (min(((var_16 ? (((max(0, 35668)))) : ((var_10 ? 12102887876307696670 : var_7)))), (((((min(var_8, 47695))) | ((-62 ? -79 : 65531)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_18 += (min((((((var_8 ? (arr_1 [i_0] [i_0]) : 47676)) >= ((((arr_0 [i_0] [i_0]) < 558426651)))))), ((61 ? ((-320386814997677421 ? 3767143872 : var_12)) : -50))));
                    var_19 = (max(((max(var_10, var_13))), (max(4537888350474195892, 3736540645))));
                    var_20 = (min(var_20, 32766));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((3767143872 ? -1024 : 132)))));
                                arr_13 [i_0] [i_0] [i_3] = (arr_12 [i_0] [i_0 + 3] [i_1] [i_3] [i_4] [i_4] [i_1]);
                            }
                        }
                    }
                }
                arr_14 [i_1] = ((((min(((var_10 ? 17816 : 132)), 62))) ? var_8 : 62));
            }
        }
    }
    #pragma endscop
}
