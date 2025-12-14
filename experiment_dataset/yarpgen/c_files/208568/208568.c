/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (6 | var_1);
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (((min(((var_8 ? (arr_3 [i_1]) : (arr_4 [i_0] [1] [i_2 - 1]))), ((((arr_1 [i_0] [i_1]) != 16))))) == (arr_4 [i_2] [i_1 - 1] [i_0])));
                    arr_7 [i_0] [i_2] [i_2] [i_2 - 1] = ((12627236231904068655 ^ -1919) + var_5);

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_2] = ((~(((arr_1 [i_3] [i_2 + 2]) ? var_7 : 70368743129088))));
                        arr_12 [i_0] [i_0] [i_0] [i_2] = 18427;
                    }
                    var_15 = 1;
                    var_16 = (max(var_16, ((min(-1919, 16)))));
                }
            }
        }
    }
    #pragma endscop
}
