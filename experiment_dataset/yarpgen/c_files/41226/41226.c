/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-32767 - 1);
    var_16 &= ((32753 ? (((((var_4 ? -32753 : 765533788))) ? var_8 : ((765533788 >> (var_12 - 2758673388214801519))))) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [7] = ((!((((-1409982555 < 5823373212939607930) ? 17432672875622073968 : var_14)))));
                            var_17 = (((var_11 == -32753) ? (max(((var_4 ? var_2 : 1398217048)), (523776 <= var_1))) : (max((var_2 * 7991), ((var_11 ? -43 : 2048))))));
                            var_18 -= (max((((!(~1398217048)))), ((~((var_13 >> (16236 - 16205)))))));
                            arr_11 [i_0] [i_0] [i_0] [i_2] [i_2 - 2] [2] = ((((!((min(var_0, var_6))))) ? (-127 - 1) : 12));
                        }
                    }
                }
                var_19 = ((((((16793 ? 16791 : var_4)))) % (var_4 / var_0)));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_20 = (max((-32767 - 1), 2341043299));
                            var_21 = (max(((var_6 ? (~var_10) : -1870066795)), var_8));
                            var_22 = var_4;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
