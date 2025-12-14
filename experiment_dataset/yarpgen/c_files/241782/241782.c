/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_10));
    var_14 = ((~((-(var_2 == var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((min(((min(((102 >= (arr_3 [i_1] [i_1] [10]))), (((arr_7 [i_0] [i_1] [i_2]) > (arr_3 [5] [0] [i_2])))))), (min((~1574110732), ((((arr_0 [i_0] [4]) >= (arr_5 [i_0] [i_0] [i_1 - 1] [i_2])))))))))));
                    var_16 |= (((((((max(var_2, -103))) ? (((-(arr_2 [i_2] [i_0])))) : (min((arr_1 [i_0]), 3373852577140284004))))) ? ((((-(arr_2 [i_2] [i_0]))))) : (((((arr_3 [i_0] [2] [i_2]) > (arr_7 [i_2] [1] [i_0]))) ? (((arr_5 [14] [i_0] [i_1] [i_2]) ? 72057594037927935 : -68)) : (var_2 - 20732)))));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = max(-2466313291627093833, (~3708611746));
                }
            }
        }
    }
    #pragma endscop
}
