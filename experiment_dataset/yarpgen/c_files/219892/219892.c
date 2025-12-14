/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((var_4 ? ((max(var_4, var_3))) : ((199 ? var_6 : 57)))), 1986984058));
    var_11 &= ((-(!var_5)));
    var_12 -= 61;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((!-1986984058) == (((var_9 * var_5) ? 43126 : var_3)));
                var_13 = (max(-var_0, (max(438244546, (arr_3 [i_0 + 2])))));
            }
        }
    }
    #pragma endscop
}
