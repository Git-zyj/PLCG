/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((min((min(var_9, var_2)), -1955710226)))));
    var_19 ^= ((min((-1955710243 & 1955710225), (min(-26393, var_11)))));
    var_20 ^= ((1955710225 ? 0 : 26));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (((var_3 & -var_7) ? 218 : 1955710242));
                var_22 = ((1955710242 << (((((min(((var_8 ? (arr_4 [i_0] [i_0] [i_0]) : var_15)), -var_14)) + 174)) - 4))));
                arr_6 [i_0] [i_0] [i_0] = ((+(min((arr_5 [i_0] [i_1]), var_5))));
            }
        }
    }
    var_23 = (max(var_23, ((((!8339558270743278431) ? (((-(max(var_15, var_7))))) : (((max(8339558270743278431, var_17)) * -var_3)))))));
    #pragma endscop
}
