/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_10 ^= ((14079461479286572076 ? (18446744073709551615 && 4294967295) : (var_7 != 4294967295)));
                            var_11 = (max(var_11, (((((max((arr_0 [i_3] [i_1]), (var_2 * var_5)))) || ((((!(arr_1 [i_1] [i_3]))))))))));
                            var_12 *= (((((((!(arr_2 [i_0] [i_1] [9]))) ? var_8 : (arr_4 [i_0] [i_0] [i_0])))) ? (((-(((arr_4 [i_2] [3] [i_0]) ? var_0 : var_8))))) : 8));
                        }
                    }
                }
                arr_8 [i_0] [i_1] = var_7;
                var_13 = (((-((var_2 ? 7 : var_2)))));
            }
        }
    }
    var_14 = var_8;
    var_15 = var_1;
    #pragma endscop
}
