/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_14;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (((arr_5 [i_0] [i_0] [i_0] [8]) % 4651376408803677273));
                    arr_7 [i_0] = ((-121 != (arr_1 [8])));
                }
            }
        }
    }
    var_19 += (!var_15);
    var_20 = (max(var_20, (((1870480886 ? (((var_13 % -92) ? 708142082 : -1622794516495494994)) : 20)))));
    #pragma endscop
}
