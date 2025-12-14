/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_12 ? (min(var_1, ((var_11 ? var_3 : var_8)))) : (((1 != ((9878282973841425595 ? var_5 : var_2)))))));
    var_17 = ((((min((-11195 < 11194), var_14))) < (min(((var_11 ? var_1 : 9878282973841425612)), var_7))));
    var_18 &= ((((((min((-127 - 1), var_0))) && (((var_2 ? 0 : var_1))))) ? ((var_8 - (!var_14))) : var_1));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (((1 ? 1 : 14402936834487979634)));
        var_19 = var_11;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = ((((var_3 >= ((min(var_7, 11201))))) ? (~var_9) : (arr_12 [i_0 - 1] [i_2])));
                                var_21 = ((((~(min(var_5, 8408340285016758508)))) % -4194304));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_19 [i_5] [17] = 10068453142848360138;
        var_22 *= (max(26966, 3873549087));
        arr_20 [i_5] = (max(1, 195));
        arr_21 [7] = (((!((min((arr_17 [i_5] [i_5]), 2570108891))))));
    }
    #pragma endscop
}
