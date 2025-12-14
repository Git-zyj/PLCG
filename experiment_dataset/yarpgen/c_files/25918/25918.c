/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 ? var_7 : var_0));
    var_15 = (((!4938) ? ((60597 ? (!var_7) : var_7)) : var_1));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_8 [i_0] [i_1] [i_1] = (~-3904529745);
            var_16 ^= (((!(arr_2 [i_0]))));
            var_17 = (max(var_17, ((!((!(!var_13)))))));
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_18 = 16828464614181675791;
            var_19 = (max(var_19, (((-(arr_3 [i_0] [i_2 + 3]))))));
        }
        var_20 = (min(var_20, (((-3904529745 ? ((-1530147643 ? (!4916) : 787467699980788684)) : (~-23))))));
        var_21 = ((~((~(~var_1)))));
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        var_22 = (max(var_22, (((((((((~(arr_13 [i_3])))) ? (~49519) : (~var_9)))) ? (((~(~1)))) : (~-4139087384102592551))))));
        var_23 = ((!(((64975 ? -1 : 2390734186)))));
    }
    var_24 = ((-((-(~8808502818605903965)))));
    #pragma endscop
}
