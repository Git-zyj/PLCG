/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = ((((((((var_10 ? 18446744073709551615 : 19253))) ? var_10 : (~46275)))) ? ((((min(46283, 19273))) ? 10 : var_3)) : var_10));
    var_16 &= ((var_9 ? var_11 : ((((2893135452659939281 ? var_5 : 505083152))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((max(4294967262, -505083162)));
                var_18 = ((215 ? (min(-505083174, ((3312199215 ? 8690484725320896662 : 46305)))) : 3));
                arr_6 [i_0 - 1] [i_0 - 3] [i_0] = (min(((((arr_0 [i_0 - 1]) - (arr_0 [i_0 - 2])))), (arr_2 [i_0])));
            }
        }
    }
    var_19 = (max(var_19, var_7));
    #pragma endscop
}
