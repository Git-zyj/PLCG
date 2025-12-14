/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_10;
    var_21 -= ((((30498 + (~var_17))) <= var_5));
    var_22 &= ((-((max((var_0 != var_13), var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = (4096 * 0);
                arr_7 [i_1] [i_1] [i_0] = ((((((30498 ? var_5 : var_4) < ((35037 >> (30513 - 30501))))))));
                arr_8 [2] |= 30507;
                arr_9 [i_0] = 22800;
            }
        }
    }
    #pragma endscop
}
