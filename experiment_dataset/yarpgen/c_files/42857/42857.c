/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((-16149 ? 18264839119202190921 : ((2800843988 ? 18264839119202190921 : 18264839119202190891)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (min(((((arr_4 [i_0] [i_1] [i_1]) ? (arr_4 [i_1] [i_0] [i_0]) : (arr_4 [i_1] [i_1] [i_0])))), 181904954507360694));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_2] = (((max((((arr_5 [i_0] [i_0]) ? 18264839119202190922 : 181904954507360690)), ((((arr_8 [i_2] [i_2]) ? 4228967718 : var_4))))) | (((~(arr_3 [i_0]))))));
                            var_18 = (((-9223372036854775807 - 1) ? 9223372036854775805 : 18264839119202190920));
                            arr_11 [i_3] [i_2] [i_1] [i_0] = 13;
                            var_19 ^= (min(((((((((arr_2 [i_0] [i_1]) > var_8)))) > ((var_10 + (arr_0 [i_2] [i_0])))))), (max((max((arr_4 [i_0] [i_1] [i_3]), 18264839119202190920)), (arr_7 [i_2] [i_2] [1] [i_1] [i_0])))));
                        }
                    }
                }
                arr_12 [i_1] = (162108241 ^ 1354421225);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_20 = arr_0 [i_1] [i_1];
                                var_21 *= var_1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_27 [i_8] &= ((-((-(arr_17 [i_7] [i_7] [i_0] [i_0])))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-((18264839119202190922 ? 18264839119202190923 : 18264839119202190912))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
