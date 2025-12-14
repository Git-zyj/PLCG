/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 ? (max(var_6, var_5) : 13499151670774358763)));
    var_11 = (var_2 ? 11123476094865994167 : var_0);

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 = (((3317384486803145470 + (arr_0 [i_0 - 1]))) - -0);
        var_13 = ((((5458321727393035137 ? 3317384486803145485 : 15129359586906406114))) - (arr_1 [i_0 - 1]));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            {
                var_14 = max((max(var_8, (arr_6 [i_2 + 2]))), var_2);
                var_15 = (((min(15129359586906406134, -6459517905292316880))) ? 0 : ((16988447247963427375 ? (max(13260975444056521578, 0)) : ((var_3 ? var_1 : 11751418448238193003)))));
                arr_8 [10] [i_2] [2] = -3317384486803145485;
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_16 &= (!var_7);
                            arr_13 [i_4] [i_2] [8] [i_4] = 15573536706431038897;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
