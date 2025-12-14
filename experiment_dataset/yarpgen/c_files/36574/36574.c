/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_16 = (max(var_16, 575897802350002176));
                    arr_8 [i_0] [i_1 + 2] [i_0] = ((~(!575897802350002176)));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_17 = 575897802350002176;
                    var_18 = arr_0 [i_0] [i_0];
                    var_19 = (max(var_19, 17870846271359549418));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    arr_17 [10] [10] [i_4 - 1] = -6473983861764428428;
                    var_20 = (max(var_20, (~-93)));
                }
                var_21 = ((((((~(-9223372036854775807 - 1))))) ? 17870846271359549439 : (-32767 - 1)));
            }
        }
    }
    #pragma endscop
}
