/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (max((!4046), (((arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]) | (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0])))));
                                var_17 &= ((((((-1 & -539251054) & (4096 % -85)))) & 30057));
                                arr_12 [i_0] [0] [i_2] [10] [i_1] = (((((min((arr_6 [i_0] [i_1] [i_1] [i_2 - 2]), (arr_6 [i_0 - 1] [i_1] [i_0 - 1] [i_3])))) ? (arr_2 [i_0] [i_0] [i_1]) : var_11)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            arr_19 [8] [i_1] [7] [i_1] [i_0 - 1] = (((((max(1601152615583460669, 2147483647)) >> ((max(0, -110))))) < (((((((arr_15 [i_1] [i_1] [i_1] [i_5]) ? 15 : 65535))) ? ((65528 >> (((arr_9 [i_0 + 1] [i_0 - 1] [i_2] [5] [i_6] [i_0 + 1]) - 112)))) : (arr_6 [6] [i_1] [6] [6]))))));
                            var_18 -= (min((arr_18 [i_0] [i_6]), (15 | 4092)));
                            var_19 = (~-4092);
                            var_20 = (arr_2 [i_0 + 1] [i_2 + 1] [i_0 + 1]);
                        }
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            var_21 = (max(((max((arr_17 [i_0] [i_1] [i_2 + 1] [i_0] [i_0]), (arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1])))), var_7));
                            var_22 = arr_2 [i_0] [i_0] [i_0 - 1];
                            var_23 = ((var_0 < (max((var_11 & 4092), (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? 8079656531752139634 : (arr_16 [i_0] [i_0] [i_0 + 1] [i_5] [i_7])))))));
                            var_24 |= (min(-6, (arr_5 [i_2 - 1] [7] [i_2] [i_2])));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_25 *= ((~((((arr_3 [i_2 + 1] [i_0 + 1] [i_0]) < 4091)))));
                            arr_26 [i_1] [i_1] = (((((arr_6 [i_2 + 1] [0] [i_0 + 1] [i_5]) ? (arr_6 [i_2 - 1] [i_1] [i_0 + 1] [i_5]) : var_14)) & (arr_6 [i_2 - 2] [14] [i_0 + 1] [i_5])));
                        }
                        var_26 = ((((var_0 % (arr_7 [i_2 - 1] [i_1] [i_1] [i_0 - 1]))) < -64));
                    }
                }
            }
        }
    }
    var_27 = (((var_2 ? var_7 : 5291135556912172306)));
    #pragma endscop
}
