/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((((max(((17331406482567670637 ? 4 : (arr_0 [i_1]))), ((var_0 ? (arr_0 [i_0]) : var_0))))) < ((4 ? 15647620845532100006 : 28))));
                arr_5 [i_1] = (max(((-2021151345700724120 ? -9 : ((65526 ? var_9 : 1)))), (arr_0 [i_0])));
            }
        }
    }
    var_15 = (((((-1 | (4 >= 0)))) ? (!var_14) : -0));
    var_16 &= (max(-32094, 10926063198148669450));
    var_17 = (((var_4 ? 0 : 2374)));
    #pragma endscop
}
