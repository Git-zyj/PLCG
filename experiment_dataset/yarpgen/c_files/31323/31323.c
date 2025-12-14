/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_12 ? var_9 : var_12))))) * ((1157049192 ? (3137918104 / 18182831273418715570) : var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (!-685743263);
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((var_15 ? ((min(3609224010, 3137918103))) : (((arr_4 [i_0] [i_0] [1] [i_0]) & 124))));
                }
            }
        }
    }
    #pragma endscop
}
