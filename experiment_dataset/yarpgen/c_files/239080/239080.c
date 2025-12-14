/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, -var_7));
    var_15 = ((((3327283506442104677 ? 73 : -12313)) > var_2));
    var_16 = var_1;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = ((+(((arr_3 [i_0] [i_1]) ^ (arr_3 [2] [i_1])))));
            arr_4 [i_0 + 1] [i_0] [i_1] = ((-(var_11 / var_4)));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_7 [i_2] = ((((max(16295506687336690362, ((0 ? 115 : 6951682188152057613))))) ? 0 : 552878672));
            var_18 = (min(var_18, var_4));
            var_19 = (arr_0 [i_0]);
        }
        var_20 = (max(var_20, 4063126841219088499));
    }
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        arr_12 [i_3] = (((37450471 & var_0) | (~2766629061869757675)));
        var_21 = (min(var_21, (((((max((arr_10 [i_3]), (arr_2 [i_3])))) * (var_8 > var_9))))));
        var_22 = (((~var_6) ? (max((max(0, 32767)), 1747819272)) : ((max(var_9, 5833977624216075713)))));
    }
    var_23 = var_6;
    #pragma endscop
}
