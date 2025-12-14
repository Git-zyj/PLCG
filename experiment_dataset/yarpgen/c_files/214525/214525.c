/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(-9223372036854775807 - 1)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 |= 21663;
        var_16 = ((8 >> (15342208914046321662 - 15342208914046321642)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((((arr_0 [i_0]) - (arr_3 [i_0] [i_0]))) == ((((min(0, var_2))) ? ((~(arr_3 [i_2] [i_1]))) : ((max(195, 107))))))))));
                    var_18 = ((+(min((var_9 - var_11), ((var_10 + (arr_3 [19] [i_1])))))));
                }
            }
        }
        var_19 = (min((((arr_5 [i_0] [i_0]) ? 100 : var_9)), ((((((var_3 - (arr_5 [i_0] [i_0])))) && var_6)))));
        var_20 = arr_1 [i_0];
    }
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        var_21 = (min(var_21, (arr_6 [i_3 + 1] [i_3 - 2])));
        arr_8 [i_3 - 2] = ((arr_6 [1] [i_3 - 2]) && (((arr_7 [i_3 + 1] [i_3 + 1]) && (!14491314879668950593))));
    }
    var_22 = var_8;
    #pragma endscop
}
