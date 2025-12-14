/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((18446744073709551615 & (((((var_5 ? var_2 : 17781743707798929807)))))));
    var_13 = ((((-var_2 == (max(8388352, 26)))) && ((max((-32765 <= 15), var_0)))));
    var_14 = 46;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 -= 1067710778;
                    var_16 = (((1970530297 % 1) ? (((((arr_8 [i_0] [i_0] [i_1 + 2] [i_2]) < 1153)))) : 17781743707798929807));
                    var_17 = 124;
                }
            }
        }
    }
    #pragma endscop
}
