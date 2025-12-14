/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(-7259, 181878975252780433));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_13 *= (arr_10 [i_0] [i_1 - 1]);
                        var_14 = ((min(31247, 857544355)));
                    }
                }
            }
        }
        var_15 = (18264865098456771183 * 3758096384);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = var_10;
        arr_15 [i_4] = (!1849196131015666784);
    }
    var_16 = var_8;
    #pragma endscop
}
