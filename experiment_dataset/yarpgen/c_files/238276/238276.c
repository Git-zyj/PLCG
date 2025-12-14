/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((var_10 ? ((1265215063 ? 1265215061 : -8250337418646752969)) : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((3029752232 != (min(9223372036854775807, var_15))));
                                var_20 = var_1;
                                var_21 = (min((arr_0 [i_0]), ((((min(3272029804754802080, var_5))) ? (var_5 + var_17) : ((14547 ? 1118451135 : -7403042465755628979))))));
                            }
                        }
                    }
                    var_22 = (min(var_22, ((max(var_10, ((min(1789828235, var_8))))))));
                }
            }
        }
    }
    #pragma endscop
}
