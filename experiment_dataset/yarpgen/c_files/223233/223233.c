/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (((((min(var_4, var_5))) / var_8)));
                    var_15 = (min(var_15, ((((((arr_0 [i_0 - 1] [i_1 + 2]) | 695087370)) & var_0)))));
                }
            }
        }
        arr_8 [i_0] = var_13;
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_16 = (max(var_16, (125 > 568735220)));
                var_17 += (1321957424 ? -8341 : ((27962 ? 27941 : -1321957405)));
            }
        }
    }
    var_18 ^= (var_4 - -1);
    var_19 = ((((((!var_7) & (~-1321957412)))) ? var_11 : -1));
    var_20 += -1321957416;
    #pragma endscop
}
