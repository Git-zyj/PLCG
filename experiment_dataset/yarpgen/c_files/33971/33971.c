/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_14 = ((-(((~var_10) ? ((-(arr_1 [i_0]))) : ((max(var_3, var_7)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = 882826937;
                        var_16 &= ((((((min((arr_6 [i_0] [i_1] [i_0] [i_0]), (arr_8 [i_0] [i_2])))) ? var_4 : (arr_7 [i_0 + 1] [i_2] [i_0 + 1] [i_3])))) ? (max((max(var_1, (arr_4 [i_0 + 1]))), (arr_2 [i_0 + 2]))) : ((((!(((var_13 >> (arr_2 [i_2])))))))));
                        var_17 = (((((-var_12 ? var_0 : (var_2 - var_1)))) ? var_1 : ((max(882826917, 24785983)))));
                        var_18 = ((882826937 ? (arr_4 [i_0 - 2]) : -11971557082005361164));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_19 = (min(var_19, ((((max(3412140367, 1)) < ((~(((arr_13 [i_4 - 1]) & var_3)))))))));
                    var_20 = max(var_0, (min((max(var_6, var_12)), -var_7)));
                    var_21 = (max(((((arr_15 [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 + 1]) ? 3269341825149368201 : (arr_15 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1])))), (((var_3 / var_11) ? ((var_11 ? var_8 : var_11)) : 1732))));
                    arr_17 [i_4] [i_4] [i_4] [i_6] = ((((min(3412140377, 249))) ? (max(((max((arr_14 [18]), var_13))), (arr_11 [i_5]))) : ((((min((arr_11 [i_5]), 1))) ? (max(-3514953377273005712, (arr_12 [4] [i_5] [i_6]))) : ((max((arr_12 [i_4 + 1] [i_5] [i_6]), (arr_16 [i_5] [i_5] [i_5] [i_5]))))))));
                }
            }
        }
        arr_18 [i_4] [i_4] = (max(3123265582726069478, 0));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 20;i_8 += 1)
        {
            {
                arr_25 [i_7] [i_7] [1] = (arr_24 [i_7] [i_8 - 3] [i_8]);
                arr_26 [i_7] [i_7] = (((((var_13 ? 1323402603 : 882826912))) ? ((((arr_12 [i_8] [i_8 + 2] [i_8 + 3]) ? var_1 : (arr_12 [i_8] [i_8 + 2] [i_8 + 3])))) : ((11333235404824229083 ? ((252 ? var_3 : (arr_22 [i_7]))) : var_0))));
            }
        }
    }
    #pragma endscop
}
