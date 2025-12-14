/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_10 += arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1];
                    arr_10 [i_1] = (((((((3640 >> (((-127 - 1) + 134))))) && (((3651 ? 215 : 1))))) ? -331915786 : (arr_3 [i_0] [i_0] [i_1])));
                }
            }
        }
    }
    var_11 -= ((((min((-1348081605 == 1407388407), (max(102, 5587))))) ? (min((16120 == var_8), ((1914733874 ? var_3 : var_3)))) : ((-(var_4 / -46)))));
    #pragma endscop
}
