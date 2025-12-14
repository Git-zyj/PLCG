/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max(((((min(var_9, var_8)) != var_2))), (max(var_7, (max(4121466341624452923, var_0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (arr_6 [i_2] [7] [7] [17]);
                    var_11 = (max((arr_7 [i_0] [i_1] [i_0]), 0));

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [i_2] [i_0] = (max(((max(252, 3335025731646881092))), (((~(arr_8 [i_0]))))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] = arr_5 [i_3] [i_2] [i_1];
                        var_12 = var_4;
                    }
                }
            }
        }
    }
    var_13 = (max(var_0, (max(-1917823689634567730, var_4))));
    #pragma endscop
}
