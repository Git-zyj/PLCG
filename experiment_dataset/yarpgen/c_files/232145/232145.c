/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_0;
    var_12 = 9223372036854775807;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (~var_0);
                var_14 &= (((-9223372036854775795 != -1802081136833427655) >= (max(-var_8, ((var_5 + (arr_4 [1])))))));
            }
        }
    }
    var_15 = (((min(-var_7, (var_5 + var_10))) > 9058));

    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((-1802081136833427655 ? ((((min(var_8, var_6)) <= (arr_6 [i_2])))) : ((-(var_10 + var_6)))));
        arr_9 [1] = -58699;
        var_16 += (arr_7 [i_2]);
        var_17 = ((-2277486492245159828 == (min((1802081136833427654 > 50561), -1802081136833427655))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = -1;
        var_18 -= (min(((((var_3 ? 1967374856 : var_3)) | -1985294023)), var_9));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_19 |= (min(-var_10, (~15)));
        arr_16 [i_4] [i_4] = (var_2 ? (((0 ? var_0 : var_7))) : (arr_15 [i_4] [18]));
    }
    #pragma endscop
}
