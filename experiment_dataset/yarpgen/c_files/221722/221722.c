/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_13 = (max(var_13, ((((((14504183246230494576 ? 143552238122434560 : 17622397479467352742))) == (min(((max(1, 42387))), 7375639835318374767)))))));
                    var_14 = (max(var_14, (((!(var_1 | 1908134340))))));
                }
                arr_9 [i_0] [i_0] [i_0] = ((((((1 | (arr_0 [i_0]))))) == var_3));
            }
        }
    }
    var_15 = (max(var_15, -255));
    #pragma endscop
}
