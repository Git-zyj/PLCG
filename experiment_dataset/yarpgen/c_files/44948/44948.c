/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_8 [i_0] [i_2] [i_3] = (((((arr_6 [i_2 + 1] [i_2] [i_2 + 2] [i_2 + 1]) - (arr_6 [i_2 + 2] [i_2] [i_2 + 2] [i_2]))) ^ (arr_6 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_3])));
                        var_14 = ((((((0 >= var_7) + (arr_6 [i_0] [i_1] [i_0] [11])))) ? ((((arr_1 [i_2 - 1] [i_2 + 1]) >= ((min(-737032231, var_13)))))) : (((arr_2 [i_2 - 1] [i_2] [i_3]) + (arr_6 [i_2 - 1] [i_2] [i_2] [i_2])))));
                        arr_9 [i_0] [i_0] [i_2] [i_2] = var_10;
                        arr_10 [7] [7] [i_2] [7] [7] [i_3] = arr_4 [i_2];
                    }
                    arr_11 [i_0] [i_1] [i_0] = -2116844190;
                }
            }
        }
    }
    var_15 = (~var_6);
    var_16 -= (max((((3387511208099453391 & -640) ? (var_6 - var_1) : (min(var_5, var_9)))), (((var_8 ^ (var_10 >= var_4))))));
    var_17 = (((((var_8 == var_2) + var_1)) == ((((max(var_1, var_3)) != var_13)))));
    var_18 = 0;
    #pragma endscop
}
