/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min((min(2431919469, 47)), 192)) ^ var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = (1 + 818837350);
                var_15 |= (min(((34357 ? 268427264 : 83)), (min(var_8, 818837350))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            var_16 = (((4026540024 * var_1) != (min((((arr_6 [i_3]) ^ (arr_6 [i_2]))), (var_7 <= var_11)))));
            arr_9 [i_2] [16] |= (max((min((arr_8 [6] [i_2 - 1]), var_9)), (((arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1]) ? var_5 : var_13))));
            var_17 = (min(((1 ? (arr_8 [i_2] [i_3 - 2]) : var_9)), (max((arr_5 [i_2 - 1]), var_8))));
        }
        var_18 = (min(var_18, (757214931007584783 <= 13)));
        arr_10 [i_2] = ((((max(9223372036854775807, 17131735781096434120)) <= (((8644094393270096499 ? 100 : 188))))) ? ((((((arr_7 [16] [i_2] [12]) ? var_0 : 1))) ? ((max(2822593542, -3561))) : ((var_2 & (arr_8 [i_2] [i_2 - 1]))))) : (max(1, 18446744073709551601)));
    }
    #pragma endscop
}
