/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((32760 ? 57566 : 1)) & var_16))) ? (min(var_10, 6406462027989710869)) : ((((!(var_16 % var_15)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] |= min((-3073 - var_1), (((!(arr_5 [i_1] [i_0])))));
                var_20 = -27302;
                arr_9 [i_0] [i_0] = 3102;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_15 [i_2] [i_3] = (max((3122 * 1), 4210));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((min(-6334, (5729 >= 0)))) ? ((var_7 & (arr_13 [i_3] [i_1]))) : ((1 ? -118222057 : var_1))));
                            var_21 = (min(var_21, -1265));
                        }
                    }
                }
            }
        }
    }
    var_22 ^= (((max(var_3, ((var_10 ? var_16 : var_13)))) > (1 == 27302)));
    #pragma endscop
}
