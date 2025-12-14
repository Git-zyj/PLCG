/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1068186714;
    var_15 = ((~(~32765)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = ((!(((~((min(255, 65535))))))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_16 = (26331 ? (-9223372036854775807 - 1) : 84);
                var_17 = var_3;
            }
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                var_18 = (max(var_18, ((((39208 >> (-32742 + 32745)))))));
                arr_13 [i_0] [i_0] [i_3 - 1] [i_3] = (arr_2 [i_1] [i_3]);
            }
        }
        var_19 = arr_5 [i_0] [i_0];
        arr_14 [i_0] [i_0] = -13865;
    }
    #pragma endscop
}
