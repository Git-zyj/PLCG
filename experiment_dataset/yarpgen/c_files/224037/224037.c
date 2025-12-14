/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((-129635601 | var_19), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1 - 1] = var_18;
                            arr_10 [2] [i_0] [i_0] [2] [i_0] [i_0] = var_0;
                            arr_11 [i_0] [i_1] [i_2] [i_0] = (min(27, (min((var_2 - -129635601), (((11133855194672501792 ? 129635600 : var_9)))))));
                            arr_12 [i_0] [i_0] [i_2] [i_2] = (((((7312888879037049824 ? 11133855194672501773 : -5904661458785478830))) ? (min(1248329825, 11133855194672501792)) : (arr_6 [3] [i_1] [i_0] [i_1])));
                        }
                    }
                }
                var_21 = (min(var_7, (((~(129635586 != 129635600))))));
                arr_13 [i_0] = ((~(~129635602)));
                var_22 -= (791052984 || var_15);
            }
        }
    }
    var_23 = var_9;
    var_24 = var_2;
    #pragma endscop
}
