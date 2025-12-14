/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (var_17 * var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = 21456;
                var_21 = (max(var_21, (((18446744071562067968 + ((((~-20) ^ (((((arr_4 [16] [i_1] [16]) > 21475))))))))))));
                var_22 = -21472;
                arr_5 [i_0] [i_0] = ((+((1048575 ? -1 : (((arr_0 [i_0]) * var_4))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_11 [i_2] = ((var_6 | (((((arr_6 [i_3]) & (arr_6 [17]))) ^ var_17))));
                var_23 = ((21472 ? 0 : 18446744073709551612));
            }
        }
    }
    #pragma endscop
}
