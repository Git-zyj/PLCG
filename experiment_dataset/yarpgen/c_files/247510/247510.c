/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (!18446744073709551615);
        arr_3 [i_0] [i_0] = (max(((((~(arr_1 [i_0]))) >> (((max((arr_0 [i_0]), (arr_0 [i_0]))) + 14438829)))), (((((-(arr_0 [i_0]))) / (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (max(((+(((arr_5 [i_0] [i_1]) ? (arr_4 [i_0] [i_1 - 1]) : (arr_7 [i_0]))))), -63));
                    arr_10 [i_0] [i_1 - 1] [i_1] = (((~(max((arr_5 [i_0] [i_1]), (arr_1 [i_0]))))));
                    var_21 = (max((max((max((arr_6 [i_2] [i_1]), (arr_9 [i_0]))), (arr_7 [i_0]))), ((~(((arr_7 [i_1 - 1]) << (((arr_0 [i_1 - 1]) + 14438813))))))));
                    arr_11 [i_1] [i_1] [i_1 - 1] [i_0] = 242;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_14 [i_3] = (arr_0 [i_3]);
        var_22 = (max(var_22, ((max((((arr_8 [i_3] [i_3] [i_3]) ? ((max((arr_8 [i_3] [i_3] [i_3]), (arr_9 [i_3])))) : (arr_0 [i_3]))), (arr_5 [i_3] [i_3]))))));
        var_23 = max((max((max((arr_6 [i_3] [i_3]), (arr_0 [i_3]))), (arr_9 [i_3]))), ((max(134217727, (max(65530, 4294967295))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = (((((+(max((arr_15 [i_4] [i_4]), (arr_9 [i_4])))))) ? ((~((~(arr_0 [i_4]))))) : ((65535 ? -8 : 20))));
        arr_18 [i_4] = (((arr_15 [i_4] [i_4]) ^ (arr_0 [i_4])));
    }
    var_24 = var_16;
    var_25 = ((max(var_10, (max(var_19, var_1)))));
    #pragma endscop
}
