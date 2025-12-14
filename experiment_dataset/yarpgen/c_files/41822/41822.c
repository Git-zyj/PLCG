/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(((!(((var_4 ? var_13 : var_1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    var_17 -= ((!((max(18822, ((var_15 ^ (arr_6 [i_0]))))))));
                    var_18 = (max(var_18, -1948177148));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    arr_15 [i_3] |= ((!(~1)));
                    var_19 = (max(var_19, ((max(233433655, (((var_11 && (arr_7 [i_1] [i_3])))))))));
                }
                var_20 -= (max((((((var_4 ? (arr_13 [i_0] [i_1] [i_1] [i_0]) : var_11)) >= ((((arr_4 [i_0] [i_0] [i_0]) == (arr_9 [i_0] [i_0] [i_1]))))))), (((arr_12 [i_0] [i_0] [i_1]) ? var_15 : ((var_5 ? var_12 : 100663296))))));
                var_21 = (max(var_21, ((((min(((233433657 ? 0 : (-9223372036854775807 - 1))), (((var_8 ? 53 : (arr_2 [i_1]))))))) ? (((((54234 & var_3) <= (-4437161491833132637 & 4061533641))))) : var_7))));
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
