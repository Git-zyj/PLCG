/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((-7250 ? 29337 : var_8));
    var_16 = (((((min(var_3, var_4)))) ? (var_6 != -29308) : (((67 && -32) ? ((2171918847 ? 33 : 36181)) : ((1 ? -17398 : var_11))))));
    var_17 &= -3309677030571754979;
    var_18 += var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = ((~(~-1037)));
                    var_19 = 3724284753;
                }
            }
        }
    }
    #pragma endscop
}
