/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = min(var_17, ((((min(var_16, (arr_6 [i_0] [i_0] [i_0])))) ? -4538108979788185825 : var_10)));
                    arr_10 [i_0] [i_1] [i_2] [i_0] = ((-4538108979788185825 ? (((1 / -4538108979788185825) + -4538108979788185825)) : var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = (-4538108979788185825 * 0);
                                var_22 = 1;
                                var_23 = (((((-(~var_17)))) ? var_17 : (arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 1])));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_0] [i_0] = var_10;
                    var_24 = (((max((-1067441800 + var_6), var_19)) < ((((min((arr_11 [i_0] [i_0] [i_2] [i_0]), var_3)) == (((92 ? 3607168480 : var_19))))))));
                }
            }
        }
    }
    var_25 = ((((((~var_19) ? var_7 : (4538108979788185809 & -1067441793)))) ? 3607168499 : 4324));
    var_26 *= ((((((((var_11 ? 4538108979788185813 : var_17)) > ((min(var_17, var_16))))))) > var_11));
    #pragma endscop
}
