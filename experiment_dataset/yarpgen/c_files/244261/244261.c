/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_3, var_6));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (min(var_11, ((min((min(1638224705235954876, 0)), ((((min(var_6, var_8)) / 255))))))));
        var_12 = (min((min(-1215536912, 1876883011)), (((min(var_3, var_6))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_13 = var_3;
        var_14 = (((min((min(2603219085333893722, 4)), var_2)) + ((((!((min(var_1, var_7)))))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_15 = (min((min(var_5, var_0)), ((min(-2147483646, -2147483646)))));
                    var_16 = ((((min(33538048, ((min(4094, 17)))))) || ((min(36660164046498425, var_2)))));
                    var_17 = (min(var_17, var_2));
                    var_18 = (min((min(26, 0)), (-7 ^ 5892)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    var_19 = (min((5799085731844922281 <= 49114), (min(1, 3858))));
                    arr_15 [i_1] [i_4] [i_5 + 2] [i_5 + 4] = (min(var_6, var_4));
                }
            }
        }
    }
    var_20 = 40829;
    #pragma endscop
}
