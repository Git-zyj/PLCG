/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = (min(((~(arr_10 [i_0] [i_1] [i_2]))), var_7));
                                var_20 = (max(-18, (((((max(81, (arr_2 [i_2])))) && (((175 ? (arr_10 [i_0] [i_3] [i_3]) : (arr_5 [i_1] [i_3])))))))));
                            }
                        }
                    }
                }
                var_21 |= (((arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_1]) ? ((max((arr_5 [i_0] [i_1]), 42))) : 0));
                var_22 = (max(186, (arr_0 [i_0])));
                var_23 = (((85 & (arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2]))));
                var_24 = (171 * 1);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                {
                    arr_24 [i_5] = (arr_23 [i_5] [i_5] [i_5] [i_5]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((((max((arr_21 [i_5] [i_5]), ((max((arr_19 [i_7]), 227)))))) ? (!4294967287) : (arr_26 [i_8] [i_9]))))));
                                var_26 = -26234;
                                arr_29 [i_5] [i_6] [i_5] [i_8] [i_5] = (arr_22 [i_7] [i_8] [i_7]);
                            }
                        }
                    }
                    var_27 = ((-(arr_26 [i_5] [i_6])));
                    var_28 = ((((((-(arr_15 [i_7]))) ^ (max((arr_18 [i_5] [i_5]), var_16))))) ? (arr_22 [i_5] [i_5] [i_7]) : (arr_22 [i_5] [i_5] [i_7]));
                }
            }
        }
    }
    #pragma endscop
}
