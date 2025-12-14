/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((((0 ? 1 : 152)) >= (!119)))) % ((((min(var_7, 32767))) ? var_3 : ((var_1 ? var_7 : 20991)))))))));
    var_11 = (max(var_11, var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((((13733603871751127878 + 2995) + var_6)) + (((max(var_8, (arr_3 [6] [i_0 + 1]))))))))));
                var_13 &= var_0;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 = var_2;
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0] [i_4] = ((!(~var_1)));
                                var_15 += (min((~1), ((~(arr_10 [i_2] [i_0 - 1] [i_3 - 1] [i_4 - 1])))));
                                var_16 = (min((((!(arr_9 [i_0] [i_0] [i_4 - 1] [i_3 - 1] [i_0 - 1] [i_4])))), (max(var_9, ((var_2 >> (var_6 + 27521)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 *= ((((min(34022, 31513))) ? (min(((var_5 ? var_6 : -101)), -31513)) : (!var_9)));
    #pragma endscop
}
