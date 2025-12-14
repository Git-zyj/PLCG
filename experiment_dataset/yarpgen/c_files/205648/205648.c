/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (((((arr_2 [i_0]) || var_0)) ? (((!(arr_1 [i_0])))) : 4294967295));
        var_17 = ((max((max(590180151, 16111576451610084267), var_3))));
        arr_3 [i_0] = (((((-7642 + (arr_2 [i_0])))) ? (!59) : ((((arr_2 [i_0]) || (arr_2 [i_0]))))));
        var_18 = max((min((arr_2 [i_0]), 1152921504606846975)), (arr_1 [i_0]));
        var_19 = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [10] = (((((var_3 ^ (arr_5 [i_1])))) + ((-((18446744073709551615 ? 1469197674470004466 : 8))))));
        var_20 = var_14;
        var_21 = 15360;
    }
    var_22 = (((max(var_3, (-45 + 18446744073709551600))) << (var_3 - 2333911096)));
    var_23 &= var_11;
    #pragma endscop
}
