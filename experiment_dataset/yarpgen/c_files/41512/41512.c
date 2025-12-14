/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((var_4 ? (((((min(10, var_5))) ? (4398046511104 - var_9) : 30349))) : 18446744073709551585));
    var_11 *= ((-var_1 != (!var_3)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_9;
                arr_6 [i_0] [i_0] = (((((18446744073709551605 ? var_4 : (arr_4 [i_1 - 1] [i_1])))) ? 10 : 10));
                var_12 = ((((((((min(18446744073709551593, var_4))) && ((((arr_4 [i_0] [7]) ? (arr_3 [i_1]) : 33554431))))))) >= 1705881139));
            }
        }
    }
    var_13 = 33554431;
    #pragma endscop
}
