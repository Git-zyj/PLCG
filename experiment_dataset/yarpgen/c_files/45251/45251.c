/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] |= ((!(((52 ? var_6 : var_3)))));
                var_10 += ((((~((-53 ? -19 : -1)))) <= 127));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_15 [i_2] [i_1] [i_1] [i_3 + 1] [i_3 + 1] = (((((~((max(-53, 127)))))) ? var_4 : (((~(~-1))))));
                                var_11 &= (max((((!var_5) ? (var_8 > var_3) : (49 && 121))), -var_8));
                            }
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_1] |= var_0;
                            var_12 = ((var_5 <= (var_6 != var_3)));
                            var_13 = (max(var_13, ((min(-4443725375300246188, -4443725375300246188)))));
                            var_14 = ((((((-((min(var_7, var_9))))) + 2147483647)) >> (((((((var_0 ? var_9 : var_8))) ? -var_0 : ((52 ? 11531 : 125)))) - 50))));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_8;
    #pragma endscop
}
