/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_13 = (max(var_13, var_9));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (-(((((1 ? 223803440 : (arr_0 [i_0] [i_1])))) ? (1 % 4) : (max(-6477425068288598654, 14238)))));
            arr_6 [i_0 - 1] [i_1] [i_1] = (((244 < (!var_9))));
            arr_7 [i_0] [i_1] = (((arr_4 [i_0 + 3] [0]) ? (((284 ? (!125829120) : ((5155716511818873849 ? 1006632960 : 1))))) : ((~(max(29566, 17918579272083678334))))));
        }
        var_15 = (max(var_15, ((((arr_4 [i_0 + 3] [i_0 - 1]) ? 1073407195 : (arr_4 [i_0 + 2] [i_0 + 4]))))));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        var_16 -= 1006632954;
        var_17 = var_0;
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        arr_12 [i_3] [i_3 - 2] = 17816101786777765864;
        var_18 = (!-4847355362891331248);
    }
    var_19 = var_12;
    #pragma endscop
}
