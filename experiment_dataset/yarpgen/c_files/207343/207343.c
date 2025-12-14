/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((!(((var_0 | (((19157 ? 46385 : var_5))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((min(((((((arr_2 [i_1]) ? var_10 : 12155713075055356696))) ? ((max(46379, 46385))) : ((46390 ? (arr_7 [i_2 + 1] [i_0]) : (arr_5 [i_0]))))), (((!((min(46379, var_9)))))))))));
                    arr_10 [i_0] [i_0] = (((((arr_8 [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 2]) ? 46379 : 13690841486393054354))) || ((((arr_8 [i_2 + 4] [i_2 + 1] [i_2 + 2] [i_2 - 1]) ? 25 : 77))));
                }
            }
        }
    }
    var_13 = (var_0 & 46379);
    var_14 = (0 != 46389);
    #pragma endscop
}
