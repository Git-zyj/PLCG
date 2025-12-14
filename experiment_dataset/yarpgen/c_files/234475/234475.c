/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (max((min((min(var_8, 9605385761158175390)), var_7)), var_8))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (arr_4 [i_0] [i_1]);
                var_17 = (!var_12);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 *= (arr_2 [i_0 + 1] [i_0 - 1]);
                            var_19 = (((((((var_12 ? var_7 : 18446744073709551615))) ? ((var_0 ? (arr_3 [i_0] [i_2] [i_1]) : 3464290645)) : (~var_10)))) ? (((((((~(arr_0 [7])))) || (arr_4 [i_0] [i_0 - 2]))))) : (min(((((arr_5 [i_0] [i_1]) ? 18 : 18))), ((~(arr_9 [i_0 + 1] [i_2] [i_2] [i_1] [i_0 - 3] [i_0 + 1]))))));
                            var_20 = (((((((max(20, var_4)))) + (arr_6 [i_1]))) < (!3719039178)));
                        }
                    }
                }
            }
        }
    }
    var_21 = -var_12;
    var_22 = ((+((1695098648755231705 ? (var_13 != var_6) : var_11))));
    #pragma endscop
}
