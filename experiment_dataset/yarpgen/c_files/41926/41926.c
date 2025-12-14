/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(max(var_5, 8645531024171806652))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = ((56 ? -23874 : 11461652));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = ((!(((!12) >= (~9853)))));
                            var_17 = (max(var_17, ((((((arr_1 [i_0 + 3]) ? 253 : (((var_4 >= (arr_4 [i_1] [i_1])))))) > -80)))));
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_1] = 1146759520;
            }
        }
    }
    var_18 = 11461635;
    #pragma endscop
}
