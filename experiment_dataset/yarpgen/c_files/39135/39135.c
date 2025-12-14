/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-43 == var_10);
    var_14 += ((~(((~var_1) | (~53429)))));
    var_15 |= 16384;
    var_16 = (((((var_0 ? var_3 : var_5))) ? var_10 : 1168553737));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 += 4032;
                    arr_8 [i_0] [i_0] = ((~((((var_6 ? 1 : 10214658142625434798)) % ((max(var_0, var_3)))))));
                    var_18 = (max(var_18, (((43 != (291251596 != -43))))));
                }
            }
        }
    }
    #pragma endscop
}
