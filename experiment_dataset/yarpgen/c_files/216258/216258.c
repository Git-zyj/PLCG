/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_11 *= ((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((arr_2 [i_0]) * (arr_2 [5]))) : (((arr_2 [i_0]) ? (arr_2 [i_2]) : (arr_2 [i_0])))));
                    var_12 ^= var_6;
                    var_13 ^= (arr_6 [i_2]);
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_1] [i_1] = (min((min(((var_2 ? (arr_10 [6] [6] [i_1] [i_1]) : -74)), ((min((arr_7 [i_0] [i_0]), (arr_9 [i_0] [i_0])))))), var_4));
                    var_14 = (max(var_14, ((((arr_5 [i_1] [i_3]) ? (((arr_5 [i_0] [i_3]) ? -119409996 : (arr_7 [i_0] [i_0]))) : (!var_4))))));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_15 = (max(var_15, (((min((((!(arr_7 [i_1] [i_0])))), 74))))));
                    arr_15 [i_1] [i_0] [i_1] = -80;
                    arr_16 [0] [i_1] [i_1] = (((max(3737956593, (((17 ? 84 : 115))))) / var_7));
                }
                var_16 = (max(var_16, (arr_3 [i_0])));
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
