/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] = min(var_2, (((!(((arr_8 [i_0] [i_0] [8]) <= (arr_6 [i_0] [i_1] [i_1] [i_3])))))));
                            arr_11 [i_0] [3] [3] [3] = ((!((((((2251798739943424 ? 4323455642275676160 : 14469149281702136114))) ? (arr_4 [3] [i_2]) : ((((!(arr_5 [i_2] [i_1]))))))))));
                            var_15 = (((min(3977594792007415502, (!0)))) ? (min(3977594792007415493, 3977594792007415502)) : (((((65535 == (arr_5 [i_0] [i_0])))))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_1] = (!3977594792007415493);
                var_16 = (arr_4 [i_0] [i_0]);
                arr_13 [i_0] [i_0] = ((3977594792007415510 ? (-2147483647 - 1) : 1));
                arr_14 [i_0] [i_0] [i_0] = ((var_14 ? ((((min((arr_3 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_1])))) ? (!12692723087645361394) : ((3977594792007415523 ? -89 : 14469149281702136146)))) : var_4));
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
