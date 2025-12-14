/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_9, 1064300141226221543));
        var_21 = (min(var_21, ((max((((~((~(arr_1 [i_0])))))), ((4294967295 ^ ((((arr_1 [i_0]) | var_3))))))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] |= (!-1);
        var_22 *= 0;
        var_23 = (min(var_23, (((((max(104, 12514))) ? (((!(!-1)))) : (((var_15 && (((var_19 ? -1 : (arr_4 [i_1] [i_1]))))))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    var_24 = (arr_7 [i_2]);
                    var_25 = (min(var_25, (((~(((max(-1, -1)))))))));
                }
            }
        }
        var_26 = 1;
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            {
                arr_16 [i_4] [i_4] [i_5] |= (arr_12 [i_4]);
                var_27 = (((((((((arr_10 [i_4] [i_5] [i_5] [i_5]) ? var_4 : 0))) ? (((arr_13 [i_5]) & -1)) : ((max((arr_13 [i_5]), var_12)))))) ? -1 : var_6));
            }
        }
    }
    #pragma endscop
}
