/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 7986;
    var_13 = ((var_7 <= (var_3 || var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((+(((((arr_0 [i_0]) + (arr_4 [i_1])))))));
                arr_5 [i_1] [i_1] = var_6;
                arr_6 [i_1] = (((((7983 ? 1830 : 2281021062))) > (((!13288486085622873039) ? 5158257988086678589 : var_5))));
                arr_7 [i_1] [i_1] = var_0;
            }
        }
    }
    #pragma endscop
}
