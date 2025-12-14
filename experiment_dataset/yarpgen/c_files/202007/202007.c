/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = var_9;

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    var_11 = (!7);
                    arr_6 [5] [i_0] [6] [i_2] = (min(7279, 1790284811002450163));
                }
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    arr_10 [10] [13] = ((!((((arr_4 [i_0] [i_0] [i_0] [i_0]) / (arr_1 [i_0]))))));
                    var_12 = var_5;
                    var_13 = ((((min((arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1]), (arr_1 [i_3 - 1])))) ? ((min(65528, var_3))) : (arr_5 [i_3 - 1] [i_3 - 1] [13])));
                    arr_11 [i_0] [i_1] [i_1] [11] = ((-((7 ? var_6 : (6 - -309114755)))));
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    arr_15 [i_0] [i_0] [13] [i_4] = ((-7 ? -7 : 4));
                    var_14 = ((((((0 ? 0 : (arr_14 [i_0] [i_0] [i_1] [i_4]))) ^ (~5))) | 5068));
                    arr_16 [i_1] [14] [i_1] [i_1] = ((((max(0, 7))) && (arr_0 [i_0] [17])));
                    var_15 = (arr_0 [i_4] [i_4]);
                }
                var_16 = (min((arr_12 [i_0] [i_0]), -309114755));
            }
        }
    }
    var_17 = ((0 ? 1 : -1));
    #pragma endscop
}
