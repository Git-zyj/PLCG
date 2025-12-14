/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((+(max((0 >= var_5), 1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0 + 1] [i_0] [i_1 - 2] &= (max(((1323879227 ? ((1 ? 5810974778306764034 : var_2)) : (((arr_0 [i_0]) / 60)))), 28));
                var_11 = ((((((arr_1 [i_1 - 3] [i_1]) & (max(-1541649250, 305526342))))) ? 46 : ((((arr_4 [i_0 - 1]) || 5690)))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_12 = ((((arr_3 [i_0]) <= ((((-32759 >= (arr_9 [i_2] [i_1] [i_2 - 2] [i_2]))))))));
                            var_13 |= (((arr_6 [i_0 + 1] [i_0 + 1]) * (max((arr_0 [i_3]), var_6))));
                        }
                    }
                }
            }
        }
    }
    var_14 |= ((var_2 < (((14549249827557519426 ? 15 : var_8)))));
    #pragma endscop
}
