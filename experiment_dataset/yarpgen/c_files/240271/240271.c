/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((max(var_13, var_5))) < -var_9)) ? ((-((var_12 ? var_1 : var_13)))) : ((((var_10 ? var_13 : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_16 = ((~(((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_10 : (arr_1 [i_0])))));
                    var_17 += (((arr_6 [1] [i_1] [i_1] [i_1]) / -2147483630));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_18 = (max(var_18, (((((((max(2147483630, 605562178)) | ((((arr_1 [i_0]) ^ (arr_9 [i_3] [i_1] [9]))))))) ? ((((~(arr_2 [i_3]))) % var_12)) : ((((arr_8 [i_0] [i_1] [i_3] [i_3]) + (((arr_9 [i_0] [i_1] [i_3]) + (arr_1 [1])))))))))));
                    arr_10 [i_0] [i_3] = ((-(((arr_5 [i_0] [11] [i_1] [i_3]) ? ((-(arr_3 [i_0] [i_1]))) : (((((arr_4 [i_0] [i_1] [i_3]) < var_8))))))));
                }
                var_19 = (((((((((arr_7 [i_0] [i_0] [i_1]) ? 76 : (arr_7 [3] [i_0] [i_1])))) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((!(arr_0 [i_0] [i_0]))))))) ? 494988589 : (arr_8 [i_0] [i_0] [i_1] [i_1])));
                arr_11 [i_0] [17] [1] = ((((((arr_2 [i_1]) ? (((min((arr_0 [i_1] [i_0]), (arr_0 [i_0] [i_0]))))) : (min(1, (arr_7 [11] [i_0] [i_1])))))) ? ((((~(arr_6 [i_1] [i_1] [i_1] [i_1]))))) : (arr_4 [i_1] [i_1] [i_1])));
                arr_12 [i_0] [13] = (((arr_6 [i_1] [i_1] [i_0] [i_0]) ? ((~(arr_7 [i_0] [9] [i_0]))) : (((((((var_0 == (arr_8 [i_0] [i_0] [i_1] [i_1])))) > ((-(arr_9 [i_0] [i_0] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
