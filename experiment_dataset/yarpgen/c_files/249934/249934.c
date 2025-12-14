/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_10, var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = (arr_6 [1] [i_1]);
                                var_17 |= ((!(-127 - 1)));
                                arr_11 [i_3] [i_2 + 1] [1] [i_1] [i_4] [i_3] [i_1] = ((((min(-5126, ((max(-112, 112)))))) ? ((+((8696364020397950456 ? (arr_4 [i_1] [i_1]) : 6117359952868508285)))) : (((-var_11 ? 1125899906809856 : (arr_5 [i_1]))))));
                                var_18 = arr_7 [i_4] [i_3] [i_1] [i_0 + 2];
                                var_19 |= (arr_4 [i_2] [i_4]);
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_0 + 2] [i_1] = ((-((max(4294967295, 32)))));
                var_20 = (arr_7 [i_1] [i_1] [i_1] [i_1]);
            }
        }
    }
    var_21 = (max(var_21, var_4));
    var_22 += (((4 ^ var_3) == var_0));
    var_23 |= (((16871693581836131014 ? var_5 : var_8)));
    #pragma endscop
}
