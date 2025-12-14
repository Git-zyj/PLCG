/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = max(var_7, 181154944807749386);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = arr_1 [i_0];
                var_14 ^= (-2147483647 - 1);
            }
        }
    }
    var_15 = ((var_3 ? 18446744073709551615 : 15724362128047729483));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_16 = (11375633486596078776 ? 31 : 7071110587113472852);
                var_17 = (max((arr_8 [i_2] [i_2] [19]), ((8696443162109472838 ? (arr_8 [i_2] [i_3] [i_2]) : (arr_8 [i_2] [i_3] [i_3])))));
            }
        }
    }
    #pragma endscop
}
