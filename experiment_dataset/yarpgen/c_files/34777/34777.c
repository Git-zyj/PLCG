/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = 6144;
                arr_6 [i_1] = 14;
            }
        }
    }
    var_17 ^= 197;
    var_18 = var_10;
    var_19 = (!var_5);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_20 = var_12;
                var_21 = (min((((!((((arr_11 [i_2] [i_3]) ? -1386536446 : (arr_8 [20]))))))), (min((arr_7 [i_2] [i_3]), -48878))));
                var_22 = ((max((max(5403313432724966377, -3927853067102308802)), (((var_6 ? 123 : var_15))))) >> (((((-1 ? var_10 : var_2))) ? ((min((arr_11 [i_3] [i_2]), (arr_10 [i_2])))) : var_3)));
            }
        }
    }
    #pragma endscop
}
