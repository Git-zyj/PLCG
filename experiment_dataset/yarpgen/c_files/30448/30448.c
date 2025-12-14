/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((18895 <= var_5) <= (max(47307, ((max(var_1, var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((((265010197 << (4 - 3))) != (-1244274442834449416 && var_0))) ? (min(((0 ? (arr_1 [i_0]) : 1520526477)), -18886)) : ((max(((min(0, 1))), ((1 - (arr_0 [18]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = (min(64, (((((max(var_1, -1890750693269856566))) || (var_10 < 265010197))))));
                            var_14 = 4079255748;
                            var_15 ^= (min((-139309647 == 4115), ((-((min(1, var_0)))))));
                            var_16 = ((((-18895 ? (min((arr_6 [6] [i_1] [6] [16]), -18895)) : (-265010191 ^ 1657799639))) != var_10));
                            var_17 = (((arr_0 [i_0]) ? (((((arr_9 [i_3] [i_2] [i_1] [i_0]) > (arr_9 [7] [17] [1] [18]))))) : (1913777832 ^ 0)));
                        }
                    }
                }
            }
        }
    }
    var_18 = (((-127 - 1) > ((((0 - 50829) != var_6)))));
    #pragma endscop
}
