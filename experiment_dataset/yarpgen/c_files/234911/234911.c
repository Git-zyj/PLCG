/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((-var_9 >= (var_5 * var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 += (min((arr_2 [i_2 - 1]), var_2));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = (((((+(((arr_2 [i_0]) ? 250 : (arr_4 [i_0] [i_0] [i_2])))))) ? (arr_0 [i_1]) : (max(-6087387831883808800, (arr_0 [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
