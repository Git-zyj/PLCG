/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_10 = (min(var_10, ((((!920727951) ? (((65525 ? 920727955 : 15))) : var_3)))));
                    var_11 = 3374239344;
                    var_12 = ((var_9 ? (1 * 56160) : (11 + 17471115141329141859)));
                }
                var_13 = (arr_5 [13] [13] [18]);
            }
        }
    }
    var_14 ^= ((var_8 != (min((min(18446744073709551615, var_1)), (max(var_7, var_5))))));
    #pragma endscop
}
