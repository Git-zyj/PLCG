/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((max(var_6, var_1))) ? var_11 : (1 - var_8)))) ? var_11 : -var_1));
    var_15 = (((!-var_1) ? ((max(1, 1))) : (!var_13)));
    var_16 = ((-(min(((70005640032936523 ? (-32767 - 1) : var_3)), (var_7 >= var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = ((((((arr_2 [i_0] [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_0 [i_0]))) | (~var_8))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 = ((((((0 >= ((max(27430, 1))))))) > (max(8431949338468780961, 50))));
                    arr_8 [i_2] [i_2] [i_0] = (max((((arr_0 [i_0]) << (-5570 + 5582))), (((((arr_6 [i_2]) ? (arr_7 [i_0] [i_0] [i_0] [i_1]) : (arr_0 [i_0])))))));
                    var_19 -= min((arr_0 [0]), ((21026 ^ (max(-2015058418, (arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                }
                arr_9 [i_0] = (((((~(arr_1 [i_0])))) ? ((((((arr_4 [i_0] [i_0] [i_1]) ? (arr_5 [8]) : (arr_5 [i_1]))) << (((arr_6 [i_0]) - 235))))) : (max(var_11, (~var_10)))));
                var_20 = ((((min((min((arr_3 [i_0] [i_1]), var_9)), (((!(arr_7 [i_0] [i_1 + 1] [i_1 - 1] [i_1]))))))) ? ((max(-61, (((arr_6 [i_0]) * (arr_5 [3])))))) : ((4608963902121560562 ? 78 : (arr_6 [12])))));
                arr_10 [i_0] [i_0] = ((-((max(102, (arr_6 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
