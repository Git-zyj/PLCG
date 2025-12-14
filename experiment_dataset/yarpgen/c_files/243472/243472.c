/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = var_12;
                var_19 &= ((((min(var_16, -256))) * 26489));
            }
        }
    }
    var_20 = (((var_4 >= (var_15 - 99))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                arr_12 [i_3] [16] = var_3;
                var_21 -= ((3226503214 > (max((1763 + 18446744073709551615), 1763))));
                arr_13 [0] &= (max(-28, (var_14 & 28)));
                arr_14 [i_2] [9] [i_3] = ((((min(13317, (1763 < -1751)))) <= 1994175887));
                arr_15 [i_3] = (((18228 && 150) ? ((((((var_15 ? var_0 : 17))) ? (var_14 || 90) : -5))) : ((((((-32767 - 1) | var_5))) ? 255 : 96))));
            }
        }
    }
    var_22 = 4294967295;
    #pragma endscop
}
