/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 ^= ((1773161331 ? (8539868495956412895 & 1) : ((((((arr_6 [i_2]) ^ (arr_1 [i_0] [i_1]))))))));
                    arr_8 [i_0] = ((((((min(8539868495956412904, -3457491461445385707))) || ((((arr_5 [i_0 + 1] [i_1] [i_0 + 1]) - 1490683154))))) ? -1066257044 : (43626 / 31357)));
                    var_20 = ((((8539868495956412895 && (arr_0 [i_1] [i_1]))) ? (arr_4 [i_2] [i_1] [i_0]) : (86 > 218)));
                }
            }
        }
    }
    #pragma endscop
}
