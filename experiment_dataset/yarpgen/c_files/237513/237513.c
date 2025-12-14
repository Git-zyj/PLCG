/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = min((min(27820, 37698)), (min(65535, (arr_3 [i_0] [i_0] [i_1]))));
                arr_6 [0] = (min((((!((((arr_1 [i_0]) - var_11)))))), 65530));
                var_18 = ((-(min(((min(1, var_1))), ((52 ? 27814 : 1))))));
            }
        }
    }
    var_19 ^= (((((min(4196336154850600320, var_9))) ? var_15 : (24180 != var_8))));
    var_20 = ((var_3 != (((((var_12 ? var_2 : var_7)) << ((((-24181 ? var_8 : 254)) + 1384850861)))))));
    #pragma endscop
}
