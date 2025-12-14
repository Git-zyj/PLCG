/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, 1191931229));
                            arr_11 [i_0 - 1] [i_0] [i_2 + 1] = ((-(((!(((416696940 ? 416696940 : 1))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] = (min((-127 - 1), 126));
                            arr_17 [i_0] [i_4] [i_5 - 3] = ((-(min(-0, -728))));
                            arr_18 [i_0] [i_1 - 3] [i_4] [i_5] = (max(((((((54423 ? 125 : 140))) ? 729 : ((18446744073709551608 ? 1 : 3628))))), -8719149786762556120));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((min(-17458, 2553526257))) ? (min(-5469613714500938207, 0)) : (((32759 ? (-127 - 1) : 1403479678)))));
    #pragma endscop
}
