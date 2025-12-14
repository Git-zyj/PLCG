/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_20 = ((!((!((!(arr_11 [i_0] [i_1] [16] [i_2] [i_3] [i_0] [0])))))));
                                arr_14 [i_3] [i_0] [8] [i_3] [11] [11] = ((((min(-3224, (arr_6 [i_1 - 1] [i_1 - 1] [i_0] [i_1 - 1])))) ? (((!(arr_6 [i_1 + 2] [i_1 + 2] [i_0] [i_1])))) : (((!(arr_6 [i_1 - 1] [i_1 + 1] [i_0] [i_1 - 1]))))));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_21 = max(((((((arr_9 [i_2] [i_1] [i_0] [i_3] [i_5] [i_2]) ? 372255653 : 966871382))) ? (arr_5 [i_5] [i_1] [10]) : var_15)), (372255653 << 0));
                                var_22 = (arr_1 [4] [4]);
                            }
                            var_23 = (min((min((arr_3 [i_0] [i_1 - 1]), (arr_3 [i_0] [i_1 - 1]))), (arr_0 [i_3])));
                            arr_17 [i_0] [i_0] [i_2] = (~3922711650);
                            var_24 = (min((arr_6 [i_3] [i_1 + 3] [i_0] [i_2]), (((!(!-5))))));
                        }
                    }
                }
                arr_18 [i_0] = ((!((((((-(arr_13 [i_0] [i_0] [1])))) ? (arr_5 [i_0] [i_0] [i_1]) : (~var_7))))));
                var_25 = (arr_15 [i_1 + 3] [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 2]);
            }
        }
    }
    var_26 = ((!(((48757 ? 15 : 213)))));
    var_27 = var_7;
    var_28 = var_0;
    var_29 = ((((!((max(var_17, var_5))))) || ((min(696386960, -11)))));
    #pragma endscop
}
