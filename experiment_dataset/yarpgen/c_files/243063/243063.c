/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((min(var_6, (max(var_8, var_4))))), ((((17163091968 ? 1 : -16671)) >> ((((min(var_6, 23737))) - 23706))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 += 192;
                    var_12 = (((((!(arr_3 [i_0])))) >= (((!(arr_2 [i_0]))))));
                }
            }
        }
    }
    var_13 = var_5;
    var_14 = var_1;
    var_15 += (1 > 11950823715126437411);
    #pragma endscop
}
