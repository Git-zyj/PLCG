/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 * (((!(((54084 ? 0 : var_8))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] = ((-29 == (var_1 & 234)));
                    var_14 += var_3;
                }
            }
        }
    }
    var_15 |= (max(((((var_6 ? 0 : var_0)))), ((((max(var_0, 1241530499))) - (min(var_8, 16900491830677047100))))));
    #pragma endscop
}
