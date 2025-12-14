/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ? (var_8 ^ var_3) : (((203 ? 18089506923538606969 : 2616366292)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = 231;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = ((((((236 ? (arr_3 [i_2] [i_0]) : 37)))) ? 6 : var_8));
                                var_15 = (((arr_2 [19] [i_3]) ? (!236) : 166));
                                arr_12 [i_3] [i_3] [i_0] [i_3] [i_0] = ((var_6 ? (((arr_10 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_1] [i_2] [i_0 - 1] [i_4]) : (min(10087981891395906808, 0)))) : -0));
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_3] = (arr_3 [i_0] [i_0]);
                            }
                        }
                    }
                    arr_14 [i_1] = min((!7531321614408000447), (min((min(7531321614408000447, 194)), ((((arr_5 [11]) ? var_8 : (arr_3 [i_1] [i_1])))))));
                    var_16 = (((((((228 ? (arr_3 [i_0] [i_0]) : 1)) / var_5))) ? ((((arr_1 [i_1]) ? (((((arr_0 [i_0]) != 163)))) : -7531321614408000447))) : (min(var_7, ((min(253, (arr_10 [14] [i_1] [i_1] [14] [i_2]))))))));
                }
            }
        }
    }
    var_17 = 47828;
    #pragma endscop
}
