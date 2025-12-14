/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((var_10 | (((((min(var_4, var_2)))) % 17086489442632703943))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (!var_9);

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_15 = (-var_9 + -1849031079);
                    var_16 = (((min((((~(arr_4 [5] [1] [1])))), (~var_7))) | (~-2016573509)));
                    var_17 = 1070314058;
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, 17));
                    arr_11 [i_0] [i_1] [i_3] &= (((min((2289921731325787216 / var_6), ((var_7 ? 143 : var_7)))) / (((var_2 * 6686534405733849383) * (arr_7 [i_0] [i_0])))));
                    var_19 = (((var_0 ? (min(var_2, (arr_9 [i_0] [i_0] [i_0] [i_0])) : 1875647766))));
                    var_20 = (max(var_20, (((~((~(arr_5 [5] [8] [i_0]))))))));
                }
                var_21 = (min(var_21, ((((arr_3 [i_0] [i_0] [10]) + ((-17 + (arr_3 [i_0] [i_0] [i_0]))))))));
                var_22 = max(var_0, (min(var_7, (min(12852598901976096234, (arr_4 [8] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
