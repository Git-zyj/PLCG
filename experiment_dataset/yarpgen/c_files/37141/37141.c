/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_0] [i_0] = ((((!(arr_2 [i_1 + 1] [i_1 - 1])))));
                arr_9 [i_0] [i_1 + 1] = (!-602795805999776913);
                var_15 = (max(var_15, (((+((var_1 ? (~0) : (arr_0 [i_0 + 2]))))))));
                var_16 = ((var_10 ? (((!151) ? (((var_3 ? var_4 : (arr_5 [i_0])))) : -1959103359205575526)) : (((0 ? 0 : (((2191124555947372299 ? 249 : (-32767 - 1)))))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_17 = (arr_1 [i_0]);
                    var_18 = 2874145794543705724;
                    var_19 = ((-(arr_10 [i_1 - 1])));
                    var_20 = (min(var_20, ((!(!54222)))));
                }
            }
        }
    }
    #pragma endscop
}
