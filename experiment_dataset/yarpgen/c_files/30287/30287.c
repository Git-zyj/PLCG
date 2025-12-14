/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (((((1 ? 2059181841 : -2059181845))) ? -2059181834 : 1));
                var_19 = ((((-2059181839 * ((((arr_3 [i_0] [i_0]) < 2059181818))))) ^ (7 <= -808727446)));
                var_20 ^= (((((~(7 || -8074689606830194051)))) ? (max(-2059181818, var_9)) : -2059181839));
            }
        }
    }
    var_21 -= var_14;
    var_22 -= (!var_1);
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_10 [i_3] [1] = -2059181842;
                var_23 ^= -7;
            }
        }
    }
    #pragma endscop
}
