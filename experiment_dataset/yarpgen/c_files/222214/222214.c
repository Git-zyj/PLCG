/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_1;
    var_11 = var_3;
    var_12 = var_5;
    var_13 = ((var_5 ? (!var_3) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = (max((min((arr_14 [i_4] [i_3 + 2] [i_0] [i_0 + 2] [i_0]), (arr_5 [i_0] [i_0]))), ((((arr_14 [i_3] [i_3] [i_0] [i_3 - 3] [i_3]) ? (arr_12 [i_3] [i_0 - 1]) : ((-(arr_3 [i_1] [i_3]))))))));
                                var_14 = ((27 == (127 == 5936233448476150311)));
                                var_15 = (arr_12 [i_3 + 1] [i_3 + 1]);
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_0] = 18;
                                var_16 = var_5;
                            }
                        }
                    }
                    var_17 = (max(var_17, (((-7666891579397513087 ^ ((-4611686018427387904 ? -5442421609254686249 : 6375562926157001998)))))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = (((((((5936233448476150311 >= (arr_4 [i_0 + 2] [i_0 - 1]))) ? (1389760956561933466 && 3703981847) : (((arr_3 [i_0] [i_1 - 4]) | var_3))))) ? ((120 * ((2147483634 ? 0 : 15621167472796917979)))) : (arr_1 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
