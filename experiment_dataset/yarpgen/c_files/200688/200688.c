/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_16 -= (min(((!(arr_6 [i_0] [i_2] [14]))), ((!((min((arr_7 [3]), (arr_9 [i_3] [i_0] [i_0] [i_1] [i_0]))))))));
                        var_17 = (min(var_17, ((max((((2147483647 ? 1 : 2896604488))), var_6)))));
                        arr_11 [i_0] [i_1] = 1;
                        var_18 -= ((!((!(arr_9 [i_0] [1] [i_0 + 3] [i_2 + 1] [i_2 - 1])))));
                    }
                    var_19 += 0;
                    arr_12 [i_2 - 3] |= (min(((+((((arr_7 [i_2 - 1]) > 90))))), ((min(25248, (arr_9 [i_0] [i_0] [10] [i_0 + 2] [6]))))));
                    var_20 = arr_7 [i_0 + 2];
                    var_21 *= ((!((((arr_8 [i_2 - 1] [i_0 + 3] [13] [i_0 + 2] [i_0 + 2] [i_0]) ? (((!(arr_2 [i_2] [i_1])))) : (arr_7 [i_0]))))));
                }
            }
        }
    }
    var_22 += ((-((((15 ? 16859904643360907327 : var_2)) | var_7))));
    #pragma endscop
}
