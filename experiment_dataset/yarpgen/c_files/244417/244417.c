/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [16] = (max(-var_4, (((-(arr_2 [i_1 + 2] [i_0]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_1] [i_1 + 2] [i_1] [6] = (min(((-(~var_0))), ((min(((min(var_1, var_12))), var_3)))));
                        arr_13 [i_3] [i_3] [i_3] [i_1] = (max(((856033832 << (((arr_3 [i_0] [i_1 + 2]) - 6877925542785647451)))), (((2012862242 >= ((-(arr_9 [i_2]))))))));
                        arr_14 [i_0] [0] [i_2] [i_0] = (-(arr_2 [i_0] [i_1 + 2]));
                        arr_15 [i_0] [i_0] [i_1] [i_3] [i_3] = ((!(((((min((arr_7 [i_1] [1]), var_12))) ? ((-(arr_1 [5]))) : -var_0)))));
                    }
                }
            }
            arr_16 [8] [i_1] [11] = ((((max((arr_4 [i_1 - 1] [i_1 + 2] [i_1 + 2]), -1139551931))) != 9));
            arr_17 [i_1] [11] = ((((max((arr_7 [i_1 - 1] [i_1 + 1]), (arr_7 [i_1 - 1] [i_1 + 1])))) ? (max((arr_7 [i_1 - 1] [i_1 - 1]), (arr_7 [i_1 + 2] [i_1 - 1]))) : var_12));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_21 [i_0] [i_4] = 9194772913394061932;
            arr_22 [i_0] [i_4] = (max((((!var_3) % var_0)), (arr_8 [i_0])));
        }
        arr_23 [8] = (arr_19 [i_0] [i_0] [12]);
        arr_24 [i_0] [1] = (max((min((((var_1 ? var_6 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))), (min(5804623370810455402, var_1)))), (((~((var_9 ? (-2147483647 - 1) : 0)))))));
        arr_25 [i_0] = (min((~var_1), ((((arr_0 [14]) == ((((arr_7 [15] [i_0]) ? 48178 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [4])))))))));
    }
    var_13 = var_6;
    var_14 = (((var_7 ? -798142293 : var_2)));
    #pragma endscop
}
