/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 65535;
    var_19 = ((((min((max(var_10, 65535)), 17))) + var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_11 [16] [16] [6] [i_2] = 29913;
                    var_20 = ((((1 > (max(92367610953441952, (arr_6 [i_2] [12] [i_0]))))) ? ((((!(arr_3 [i_2]))) ? ((max(var_14, (arr_8 [i_0] [i_1 + 2] [i_2])))) : 20002)) : ((-(arr_8 [9] [i_1] [i_1 + 1])))));
                    var_21 = (((((((min(var_12, (arr_1 [i_0])))) ? (((max((arr_0 [i_0]), (arr_1 [i_0]))))) : ((30582 ? (arr_5 [i_0] [i_0]) : 59251))))) ? (arr_2 [i_2] [i_0]) : ((max((min(var_17, var_2)), ((min((arr_3 [i_0]), -29913))))))));
                    arr_12 [11] [14] [14] = ((((((max((arr_2 [i_0] [i_0]), (arr_8 [8] [i_1] [i_2])))) + ((((arr_6 [i_1] [i_1] [i_0]) <= (arr_4 [i_0] [11])))))) <= ((((arr_0 [i_2]) > 41907)))));
                }
            }
        }
    }
    var_22 = ((max(var_11, ((var_0 ? 377691950864196883 : 33786)))) <= var_15);
    #pragma endscop
}
