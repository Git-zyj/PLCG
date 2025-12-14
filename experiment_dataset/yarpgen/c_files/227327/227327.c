/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((2147483647 << (((18446744073709551612 ^ 33067) - 18446744073709518551)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = arr_0 [i_0 + 1] [i_0 + 2];
                arr_6 [i_0] [i_0] [i_0] = (min((((!((var_3 || (arr_1 [i_0])))))), ((~((var_8 ? (arr_4 [i_0] [i_0] [i_1]) : (arr_4 [i_0] [16] [i_1])))))));
                arr_7 [i_0] [i_0] [i_1] = var_7;
                var_13 *= (((((~((((arr_3 [17] [i_1]) > var_5)))))) ? ((((arr_0 [i_0] [i_1]) > (max(var_6, (arr_2 [i_0])))))) : ((((~(arr_2 [i_1])))))));
            }
        }
    }
    #pragma endscop
}
