/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 9135;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((min((((~41771) ? var_9 : ((((-6032698317918990587 >= (arr_3 [2] [2]))))))), (((max(-7046, 8828283554401518548)))))))));
                    arr_8 [i_1] [i_1] = (max((~var_7), (arr_3 [15] [i_2])));
                    var_21 = (arr_7 [i_1] [i_1]);
                    var_22 = ((-1974 + (max(7400175054364938539, var_17))));
                }
            }
        }
    }
    var_23 = var_13;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_24 ^= (max(((((!var_13) >> ((((min(var_17, (arr_5 [i_4] [i_5] [i_4])))) - 27755))))), 2005));
                            var_25 = ((((max(((max(var_2, (arr_7 [i_4] [i_4])))), (min(var_12, 1974))))) ? 8160 : ((((max(4096, 2005)) > ((min((arr_9 [i_3]), -2009))))))));
                            arr_19 [i_3] [i_3 - 2] [i_3] [i_4] [6] [17] = 4090;
                        }
                    }
                }
                var_26 = ((+((min((!var_15), var_16)))));
                arr_20 [i_4] [i_4] = (((~-1) * ((((!((max(var_3, (arr_13 [i_4] [i_4]))))))))));
            }
        }
    }
    #pragma endscop
}
