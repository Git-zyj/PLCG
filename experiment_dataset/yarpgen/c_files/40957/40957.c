/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-2395326670 ? ((~(var_8 | var_11))) : ((var_6 ? (min(1771965204059470804, 25845)) : (4294967295 <= var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 += ((-556091234 && (((((min(18446744073709551611, (arr_1 [i_0])))) ? 1185663562 : 8)))));
                                var_15 ^= ((var_7 <= ((min(((915212926 << (6186369487813108382 - 6186369487813108364))), (9572 * var_10))))));
                            }
                        }
                    }
                    var_16 = (min((~3961865697), (~18446744073709551615)));
                    arr_13 [i_0] [i_1] [7] [5] = ((4996432873513080185 << ((((arr_12 [1] [i_1 - 1] [8]) > 31457280)))));
                    var_17 = 11225542358836653869;
                }
            }
        }
    }
    #pragma endscop
}
