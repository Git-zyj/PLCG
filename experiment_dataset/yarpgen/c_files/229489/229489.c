/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = ((-(((max(9093123521621661289, (arr_1 [i_2])))))));
                    arr_10 [i_2] [i_0] [i_2] = (arr_1 [i_1 - 2]);
                    arr_11 [i_0] [i_0] = ((((-120 && (arr_6 [i_2 - 3] [i_2 - 3] [i_1 - 4])))));
                }
            }
        }
    }
    var_13 &= (min(var_11, var_5));
    #pragma endscop
}
