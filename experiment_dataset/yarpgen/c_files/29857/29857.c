/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_5;
    var_12 = ((((((~2723953129) != var_6))) * ((((~var_8) > (var_7 * var_2))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 ^= 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((((arr_6 [12] [i_2] [5] [1]) << (var_4 - 6046929522270090985))))));
                    var_15 = (((((((var_7 - (arr_2 [i_0] [1] [12])))) ? -6195990854476456201 : ((((var_5 < (arr_5 [i_2] [i_2]))))))) & ((((var_3 == ((var_3 ? var_8 : var_5))))))));
                }
            }
        }
    }
    #pragma endscop
}
