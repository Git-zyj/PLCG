/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_12 == var_8) != var_2)) ? (min(30, -411247657)) : -var_15));
    var_17 = ((2171161324954241141 ? 411247657 : ((16275582748755310474 ? -1198383737965502915 : -6131))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1 - 4] [i_2] = ((((min((arr_5 [i_1 - 3] [i_1 - 4]), (arr_5 [i_1 - 3] [i_1 - 4])))) / -1942114191));
                    arr_10 [i_2] [i_2] [i_2 - 1] = -8003118888833250395;
                    var_18 = 16;
                }
            }
        }
    }
    #pragma endscop
}
