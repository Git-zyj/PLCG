/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((((var_13 ? var_12 : var_11))) ? (((var_11 >> (var_10 - 663)))) : 771957189477862342)), 11913320247505051824));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = ((((((var_4 ? 1 : var_4))) & (max(6533423826204499786, 11913320247505051836)))));
                            var_20 = 11913320247505051830;
                            arr_10 [i_0] [i_2] [0] [i_3] = (arr_6 [i_0] [i_2 - 1]);
                        }
                    }
                }
                var_21 = (max(var_21, ((((max((arr_6 [i_1] [i_0]), var_12))) ^ (((arr_6 [i_1] [i_1]) ? var_16 : (arr_6 [i_0] [i_1])))))));
            }
        }
    }
    var_22 = ((((((var_15 == 236) ? (var_16 >= var_4) : (max(1, var_1))))) ? -11505 : (max(var_1, ((28962 ? var_6 : var_0))))));
    #pragma endscop
}
