/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (var_4 ? -8426175929236167531 : ((((-var_12 == (arr_7 [i_0] [i_0] [i_0 + 1] [i_0 - 3]))))));
                                var_16 = ((0 ? -8426175929236167531 : (47332392152752817 % -55)));
                                var_17 = (min(63, 11729505119003696275));
                                var_18 = (min(69, 130));
                                var_19 = (((((((min(var_11, 27))) % (min(-5930375442036326090, (arr_11 [i_3])))))) ? (min(var_6, (min(18399411681556798790, 27)))) : (min(var_8, (~18446744073709551609)))));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_0] = 6;
                var_20 = (18446744073709551615 != 30653);
                var_21 = (min(15, 4214887589));
            }
        }
    }
    #pragma endscop
}
