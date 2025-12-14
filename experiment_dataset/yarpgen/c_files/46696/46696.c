/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((((arr_3 [i_1 + 2]) && 0)));
                arr_7 [i_1] = -2048;
            }
        }
    }
    var_14 = (min((!-28), (-120 || var_0)));
    var_15 = (((max(var_11, var_8)) % ((((var_4 ^ -1) ? 511 : var_2)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_16 += ((((max((arr_11 [i_2] [i_2]), (var_10 <= 1332126618)))) <= (((-6387916992068157324 % var_5) ? ((((arr_10 [17]) % (arr_5 [i_2] [i_2])))) : ((var_11 ? var_5 : 4))))));
                var_17 -= (((((((6025995177835339090 ? 75 : 56478))) | ((4294967295 ? 10 : 17)))) <= var_4));
            }
        }
    }
    #pragma endscop
}
