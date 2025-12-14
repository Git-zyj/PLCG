/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_2));
    var_11 = (min(var_11, ((min(((((max(-1428401031, var_5))) ? (var_6 == var_6) : ((1428401030 ? var_6 : -368359820)))), (max(-var_7, (max(var_4, var_3)))))))));
    var_12 = (max(-var_6, ((var_5 ? (max(118, var_8)) : (((368359819 ? -4194304 : var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 = (arr_3 [9] [i_1]);
                            arr_9 [i_0] = (((((+((((arr_6 [3] [i_1] [i_3]) < -8063639269418654891)))))) ? ((max((arr_0 [i_1]), (arr_0 [i_0])))) : (((368359813 < ((-(arr_6 [i_0] [i_2] [i_2]))))))));
                        }
                    }
                }
                var_14 = ((((((((arr_8 [i_0] [i_1] [i_1] [22]) ? 1 : (arr_5 [i_0] [i_0] [i_0])))) & (arr_1 [i_0])))) ? (((arr_6 [i_0] [i_1] [i_1]) ? (arr_6 [i_0] [i_1] [i_1]) : 7407612664383915761)) : -var_2);
            }
        }
    }
    #pragma endscop
}
