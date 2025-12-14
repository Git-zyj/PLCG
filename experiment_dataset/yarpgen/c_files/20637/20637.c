/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((!(((4294967295 ? 629447336 : var_4)))))));
    var_14 = (max(var_14, (((-234 ? ((min(((min(245, 19))), ((var_4 ? 242 : -5))))) : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [8] = 15;
                arr_6 [i_0] [i_1] = ((((min((((!(arr_1 [4])))), var_6))) * var_8));
                arr_7 [i_1] &= (max(((4116991813 % (arr_4 [i_1 - 3] [i_1 + 2] [i_1]))), (((-(-8517854389264210782 > -4))))));
                var_15 = (min(var_15, (arr_2 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
