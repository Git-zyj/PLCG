/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(((max(var_6, var_12)) ^ var_12))));
    var_15 = (((var_0 + 2147483647) << (((var_3 + 45) - 30))));
    var_16 = ((-(((max(var_11, 68717379584)) & 11))));
    var_17 = (max((((206 || (16777215 & -69)))), ((166 ? 38674 : 38674))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((~(arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1])));
                    arr_9 [20] [i_0] [i_0] [i_0] = (max((((((26861 ? 2720946987066636324 : 0)) < (((max(26861, 26888))))))), -1821033955248721400));
                }
                var_18 = ((-((38674 ? 1 : (arr_7 [i_1 + 2] [1] [1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
