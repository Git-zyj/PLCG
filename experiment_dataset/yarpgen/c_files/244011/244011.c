/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (((0 < (var_13 ^ var_17))) ? ((max(65524, (65524 == 20)))) : (((var_15 ? var_11 : 1748800670))));
                    arr_8 [i_1] [i_1] = (min(((((max(65524, var_17))) ? 65528 : (((var_13 + 2147483647) << (((var_17 + 1923964383) - 15)))))), 65527));
                    arr_9 [i_0] [i_0] [i_0] = (((((var_17 ? (arr_6 [i_0] [i_2 - 1]) : (arr_0 [i_2 - 2])))) ? -var_7 : (min((arr_6 [i_2] [i_2 + 1]), (arr_2 [i_2 - 2])))));
                    var_19 = ((~(arr_3 [i_2 - 1] [i_1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_4] = ((!(((788 ? -707640970 : 1103303328)))));
                arr_17 [i_4] = 36;
                var_20 = (((max(((~(arr_6 [i_4 + 1] [i_3]))), (arr_0 [i_4 + 1])))) ? ((min(((!(arr_4 [i_3] [i_3]))), (!15684)))) : 64753);
            }
        }
    }
    #pragma endscop
}
