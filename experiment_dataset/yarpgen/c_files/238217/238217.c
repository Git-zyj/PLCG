/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = var_8;
    var_13 ^= ((((((((530781065192956372 ? -45 : 18186820084665525708))) ? (var_1 + var_0) : (min(var_6, var_10))))) * (((!-945526646978577374) ? (20239 - -945526646978577374) : (var_8 % var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (min(((1 | ((-2918 / (arr_3 [i_1]))))), var_3));
                    var_15 = (((((-945526646978577353 < (arr_1 [i_2] [i_1]))))) < 1073741822);
                }
            }
        }
    }
    var_16 = (max(var_0, var_3));
    #pragma endscop
}
