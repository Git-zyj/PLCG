/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = (12952072720400640787 > 12);
                arr_8 [9] [i_0] = (min(5494671353308910828, 12018194635357842018));

                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    var_13 = (max(var_13, -var_11));
                    var_14 = ((-((~(((arr_4 [3] [0] [i_2]) ? 12952072720400640787 : 6428549438351709597))))));
                }
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    var_15 = (2474715165 != -120);
                    arr_14 [i_3 - 1] [i_3] [i_0] = ((((max((arr_4 [i_3 - 3] [9] [i_3 - 3]), (arr_4 [i_3 - 3] [i_3 - 1] [i_3 - 3])))) || (((-(22 != 12952072720400640813))))));
                    arr_15 [i_0] [i_1] [i_3] [i_3] = (((5408434371344979218 + -5220988015312982539) - (((min(12018194635357842018, 5408434371344979218))))));
                    var_16 = (max(var_16, (((12018194635357842033 * ((((((var_5 - (arr_3 [i_0])))) - 9223372036854775807))))))));
                    arr_16 [i_3] = ((~(arr_6 [9] [i_3 - 2] [6])));
                }
                var_17 = var_2;
            }
        }
    }
    var_18 = 22;
    var_19 = (((((!(var_1 | var_10)))) / ((((26 ? var_1 : var_10))))));
    #pragma endscop
}
