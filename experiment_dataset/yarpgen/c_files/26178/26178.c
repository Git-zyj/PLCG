/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max((((!(((2979003920783108113 ? 7807918183847107045 : var_3)))))), var_3);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (min(var_18, 0));
        var_19 = ((!(((2566140551090449125 ? (arr_2 [i_0] [i_0]) : 59)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, ((((((-(!253)))) ? -59 : (min(12480435117254698098, var_16)))))));
                        arr_12 [i_1] [i_1] [i_3] [i_3] = ((((188 ? 26 : 21)) > 59));
                        var_21 += 59;
                        arr_13 [i_0] [i_0] [i_0] [i_1] = ((-(((196 < ((8980549238574285779 >> (16573390097036777251 - 16573390097036777199))))))));
                    }
                }
            }
        }
    }
    var_22 = max((max(109, 5316411740016593531)), var_2);
    #pragma endscop
}
