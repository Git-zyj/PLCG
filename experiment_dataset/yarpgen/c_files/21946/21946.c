/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (((((1089059803 >> (((112 | 1002504300300242213) - 1002504300300242283))))) ? ((~(~31650))) : (((!(42370 % -2096068755))))));
                    var_21 = 1002504300300242213;
                    var_22 = ((((max(110, (arr_2 [i_1])))) && -1));
                    arr_7 [i_0] [1] [i_2] = 33886;
                }
            }
        }
    }
    var_23 = (((((~238) ? ((0 << (-75275243 + 75275252))) : (var_19 > 9160328097395940632))) ^ (var_5 * 1)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            {
                arr_14 [i_3] = 87;
                var_24 = ((((((0 <= (arr_8 [9]))) ? ((((arr_11 [i_3]) != 9160328097395940632))) : 1)) <= (((arr_11 [i_4 - 2]) >> (9223372036854775807 - 9223372036854775794)))));
            }
        }
    }
    #pragma endscop
}
