/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(1845982577, 1));
    var_17 = var_13;
    var_18 = (max(var_18, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [i_2] [i_1] = ((~(~var_5)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_4] [i_3] = ((((max(var_6, (arr_8 [i_0] [i_2 + 1] [i_2] [i_2 - 1])))) ? ((((2147483633 ? -26 : 0)) - 1)) : ((max((arr_11 [i_2 + 1] [i_1] [i_2 - 1] [i_3] [i_2 + 1] [i_2 + 1]), (arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_3]))))));
                                var_19 = (var_11 ? 2768645793371580767 : 154);
                                arr_16 [i_1] [i_3] = ((~(arr_14 [i_0] [i_1] [i_3])));
                                var_20 = (((((min((arr_8 [i_0] [i_2 - 1] [i_2 - 1] [i_3]), var_8)))) * (min(((var_15 ? 112774097 : (arr_10 [i_1]))), ((max(var_10, (arr_8 [i_2] [i_2] [i_2 - 1] [i_2 - 1]))))))));
                            }
                        }
                    }
                    var_21 = ((!(arr_11 [i_0] [i_2] [i_2 + 1] [i_1] [i_0] [i_1])));
                }
                var_22 = ((-(arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
