/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((var_11 << (var_5 < var_1)))) != var_11))));
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((min((~1), (127 - var_4))))));
                            var_17 = (min((var_3 || -511230318), 1));
                            var_18 *= (arr_6 [i_2] [8] [i_3]);
                        }
                    }
                }
                var_19 = (max(var_19, (((166 - (((min(23259, (arr_7 [i_0 - 1] [i_0] [9]))))))))));
                arr_12 [i_1] [i_1] = (((((~((max(var_5, (arr_0 [i_0]))))))) && (min((!var_3), (var_0 < var_4)))));
            }
        }
    }
    var_20 = ((((min(var_13, (var_3 - var_12)))) ? (((!(((var_4 ? -3165440848250151162 : var_10)))))) : (!var_12)));
    #pragma endscop
}
