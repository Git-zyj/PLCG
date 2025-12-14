/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, 14811));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_19 = (max(var_19, (((-(((((1 << (4652 - 4636)))) ? (((arr_3 [i_1]) - 14811)) : ((-1125610417931769613 ? var_7 : 33)))))))));
                        var_20 &= (max(1759715754488573022, (((65535 ? 37763 : -1759715754488573023)))));
                        arr_9 [i_3] [i_3] [i_1] [i_3] [12] = (max((((((arr_1 [i_0] [i_1]) ? 77 : (arr_2 [i_3 + 1] [i_1] [i_0]))))), ((((max(15, (arr_1 [i_0] [i_2])))) << (((((min(-1125610417931769613, 510)) + 1125610417931769642)) - 16))))));
                    }
                    arr_10 [i_2] [i_1] &= var_15;
                    var_21 = (max(65535, ((var_3 ? 7503713977184854708 : 21017))));
                }
            }
        }
    }
    var_22 = var_13;
    var_23 &= max(-29658, ((((min(var_12, var_7))) ? (((9223372036854775807 ? 2468798083 : 21830))) : ((4294967295 ? 18446744073709551615 : 56)))));
    #pragma endscop
}
