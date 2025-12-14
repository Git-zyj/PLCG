/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (min(var_10, (max(var_2, var_10))));
    var_14 = (((((var_2 >> ((((9682148301886159271 ? var_10 : var_7)) - 18446744073709551469))))) ? ((var_4 ? ((var_10 ? var_8 : var_5)) : var_5)) : (((((var_8 << (7 - 7)))) ? (var_1 & var_5) : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 &= 9682148301886159287;
                var_16 = var_2;
                arr_6 [i_0] [i_0] [i_0] = (((arr_3 [i_0]) ? (arr_3 [i_0]) : 9890555824905590797));
                var_17 = (((((-(((arr_0 [i_0]) ? 8764595771823392327 : (arr_2 [4] [i_1])))))) ? 12477078192179033443 : 15115162342752138749));
            }
        }
    }
    #pragma endscop
}
