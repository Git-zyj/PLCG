/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((!((max(0, var_13))))))));
                arr_4 [i_0] = ((+((max((arr_0 [i_1 + 2] [i_1]), var_8)))));
                var_17 = ((((-((max(var_7, (arr_0 [i_1] [i_0])))))) >= (((7 || (arr_0 [i_1 - 1] [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            {
                var_18 |= 1;
                var_19 = (arr_2 [i_2] [i_2]);
                var_20 = var_8;
                var_21 = ((-(arr_5 [i_3 - 2])));
            }
        }
    }
    var_22 = ((((1 >= (-9223372036854775807 - 1))) && ((!(((var_10 ? 3072 : var_6)))))));
    var_23 = var_12;
    #pragma endscop
}
