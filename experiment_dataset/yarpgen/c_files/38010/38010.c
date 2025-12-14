/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (((arr_3 [i_0] [i_1 - 2]) ? ((((arr_4 [i_0 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_4 [i_0 - 4] [i_1] [i_2]) : (arr_4 [i_0] [i_0] [i_2])))) : ((3 ? ((4042 ? 1251511965256738347 : (arr_3 [i_0] [i_2]))) : -1))));
                    var_15 = (max(var_15, ((((((6824 ? 1 : 3))) ? (61493 & 576460752303423487) : ((min(1747319334, var_8))))))));
                    var_16 = ((((((241 ? -576460752303423504 : (arr_0 [i_0] [i_0]))))) ? 15142748620994091119 : 1));
                }
            }
        }
    }
    var_17 = (min(241, 5));
    var_18 = var_1;
    var_19 = ((1 ? 4046 : -1));
    #pragma endscop
}
