/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_6);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = ((var_13 <= (((max(var_19, (arr_1 [i_0] [i_0]))) | (arr_1 [i_0] [i_2])))));
                    var_22 = (min((((((var_6 ? var_4 : 2570987590571725664))) ? (!-2570987590571725671) : (1 || 18446744073709551597))), (arr_0 [i_2] [i_0])));
                    arr_7 [i_0] [i_1] [i_0] = var_12;
                    arr_8 [i_0] [i_0] = (-2570987590571725666 != var_19);
                }
            }
        }
    }
    var_23 = (min((((!((min(var_1, var_2)))))), var_1));
    var_24 *= (min((-9223372036854775800 && 1), ((min(var_17, var_15)))));
    #pragma endscop
}
