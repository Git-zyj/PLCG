/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (--24826);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_4 [i_1] [i_0] [i_1] = ((((min((min(2743377242, 8725174504345462322)), (arr_3 [i_1] [i_0])))) ? -40710 : ((((max(var_11, 24822))) ? (~246033518) : (((24813 >> (((arr_3 [i_0] [i_1]) - 1692374281486965694)))))))));
            arr_5 [i_1] = 523413577;
            var_19 *= (max((max((min((arr_3 [i_0] [i_1]), (arr_3 [i_1] [i_0]))), (arr_1 [i_0]))), (((+(((arr_2 [i_0] [i_1]) ? 24813 : 1)))))));
        }
        var_20 += 1966080;
    }
    var_21 = (max(var_21, var_8));
    #pragma endscop
}
