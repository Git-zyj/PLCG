/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((((var_7 ? var_10 : (((min(8, var_8))))))) || (var_0 <= 65535)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [6] [6] &= (65535 & var_6);
                var_13 -= 14336;
                var_14 = (min((((((((arr_2 [i_0]) < var_2))) != var_5))), ((-(arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] = (((arr_4 [i_3]) ? ((((arr_12 [i_3] [i_2] [i_0]) ? (arr_12 [i_0] [i_1] [i_2]) : (arr_12 [i_0] [i_1] [i_2])))) : (((16352 ? var_6 : (arr_3 [i_0] [i_0] [i_0]))))));
                            var_15 = var_2;
                        }
                    }
                }
            }
        }
    }
    var_16 -= ((-(!var_8)));
    #pragma endscop
}
