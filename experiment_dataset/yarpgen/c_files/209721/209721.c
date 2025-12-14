/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((var_8 ? (((arr_4 [i_0 + 1]) ? -5347974682823658471 : (arr_4 [i_0 + 3]))) : (((6 ? (~var_12) : -1289741494))))))));
                var_21 = (((min(3079284704, 45))) ? ((((min((arr_6 [i_0]), 155))) ? var_5 : (min(4294967295, var_10)))) : (arr_2 [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_22 = (!16233785443415943609);
                            var_23 ^= var_4;
                        }
                    }
                }
            }
        }
    }
    var_24 = var_10;
    #pragma endscop
}
