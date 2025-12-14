/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(25757, 11374687147264771716));
    var_20 = ((((((min(var_4, 1)) == (1517524622031803332 > 1)))) > ((((max(1962712825, var_9)) == ((min(0, 1))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 &= (max(4374602308253662855, (1 < 2050160251)));
                    arr_9 [i_0 - 1] [i_0 - 1] [1] [i_2] = (max(((var_17 == (arr_6 [i_0] [i_1 + 1] [3]))), (((((100 == (arr_1 [i_1] [i_1])))) < ((min(23721, (arr_1 [i_1 - 1] [i_1 - 1]))))))));
                    var_22 *= (max((max(-114241444, -40)), (((arr_5 [i_0] [i_1 + 3]) + var_3))));
                }
            }
        }
    }
    #pragma endscop
}
