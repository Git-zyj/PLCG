/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(4097453317381468823, ((max(((1055612832 ? 830366093 : 59)), (max(var_15, 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = (((max(-27, 14349290756328082800)) != ((((min(var_1, -830366077)))))));
                    var_22 -= (((+(max((arr_0 [1]), 3490659578990707119)))) == ((var_14 << (((arr_2 [i_2]) - 82)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_23 += var_19;
                                var_24 = ((((14349290756328082793 && (arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 2]))) && ((!(arr_7 [i_1 + 1] [i_1 - 2] [i_4 + 1] [i_4 - 1])))));
                                var_25 = (min(var_25, (min((((arr_9 [i_1] [i_1] [i_1 - 1] [i_1 - 2] [12] [i_1]) - 18)), ((((arr_9 [16] [16] [i_1 + 1] [i_1 - 1] [1] [i_1]) >= (arr_11 [i_1] [i_1] [i_1 - 3] [i_1 - 1] [i_1] [i_1] [16]))))))));
                                arr_15 [i_0] [i_3] [i_2] [i_1] [i_0] = (arr_5 [i_0] [i_0]);
                            }
                        }
                    }
                    var_26 = ((var_16 ? (max(-1901880851, (arr_9 [i_0] [i_1 + 1] [i_2] [i_1] [i_0] [1]))) : (((!((!(arr_12 [13]))))))));
                }
            }
        }
    }
    var_27 = var_13;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                {
                    arr_24 [i_7] [i_7] [i_7] [i_7] = ((arr_9 [i_7] [i_7] [i_6] [i_5] [i_7] [i_5]) ? (((-357791721 + 2147483647) << (((arr_19 [i_5] [9] [i_5]) - 51184)))) : (~830366093));
                    arr_25 [i_5] [1] [i_7] [i_6] = (((((max((arr_22 [i_6] [i_6] [1]), (arr_23 [i_5] [i_5] [i_7]))))) ? -14 : (((!((min(16720639319826235544, (arr_3 [6] [16])))))))));
                }
            }
        }
    }
    #pragma endscop
}
