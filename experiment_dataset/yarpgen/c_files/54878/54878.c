/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((max(var_15, -21233)))) ? ((-11 ? ((var_8 ? var_11 : 0)) : (0 < 0))) : var_3));
    var_19 = (max(var_19, (((var_13 ? (max((max(var_6, var_14)), var_7)) : var_16)))));
    var_20 = (var_5 / var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = (arr_4 [i_0] [i_1]);
                    var_21 -= (((max(1001216227637681322, 242)) < 1645006927));
                    arr_9 [i_0] [i_0] [i_2] = (((max(1, ((22 ? 17445527846071870308 : 1))))) ? ((~(arr_2 [i_0] [i_0]))) : (((var_13 ? 232 : 127))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 = (max(0, (arr_0 [i_2] [i_2])));
                                arr_14 [i_0] [7] [8] [i_3] [i_3] [i_4] [i_4] = (max(((1 ? var_15 : (((arr_6 [i_2] [i_4]) - var_6)))), ((((arr_10 [i_0] [6]) != 2067570970582595946)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
