/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (min(((max((min(var_0, (arr_4 [i_0] [i_0]))), 433477760))), (arr_3 [6] [4] [i_0])));
                var_14 = ((((max(((min((arr_1 [i_0] [2]), 423))), var_7))) ? ((min((!419), ((var_3 << (var_3 - 22553)))))) : (max(((1 ? 439 : (arr_1 [7] [i_1]))), (arr_3 [i_1] [i_1] [i_0])))));
                arr_5 [4] = ((!(419 + var_1)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                {
                    var_15 += (arr_9 [i_2] [i_3] [i_2]);
                    var_16 = (max(var_16, (!var_3)));
                    var_17 = (((((0 >> (-var_1 - 1584209216)))) ? (764043824 | var_3) : 1));
                }
            }
        }
    }
    #pragma endscop
}
