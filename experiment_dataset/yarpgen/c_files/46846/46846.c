/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_0] [11] [i_1] = (((((((min(111, (-127 - 1)))) ? -119 : 4))) ? 0 : var_8));
                    var_12 = (min(var_12, 19));
                }
            }
        }
    }
    var_13 = (1023 + 2428857034376843372);
    var_14 = (max(-14, (max(var_7, ((max(-1, -11)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_4] = (((((13 ? 30 : 105))) ? (((arr_12 [i_3 + 1]) ? -106 : ((9223372036854775807 ? 9223372036854775807 : 3776198292)))) : (((((((arr_15 [i_3] [i_3] [i_4]) ^ (arr_13 [i_3])))) ? (~var_9) : 0)))));
                var_15 -= ((((((17628288200438063486 || ((((arr_10 [i_3] [1]) ? var_1 : var_4))))))) * ((((min(4294967295, 64))) ? var_9 : (2147483636 - 49)))));
                var_16 = (((arr_12 [i_4]) ? 2147483647 : ((~((~(arr_10 [i_3] [i_3])))))));
                var_17 = ((((max(1, 13))) ? var_6 : ((max((arr_15 [i_3 + 1] [i_3] [i_4]), (arr_15 [i_4] [0] [i_3 + 1]))))));
            }
        }
    }
    var_18 = 255;
    #pragma endscop
}
