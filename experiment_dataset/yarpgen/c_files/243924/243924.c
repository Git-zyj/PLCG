/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (arr_3 [18] [9]);
                var_19 = (((((!((max(1687899972, -8863)))))) ^ (((arr_3 [i_0] [i_0 - 1]) - (arr_2 [2])))));
                var_20 = (((max((arr_1 [i_1]), ((min(-56, 25797))))) + ((((-23978 < ((23948 ? 162 : 141))))))));
                var_21 = 102;
                var_22 = (((min((((arr_2 [i_1]) - (arr_3 [i_0] [i_1]))), (arr_4 [i_0] [17] [13]))) ^ -687));
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
