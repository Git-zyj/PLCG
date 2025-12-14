/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = ((+((((arr_7 [i_0 - 3]) > (arr_8 [i_0 + 1] [i_1 + 1] [i_2]))))));
                                var_16 = (~0);
                                var_17 = (min(var_17, (~17496)));
                                var_18 *= (arr_12 [i_3] [4] [i_0 - 2] [i_3] [i_0] [i_3]);
                                var_19 = (min(6091899919664244321, (~1352393418)));
                            }
                        }
                    }
                    var_20 -= (min((((-(arr_12 [2] [i_2] [6] [i_0] [2] [2])))), ((2917950998 & (arr_4 [i_2] [i_2] [i_2 + 4])))));
                    var_21 = (max(var_21, -8436551376326887737));
                    arr_15 [i_1] [i_1] [i_2] [i_2] = ((~(arr_12 [i_1] [i_2 + 2] [i_1] [6] [i_1] [i_1])));
                }
                var_22 = (((~-961) || (arr_6 [i_0 + 2] [i_1 + 1])));
                arr_16 [i_0] [i_1] [i_1] = ((max(17473, (arr_13 [i_0 - 1] [i_0 - 1] [i_1 + 1]))));
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
