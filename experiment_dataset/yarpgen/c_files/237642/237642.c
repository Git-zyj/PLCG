/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0]) > (((!((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))))));
        var_13 ^= (((((arr_0 [16]) - (arr_0 [16]))) >> (((arr_1 [i_0]) - 16919))));
        arr_2 [i_0] [i_0] = (1624102365150536084 / -1624102365150536084);
        var_14 = 255;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                var_15 = 1624102365150536103;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        {
                            var_16 = ((max((((40 ? -1624102365150536084 : 4156500892)), var_4))));
                            arr_12 [i_1] = (min(var_9, (arr_8 [i_3 - 1] [i_3] [i_3])));
                            var_17 = (arr_4 [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, var_2));
    #pragma endscop
}
