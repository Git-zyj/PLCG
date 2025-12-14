/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((((var_11 ? var_13 : var_3))) >= (min(3260747615, 10086738847015827478))))), ((min(var_7, var_7)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 |= ((+(max(((((arr_0 [8] [8]) * (arr_1 [i_0])))), (max((arr_2 [16] [i_0]), (arr_2 [8] [8])))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((!((max((min((arr_3 [i_0]), (arr_4 [i_0] [10] [i_1]))), ((max((arr_1 [i_1]), (arr_3 [2])))))))));
            var_20 = ((((+((max((arr_1 [1]), (arr_3 [i_0])))))) / (min(((min((arr_0 [i_0] [i_0]), (arr_3 [i_0])))), ((-(arr_4 [i_0] [i_0] [i_0])))))));
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_21 &= (max((arr_7 [i_0] [5] [i_2]), ((~(arr_7 [i_0] [i_0] [i_0])))));
            arr_8 [i_0] [i_0] [i_0] = (89 & 8360005226693724127);
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] = ((-(min(536870848, 109))));
            arr_12 [3] [5] &= ((10086738847015827478 << (89 - 63)));
            arr_13 [i_0] [i_0] = ((-(max((((arr_10 [4]) ? (arr_6 [10] [10]) : (arr_1 [i_3]))), (((arr_2 [i_0] [15]) / (arr_9 [i_3])))))));
        }
        for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
        {
            var_22 = (max(var_22, ((max(((((min(-870987670, -870987678)) & (min((arr_10 [i_4]), (arr_10 [i_4 - 1])))))), ((max((arr_4 [1] [1] [1]), (arr_4 [8] [8] [8])))))))));
            var_23 = (min((arr_10 [i_0]), (((arr_17 [7] [i_4 - 1] [7]) ^ (!870987669)))));
        }
    }
    var_24 = (min(var_24, (((1 || ((min(var_9, var_10))))))));
    #pragma endscop
}
