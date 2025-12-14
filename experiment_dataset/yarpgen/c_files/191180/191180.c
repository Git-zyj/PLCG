/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((var_3 << (((((((var_9 ? var_5 : var_11))) ? (max(3351971476442503519, 1724871725)) : 446675138)) - 3351971476442503494))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (i_0 % 2 == 0) ? (((((((-1724871726 ? 8706724768935457939 : (arr_4 [i_0] [i_1]))) << ((((var_9 ? (arr_6 [i_0]) : (arr_4 [i_0] [i_0]))) - 1)))) << ((((6331628356134707920 << (60098 - 60048))) << (var_9 - 706205090)))))) : (((((((-1724871726 ? 8706724768935457939 : (arr_4 [i_0] [i_1]))) << ((((((var_9 ? (arr_6 [i_0]) : (arr_4 [i_0] [i_0]))) - 1)) - 4294967295)))) << ((((6331628356134707920 << (60098 - 60048))) << (var_9 - 706205090))))));
                    var_15 |= ((250852300 ^ (((((var_10 ? -48 : (arr_0 [0])))) | (max(var_4, -80))))));
                }
            }
        }
    }
    #pragma endscop
}
