/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_1 ? -var_9 : (var_16 * var_11)))) ? ((((var_3 ? 0 : var_14)) - var_9)) : var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = ((-8681621593896643851 ? 5489363039441967893 : 18446744073709551615));
                arr_7 [i_0] = ((((8681621593896643846 != ((18446744073709551612 ? 18446744073709551615 : var_9))))));
                var_19 += ((~((18446744073709551597 ? (((arr_6 [i_1] [i_1] [i_1]) - 2878377857193372408)) : (((((arr_6 [i_1] [i_1] [i_1]) || var_14))))))));
                var_20 = (((arr_5 [i_1]) ? (((~(arr_0 [i_0])))) : 3978814330955382373));
            }
        }
    }
    #pragma endscop
}
