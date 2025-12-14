/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (0 >> var_1);
    var_15 |= (min(var_10, (var_0 & 0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = (min(((max(var_8, var_3))), ((93 ? -3114408378243758154 : 3114408378243758153))));
                                var_17 = (min(var_17, var_9));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] [i_0] |= (max(((~(12 | 5344016144122186221))), (((arr_1 [i_1 + 1] [i_0]) ^ (arr_2 [i_1])))));
                }
            }
        }
    }
    var_18 += 0;
    var_19 = min(var_9, ((var_13 ? (((max(1, var_8)))) : (min(2305843009213693951, 5344016144122186213)))));
    #pragma endscop
}
