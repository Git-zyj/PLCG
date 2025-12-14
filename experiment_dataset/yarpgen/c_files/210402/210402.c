/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 += var_1;
                var_13 = (min(var_13, 30588));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_14 = (max(var_14, var_3));
                    var_15 *= var_7;
                }
                arr_9 [i_0] [i_0] = var_3;

                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    arr_14 [6] |= (min((arr_0 [i_1] [i_1]), (arr_1 [10])));
                    arr_15 [i_0] [i_1] [i_3] [i_0] = ((26850 != ((((arr_5 [i_0] [i_0] [1] [1]) || ((!(arr_13 [i_0] [i_3]))))))));
                    arr_16 [i_0] [i_0] [i_0] [i_3] = ((0 << (58447 - 58423)));
                    arr_17 [i_0] = (max((((arr_5 [i_1 - 1] [i_0] [i_0] [i_1 - 1]) || 1)), ((var_0 > (arr_8 [i_3 - 1] [i_3 - 1] [i_1 - 1])))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_20 [i_0] [i_0] = (arr_12 [i_0] [7] [1]);
                    arr_21 [i_4] [i_4] [i_0] = (11324 > ((((arr_18 [i_0] [i_0] [i_0]) == var_5))));
                    var_16 = (max(var_16, (((((arr_6 [12] [4] [i_1 - 1] [12]) ^ (arr_0 [i_4] [i_1 - 1])))))));
                }
            }
        }
    }
    var_17 = ((((max(1, (~var_2)))) ? ((min(3967792167, -292291656))) : var_9));
    #pragma endscop
}
