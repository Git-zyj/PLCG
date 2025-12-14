/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(((max(1, 3375317534)) + (min(4050335983, 224))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((((((((arr_0 [i_1]) ? 3 : 0))) ? 18446744073709551613 : (((-2105205273 ? var_7 : -1730703064)))))) && ((max((min(127, 3786319331)), (min(24633, 4294967295))))))))));
                    var_14 = ((((31482563 ? 137304735744 : (!-28491))) >= (2105205280 < 127)));
                    var_15 = (min(var_15, ((((arr_3 [i_2]) ? (((~((127 ? -78 : (arr_2 [i_1 - 2])))))) : ((((max(var_4, 120))) ? 4294967271 : -15575)))))));
                }
            }
        }
    }
    #pragma endscop
}
