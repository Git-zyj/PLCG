/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((3490434871672983133 ? 0 : 2007110883));
        var_18 = ((0 % (((((3490434871672983133 ? 4610560118520545280 : var_11))) ? ((var_14 ? var_9 : var_11)) : ((-3490434871672983133 ? var_12 : 0))))));
    }
    var_19 = (((((var_10 ? var_3 : ((var_5 ? var_11 : var_14))))) ? ((var_7 ? ((-3490434871672983133 ? var_8 : var_9)) : 6917529027641081856)) : ((((((3490434871672983133 ? 9046073430596587207 : 9067671933348036109))) ? (-775365078 != var_9) : var_9)))));
    var_20 = var_2;
    #pragma endscop
}
