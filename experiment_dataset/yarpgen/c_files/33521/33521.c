/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~((0 ? (-32767 - 1) : 4523836844832021615))))) ? var_8 : ((24215 ? 208127206 : 15144))));
    var_19 = (((((-((var_7 ? 649883208 : var_11))))) ? var_11 : var_17));
    var_20 = (~63);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 -= 11466;
        var_22 |= (max(var_11, ((((arr_1 [i_0] [i_0]) ? -10976 : -32763)))));
        var_23 = ((!(((12 ? 224 : 45)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_24 = 4612774777839464475;
                    var_25 = (((max((-127 - 1), (arr_5 [i_0] [i_1] [i_0]))) < var_3));
                }
            }
        }
        arr_8 [i_0] [i_0] = (-65471 || -var_10);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_13 [i_3] = (var_0 || 60651);
        var_26 = 11132;
        var_27 = 126;
    }
    #pragma endscop
}
