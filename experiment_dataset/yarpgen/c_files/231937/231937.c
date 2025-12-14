/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((max(101, (min(var_0, 101)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_18 ^= ((-(arr_6 [i_0] [i_0] [i_1] [i_0])));
                    var_19 *= (!29520);
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_20 += ((!(((arr_9 [i_0] [i_0] [i_1] [i_3]) >= var_2))));
                    var_21 -= (min(var_2, (arr_9 [i_3] [i_1] [i_1] [i_0])));
                }

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_22 += ((((~3662165310856696924) ? (~53) : ((13928811403978928772 | (arr_0 [i_1]))))) | var_0);
                                arr_18 [i_0] [i_4] [i_6 + 2] = -86;
                                var_23 = ((~(((!(~var_6))))));
                            }
                        }
                    }
                    var_24 &= var_4;
                    arr_19 [i_4] [i_4] [i_0] = ((~(arr_5 [i_0] [i_1] [i_4])));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_25 = (min(var_25, var_5));
                                var_26 = (max(var_26, (((+(((((-86 + 2147483647) >> (-78 + 94))) - (arr_10 [i_8 + 1] [i_7] [i_8 + 1] [i_7 + 1]))))))));
                            }
                        }
                    }
                }
                arr_25 [i_0] [i_0] = ((-(((min(38, (arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [13])))))));
            }
        }
    }
    var_27 |= (max(var_14, ((var_7 ? -13928811403978928772 : -21))));
    var_28 = ((var_15 ^ ((-72 ? 56183 : -var_0))));
    #pragma endscop
}
