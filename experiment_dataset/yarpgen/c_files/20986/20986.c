/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((9223372036854775790 >> (-467142748408755669 + 467142748408755692)));
    var_12 = ((((((((-2147483647 - 1) ? (-127 - 1) : var_0))))) - ((~(var_9 + 18446744073709551609)))));
    var_13 = ((((1719826078 ? (!1253851840) : 228)) != (!var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [4] = ((~(arr_1 [i_1])));
                arr_7 [i_1] [i_1] [i_0] = (max(18446744073709551594, 1));
            }
        }
    }
    #pragma endscop
}
