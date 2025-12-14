/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = ((2147483647 ? 0 : 3515635205));
                var_14 = (min(var_14, (arr_1 [i_0] [5])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((~(((((2147483584 ? 1 : -2147483588))) ? (~1) : -2147483584)))))));
                            var_16 = (max(var_16, ((min((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_1] [7] [i_1] [7]))))));
                            var_17 = ((!((((((-2147483647 - 1) >= (arr_7 [1] [1] [i_2] [i_2]))) ? ((var_1 ? 10 : 1)) : ((min(var_8, (arr_6 [i_0])))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_18 = 5922724686061788520;
                                var_19 = (max(var_19, ((((27615 <= -5922724686061788505) ? (--15305) : (min((~1), ((var_9 ? (arr_1 [i_0] [8]) : (arr_9 [i_0] [i_0] [9] [i_0]))))))))));
                                var_20 = (min((((((var_4 ? (arr_13 [i_0] [i_0] [i_4] [i_5] [i_6]) : (arr_17 [i_0] [i_1] [i_5] [i_5])))) ? (~1368107050781224027) : (min(-5922724686061788530, -14700)))), ((~((0 ? (arr_3 [i_0]) : -5965790334044581923))))));
                                var_21 = (((min((arr_9 [i_6] [9] [i_4] [i_5]), (arr_9 [i_0] [i_5] [i_4] [i_0])))) ? 5965790334044581923 : ((1238151861 ? -var_8 : (min(var_1, 2147483591)))));
                                var_22 = ((((((((~(arr_10 [i_6] [1] [i_1] [i_0])))) ? (arr_11 [i_0] [i_1] [i_5]) : (var_3 < var_10)))) > (~7641282501530000279)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 += var_2;
    #pragma endscop
}
