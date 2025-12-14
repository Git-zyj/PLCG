/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (min((!var_5), ((((min(var_10, 7041898211262935242))) ? (arr_2 [i_1 + 2] [i_1 - 1]) : (arr_3 [i_0] [i_1 - 2])))));
                arr_5 [i_0] [i_0] = (max((((arr_1 [i_1 - 2]) && (arr_1 [i_1 - 1]))), (!var_13)));
            }
        }
    }
    var_16 = 4221898843970431640;
    var_17 += (min(((((1307273488 - 30) <= (var_8 / 221)))), ((~((var_11 ? var_0 : var_0))))));
    #pragma endscop
}
