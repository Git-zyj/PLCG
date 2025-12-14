/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((((var_8 ? var_7 : var_9))) ? 101 : (min(var_6, var_9)))) != var_7))));
    var_11 *= -101;

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((!((min((arr_2 [i_0 - 1] [i_0 + 1]), var_4)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_13 += max((max((arr_1 [i_1]), -97)), ((~(((arr_1 [i_0 + 1]) >> (-127 + 160))))));
                        var_14 += ((-(((((var_8 ? var_2 : 0))) ? ((max(32, -33))) : ((1832541445 >> (((arr_2 [i_0] [12]) - 705700986))))))));
                    }
                }
            }
        }
        var_15 = (arr_8 [i_0] [i_0] [i_0] [i_0 - 1] [5] [i_0]);
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_16 += ((var_7 + (max((!1), (arr_10 [10])))));
        var_17 = (min(var_17, (((~((((((-(arr_12 [i_4] [i_4 + 1])))) && (((-33 ? 1 : var_8)))))))))));
        arr_14 [i_4] = (max((arr_12 [i_4 + 1] [i_4]), -32));
        var_18 = var_5;
        var_19 *= (((!var_3) ? (((-118 ? ((var_9 ? 118 : 93)) : (!1)))) : ((-(min(2317419085964951488, (arr_3 [i_4])))))));
    }
    #pragma endscop
}
