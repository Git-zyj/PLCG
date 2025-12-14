/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((-(!-3333434132073982648)))) ? ((min(19, -1))) : (min(524287, (!230300431192982861))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_0] [i_1 + 1] [i_2] = ((18446744073709027331 ? 5119 : 8191));
                    var_11 -= 101;
                }
                arr_8 [i_0] [i_0] [i_1] = var_6;

                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    arr_12 [i_3] [i_1 + 1] [i_3] = 18446744073709027328;
                    var_12 = (min(251, 17513541756038361889));
                }
            }
        }
    }
    var_13 = (140735340871680 - 17);
    #pragma endscop
}
