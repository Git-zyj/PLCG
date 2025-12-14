/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((~var_6), var_2));
    var_12 *= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((((min((((arr_0 [i_0] [i_1]) & 4294967295)), 59))) ? ((((var_4 ^ 17056) ^ ((55754 << (((arr_0 [i_0] [i_0]) - 620444627))))))) : (arr_2 [i_1] [1]))))));
                arr_7 [i_0] = ((-((236 ? (arr_0 [i_0] [i_1]) : ((-(arr_1 [1])))))));
                var_14 = ((-((19077 / (3318350824 / 20)))));
                var_15 = var_8;
            }
        }
    }
    #pragma endscop
}
