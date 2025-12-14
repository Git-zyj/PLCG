/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (-962769304 != 0)));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((((-802105150 + -97) + 2147483647)) >> (10128606822755039757 - 10128606822755039728)));
        arr_3 [i_0] = (((max(0, 18801)) % (((~(!var_6))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_20 -= 8318137250954511856;

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_21 = var_13;
            var_22 ^= arr_6 [i_1] [i_1] [i_2];
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_23 = var_6;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_24 = (min(31, -215069928));
                            var_25 = (max(var_25, (((!(((2237008933 << (var_18 + 1894643012)))))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
    {
        arr_19 [i_7 + 1] [i_7 + 1] = var_7;
        var_26 = (max(var_26, (arr_1 [i_7] [1])));
        var_27 += (arr_13 [i_7 + 1]);
    }
    var_28 = (((64972 != ((0 ? var_16 : 46734)))) ? var_16 : (min(var_18, var_14)));
    #pragma endscop
}
