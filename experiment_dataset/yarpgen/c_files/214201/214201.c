/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (max((((((var_10 ? (arr_0 [i_0]) : (arr_5 [i_0]))) < ((min((arr_1 [i_0 + 2]), var_9)))))), var_10));
                var_12 = ((((max((arr_6 [i_0 - 1] [i_1]), (min((arr_3 [i_0 - 2] [i_1]), var_3))))) ? (arr_1 [i_1]) : (arr_3 [9] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = ((min(((max(1, (arr_2 [i_3]))), (~1)))));
                            var_14 = (min(var_14, var_5));
                            var_15 = (min(var_15, (((12527842881858278929 ? 11 : 24)))));
                            var_16 += ((3339638314 ? 955328981 : 175));
                        }
                    }
                }
            }
        }
    }
    var_17 = (var_6 | var_8);
    #pragma endscop
}
