/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_17 / var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_20 = ((var_3 ? (arr_3 [i_2 - 1] [i_1 + 1]) : (((-(arr_8 [i_1 - 1] [i_2 + 2] [i_3] [i_3]))))));
                                var_21 += (((((min(((var_4 && (arr_14 [i_4] [i_3] [i_2] [i_1] [i_0]))), (var_18 < 7357517626451552739))))) > (min((65 || 1), ((2091464967570986105 ? var_9 : (arr_10 [i_3])))))));
                                var_22 = 60571;
                            }
                            var_23 = (arr_9 [i_1 + 2] [i_1 + 4] [i_2 - 1] [i_1 + 2] [i_2 + 2]);
                            var_24 &= var_18;
                            var_25 -= ((-77 + ((1 ? -32753 : 1))));
                        }
                    }
                }
                var_26 = (~(arr_3 [i_0] [i_1 - 1]));
                var_27 = 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_28 -= (((max((arr_15 [i_5 + 1]), ((12402158050179209390 << (((arr_17 [4]) - 27325))))))) ? (((54 | 53084) ? (~var_15) : 13662622423696485840)) : (arr_15 [i_5 - 1]));
                var_29 = (arr_16 [i_5]);
            }
        }
    }
    var_30 = 2074647253;
    #pragma endscop
}
