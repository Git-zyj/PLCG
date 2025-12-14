/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (~var_6);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = arr_1 [i_0] [i_0];
        arr_3 [7] [i_0] = ((-0 & (238 <= 113)));
        var_20 = (((((65535 ? -32766 : 4104823865155930819)) + 9223372036854775807)) << ((((-(arr_0 [i_0]))) - 15493476058132843547)));
    }
    var_21 = (((((max(var_9, var_5)) + (max(var_2, var_9))))) ? (((~(var_4 < 28)))) : (((min(23, var_8)) | -1831520905)));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            {
                var_22 = (((((max((arr_6 [i_1] [i_1] [i_1 - 1]), (arr_6 [i_1 + 1] [i_1 + 1] [i_2]))))) ^ 3243421015797421689));
                var_23 = (min((arr_6 [i_1] [i_2] [i_2]), (((arr_4 [i_1]) / (arr_7 [i_1] [i_1] [i_2])))));
            }
        }
    }
    var_24 |= 122;
    #pragma endscop
}
