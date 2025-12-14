/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_1 >= var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_13 &= ((!((((~776437431) + (((arr_3 [i_0] [i_1] [i_1]) ? 0 : (arr_0 [i_0] [i_1]))))))));
                var_14 = ((((((((!(arr_1 [1])))) > ((max(49173, 21203)))))) != (arr_0 [i_0] [i_1 + 1])));
                arr_4 [1] [1] [i_1] = (((((arr_0 [i_1] [i_0]) ? (((arr_1 [2]) ? -4020 : (arr_3 [i_0] [i_0] [i_0]))) : var_4)) << (((((arr_2 [i_0] [i_0]) <= (arr_2 [i_0] [i_1]))) ? (127 >> 3) : (max((arr_3 [i_0] [i_1 + 3] [i_0]), (arr_2 [8] [i_1])))))));
                var_15 = (~0);
                var_16 = ((~((((arr_3 [i_0] [i_1 + 2] [i_1 + 3]) >= (arr_3 [i_1] [i_1] [i_0]))))));
            }
        }
    }
    var_17 = 42902;
    var_18 = -61;
    var_19 ^= (((((255 ? -5733 : 1743992040)))) ? (((((var_7 ? var_3 : var_2))) ? var_5 : (~var_6))) : (!var_2));
    #pragma endscop
}
