/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (-1434599112651184517 && 2147483647)));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_21 = (min(var_21, (((((((((arr_2 [i_0] [6]) ? var_19 : -3747020724428031245)) != var_4))) ^ (((((9169618357933314074 ? (arr_2 [i_0] [9]) : var_10))) ? 0 : (97198019 & var_8))))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [3] [i_1] = (0 / -1370384643);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (max(var_22, (arr_8 [i_1] [i_2] [7])));
                                var_23 = (((arr_7 [i_0] [i_0]) ? (((!(((var_8 * (arr_10 [6] [i_1] [1] [i_3]))))))) : ((((max(68645995216420402, (arr_1 [5] [9]))) > var_19)))));
                                arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] [6] [4] = ((((max((~var_16), var_12))) ? ((3732168717922293696 ? 98 : 2020256962013653332)) : (var_12 && -1639471021896614285)));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [1] = (((((66584576 == var_2) ? ((max(65535, var_14))) : ((177 ? 65535 : var_5)))) >> 0));
    }
    #pragma endscop
}
