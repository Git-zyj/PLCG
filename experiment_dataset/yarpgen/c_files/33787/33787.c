/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((var_16 ? var_12 : 7)));
    var_19 += var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 -= ((!((((arr_2 [1] [i_1]) ? (arr_1 [i_1]) : (((arr_3 [i_0] [i_0] [2]) ? (arr_1 [i_1]) : 873855260521053843)))))));
                var_21 += (((((~(((arr_0 [i_0]) + var_2))))) ? var_3 : (min(((~(arr_3 [i_0] [i_1] [3]))), var_10))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_22 = var_5;
                    var_23 += (-((59 ? 1744829274 : 1)));
                    var_24 = ((-var_16 && (((1 ? 4294967294 : 1470349016)))));
                    var_25 += ((!((!((min(var_13, var_9)))))));
                    arr_7 [i_0] [i_1] [i_2] = 1;
                }
                var_26 = var_6;
            }
        }
    }
    #pragma endscop
}
