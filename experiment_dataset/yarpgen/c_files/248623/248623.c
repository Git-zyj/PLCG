/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((((-9 ? 11158 : 28))) ? ((1 ? (arr_3 [i_1]) : 15583979000540161130)) : (((((((arr_5 [i_2] [i_2] [8] [i_0]) > 1))) >> (((var_6 - -2000999037) - 2000999031))))));
                    var_20 = (arr_6 [6] [14] [6]);
                    var_21 = (min(var_21, ((max((((((((arr_6 [i_1] [i_1] [i_0]) - (arr_4 [i_1])))) ? var_18 : ((-1959036279 ? -4241 : (arr_1 [3])))))), ((((1 ? 30032 : 18446744073642442752)) % (arr_5 [i_0] [i_1] [i_0] [i_0]))))))));
                }
            }
        }
        var_22 = (((((((min(50658, 255))) == (0 && var_8)))) % (arr_3 [i_0])));
        var_23 = ((((+(max((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0]))))) > (max(0, ((((arr_6 [i_0] [i_0] [i_0]) - var_16)))))));
        arr_7 [i_0] [1] = ((((((arr_5 [i_0] [i_0] [i_0] [i_0]) == (arr_3 [i_0]))) ? ((max(65535, 127))) : 226)));
    }
    var_24 = var_17;
    #pragma endscop
}
