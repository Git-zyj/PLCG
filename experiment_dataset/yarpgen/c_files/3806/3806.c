/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 &= (((max(var_6, ((678029575094931696 >> (-5352340951822334719 + 5352340951822334719)))))) ? ((-(arr_5 [i_2 + 1] [i_2 + 1]))) : (max((~-5352340951822334719), -4955583568082981711)));
                    var_12 = ((((var_1 ? (min(var_1, 9223372036854775807)) : var_6))) ? ((((9223372036854775805 <= (arr_2 [i_2 - 1] [i_0 + 2]))))) : 9223372036854775807);
                }
            }
        }
    }
    var_13 -= (((((!var_4) ? (var_5 | -1725726359821433147) : (-2423022498139835153 + var_2)))) ? (min(8183623638503828054, 4917739459176065927)) : ((5628282798364324513 ? (max(var_6, var_4)) : (max(var_5, 3633526925739766766)))));
    #pragma endscop
}
