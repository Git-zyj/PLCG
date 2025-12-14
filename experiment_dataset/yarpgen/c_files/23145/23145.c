/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 6337936693199188541));
    var_18 += var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [18] [4] |= (arr_0 [i_0 + 1]);
                var_19 = (min(var_19, (((~(((!((!(arr_0 [12])))))))))));
                var_20 -= var_6;
                var_21 = (min(var_21, ((min(((max(var_2, 6337936693199188543))), (arr_5 [16]))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0 + 3] [1] [i_0] [i_0] = 65518;
                            var_22 = ((((min((arr_6 [i_0]), (arr_6 [i_0])))) / ((0 + (arr_6 [i_0])))));
                            arr_13 [i_0 + 4] [i_0] = (-6 ^ 6337936693199188518);
                        }
                    }
                }
            }
        }
    }
    var_23 = var_9;
    #pragma endscop
}
