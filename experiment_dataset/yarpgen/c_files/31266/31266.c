/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_7 ? var_0 : var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (max(var_11, ((max((((96 * 96) - ((-(arr_0 [1] [i_0]))))), ((min(var_8, (min(-32741, 159))))))))));
        arr_4 [1] [i_0] = ((((((((-(arr_1 [i_0])))) && (((arr_3 [i_0] [i_0]) || var_0))))) / ((((((arr_2 [i_0]) == var_7))) - var_1))));
        var_12 = ((+(max((arr_1 [i_0]), (max(161, 1884503308))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_13 = ((-12 % (((65523 - 94) & (arr_1 [0])))));
        var_14 = (max(var_4, (((!((max(1884503296, 63779))))))));
    }
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = ((var_6 ? ((-(arr_10 [i_2 - 2] [i_2 + 2]))) : (min((arr_10 [i_2 - 3] [i_2 - 3]), (arr_10 [i_2 - 2] [i_2])))));
        var_15 = (18623 + -1884503290);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_22 [i_2 - 2] = ((!(((+((var_4 ? (arr_20 [i_2] [i_3] [i_4] [i_5]) : var_0)))))));
                        var_16 = (max(((min(((var_0 ? 18623 : 0)), (((var_8 ? var_3 : var_0)))))), ((((max(var_6, -2))) ^ ((125 ? var_4 : var_1))))));
                        arr_23 [i_3] [i_4] [i_5] = var_0;
                    }
                }
            }
        }
        var_17 = (~27);
        var_18 ^= 9740957565707013470;
    }
    var_19 = ((!((!((max(3816100628470730957, 150)))))));
    #pragma endscop
}
