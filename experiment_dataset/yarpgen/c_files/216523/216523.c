/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = var_7;
                    arr_10 [i_0] = (min(((min(65535, var_0))), 2097151));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_3] [i_3] [i_4] [i_3] [i_0] = max(((10230721957767070552 && (var_7 && var_5))), ((((max(var_9, 1))) || (!var_0))));
                                var_14 = ((((!(4044241097 || 4044241097)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(((var_6 ? var_7 : (min(var_7, 17028258516774257388)))), ((0 & ((min(var_6, var_1)))))));
    #pragma endscop
}
