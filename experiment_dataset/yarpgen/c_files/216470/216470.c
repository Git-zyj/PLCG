/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((3932005034 ? (var_17 <= var_5) : (((var_4 && ((min(var_10, 4294901760))))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 *= (arr_4 [i_2]);
                    arr_8 [i_0] [i_2] = ((((min((min(var_7, var_1)), 12))) ? (((arr_5 [i_0] [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : var_9)) : ((~(arr_6 [i_0] [i_1 + 1] [i_1] [i_1 - 1])))));
                    var_20 = ((!((((arr_6 [i_0] [i_1] [i_0] [i_0]) ? var_14 : (arr_5 [i_1 + 1] [i_0]))))));
                    var_21 = (!var_12);
                }
            }
        }
        var_22 = (((((18446744073709551615 ? (var_17 || -6031232044955199537) : ((3374342092 ? var_14 : 1912880026))))) ? ((-((var_2 ? (arr_0 [i_0]) : (arr_0 [i_0]))))) : -var_2));
    }
    #pragma endscop
}
