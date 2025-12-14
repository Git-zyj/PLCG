/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (min(var_19, -2299172914));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_1] |= 2299172908;
                    arr_8 [i_0] [14] [i_0] = (arr_1 [i_1] [i_0]);
                }
            }
        }
        var_20 = (min(var_20, 1995794383));
        arr_9 [i_0] [17] = ((-((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))))));
        var_21 = (max(var_2, (max((max(var_11, (arr_6 [i_0] [i_0] [i_0]))), (((-(arr_4 [i_0] [i_0]))))))));
    }
    var_22 = (min((min(var_13, ((2860616677 ? 5658765575054703417 : 84813563)))), var_16));
    #pragma endscop
}
