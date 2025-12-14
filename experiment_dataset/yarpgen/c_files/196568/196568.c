/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [2] = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) + -35));
        arr_4 [0] = 1643216359088366984;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_8 [i_1] [i_0] = (arr_0 [i_1]);
            arr_9 [10] = ((((max((arr_2 [i_0] [i_1]), 32767))) << (((((arr_1 [i_0]) | (arr_2 [i_1] [i_0]))) - 13015))));
        }
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_18 = (((arr_12 [i_2] [i_2 - 3]) | ((max(var_10, (arr_12 [i_2] [i_2 - 3]))))));
                    var_19 = (max((((arr_2 [i_2 - 2] [12]) >= (arr_2 [i_2 - 2] [i_3]))), (max((arr_2 [i_2 - 2] [8]), (arr_2 [i_2 - 2] [i_2])))));
                    var_20 = (max(var_12, ((min((max(13, -35)), (arr_0 [i_2 - 1]))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_21 = (min(var_21, ((min((arr_7 [i_4] [i_4] [10]), (min(((max(-37, (arr_0 [i_4])))), (var_0 * -9128653847716726447))))))));
        var_22 &= (((max((((arr_16 [1] [8]) | var_9)), (arr_1 [i_4]))) + (arr_2 [i_4] [i_4])));
        var_23 = (max(var_23, ((((max((arr_0 [8]), (arr_2 [i_4] [i_4]))) ? ((25484 % (arr_6 [i_4] [i_4]))) : (((arr_7 [14] [i_4] [i_4]) ? var_12 : (arr_5 [1] [8]))))))));
    }
    #pragma endscop
}
