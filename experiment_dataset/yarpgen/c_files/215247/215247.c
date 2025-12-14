/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_16 = ((max((arr_0 [i_1]), (1 && 4294967289))));
                            arr_11 [i_1] [1] [i_1] [i_1] = -1;
                            arr_12 [i_3] [i_1] [i_2] [22] [i_1] [i_0] = (min((((-9223372036854775786 > 1) ? var_7 : ((max(1, var_15))))), 1));
                            var_17 *= ((var_12 ? ((-(arr_7 [2] [i_1] [i_1]))) : (((arr_9 [i_0] [i_1] [i_2] [i_3]) ? (arr_7 [i_2] [i_2] [i_2]) : (arr_7 [i_0] [i_0] [i_3])))));
                            var_18 = (max(var_18, ((max(var_10, (arr_1 [i_0] [i_2]))))));
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_1] = ((((((min((arr_9 [i_0] [i_0] [i_0] [i_0]), var_2))) == ((174 ? (arr_0 [i_0]) : 9223372036854775801)))) ? (max((((arr_0 [i_0]) + 6037541297298713291)), 12847738732181592178)) : 255));
            }
        }
    }
    var_19 = min((-2147483647 - 1), 1);
    var_20 = (min(var_13, var_3));
    #pragma endscop
}
