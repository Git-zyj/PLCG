/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (max((((arr_1 [i_0 - 1]) < var_9)), ((!(arr_1 [i_0 - 1])))));
                var_15 = (((((arr_5 [i_0 + 1] [i_1] [i_0]) ? (arr_5 [i_1] [i_1] [i_1]) : 33)) * (arr_5 [i_1] [i_0 - 1] [i_0 - 1])));
                arr_6 [i_0] = (((max(-var_3, (~var_4)))) ? (arr_2 [i_0 + 1]) : ((((arr_4 [i_0]) ? (arr_4 [i_0 + 2]) : (arr_0 [i_0] [i_0 + 1])))));
                var_16 ^= 21815;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                            {
                                var_17 &= ((!((!((((arr_15 [i_0] [i_0] [i_2 - 1] [i_2] [i_4]) ? (arr_14 [i_4] [i_3] [i_1]) : (arr_9 [i_1]))))))));
                                var_18 = ((((((arr_11 [1] [i_0] [i_2]) - (!48443)))) && (((((~(arr_9 [i_3]))) >> (((max((arr_5 [i_2 - 2] [i_3] [i_4]), var_1)) - 2841062551)))))));
                                arr_16 [i_0] [2] [i_1] [i_1] [i_2] [i_3] [i_4] = (((arr_7 [2]) ? var_3 : (!1619959257)));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                            {
                                var_19 = (~29014);
                                arr_19 [i_3] [i_3] [i_1] [i_3] = (arr_4 [i_2]);
                            }
                            arr_20 [i_0 + 1] [i_3] = var_11;
                            var_20 = ((((((((arr_4 [i_3]) ? 8708922992202064369 : 3928022974))) ? (arr_10 [4] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (arr_11 [i_0 + 2] [i_0 - 1] [i_2 - 2]))) != (arr_5 [i_0 + 2] [i_0 - 1] [i_2 - 2])));
                        }
                    }
                }
            }
        }
    }
    var_21 ^= 36522;
    var_22 -= var_10;
    #pragma endscop
}
