/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min((-27535 & -2080327834), (~31633)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (max((!4034572336933946717), -72));
                            var_13 = (!-64554);
                        }
                    }
                }
                arr_12 [i_0] &= ((+((((!18446744073709551615) || 0)))));
                var_14 -= ((~(~0)));
                arr_13 [i_1] = ((~((~(!1)))));
            }
        }
    }
    var_15 = (min((min(var_2, (!30743))), (((!((max(0, 10735))))))));
    var_16 = var_3;
    #pragma endscop
}
