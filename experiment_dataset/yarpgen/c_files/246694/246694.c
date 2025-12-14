/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((max(var_2, (max(var_5, var_3)))));
    var_20 = ((max(((min(2382940928, -19))), -7001413564401342161)));
    var_21 = ((!((max((min(var_6, var_14)), ((-1 ? var_1 : var_5)))))));
    var_22 ^= var_13;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_23 += (max((((arr_2 [i_0 + 1] [i_0 - 2]) ? 61190 : 7001413564401342161)), (arr_2 [i_0 - 3] [i_0 - 1])));
        arr_4 [i_0 - 2] [i_0] = (max((((arr_1 [i_0 + 1] [i_0 - 1]) ? ((4051163307 ? var_3 : -7001413564401342142)) : ((var_14 ? var_1 : (arr_1 [i_0] [18]))))), ((max((arr_3 [i_0 + 1]), (~44346))))));
        arr_5 [10] = (((min(var_10, (arr_3 [i_0 + 3]))) ? (min(-7001413564401342163, (arr_1 [i_0 + 3] [i_0 - 1]))) : (((min(1232947714, (arr_3 [i_0])))))));
        var_24 = (~var_9);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_2] [i_1] = ((!(((((max((arr_10 [i_2] [i_1] [8]), 1))) ? (max(63, -1517043639323536367)) : (arr_9 [i_2] [i_1]))))));
            var_25 *= (max((arr_3 [i_2]), (max((arr_3 [i_2]), (arr_3 [i_2])))));
            var_26 = (max(var_26, ((max((((arr_2 [i_2] [i_1]) ? (arr_2 [i_2] [i_1]) : (arr_2 [i_2] [i_1]))), ((max((arr_2 [i_1] [i_2]), (arr_2 [17] [i_1])))))))));
        }
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            arr_14 [i_3] = min(-764356354345291657, (((~(~4)))));
            arr_15 [i_3 - 3] [i_3] [i_1] = (max(-7001413564401342154, 176));
        }
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                arr_20 [i_1] [i_1] [i_1] = 764356354345291657;
                var_27 = ((((((max((arr_8 [i_1] [i_1]), 2961722879)) - (((max(var_13, var_4))))))) ? (min(-1517043639323536355, -9223372036854775786)) : (((max(-61, (((!(arr_1 [i_1] [i_1]))))))))));
            }
            arr_21 [i_1] [i_4] = max((((((max(var_5, (arr_10 [i_1] [i_4] [i_4])))) ? (arr_7 [i_1]) : (((255 || (arr_2 [i_1] [i_4 + 2]))))))), ((((min(var_18, 1))) ? (((max(1, 52534)))) : (max(var_14, (arr_10 [i_4 + 1] [i_4] [i_1]))))));
            arr_22 [i_1] [i_1] [6] = (min((max(131064, (arr_16 [i_4 + 2] [i_4 + 2]))), 1473928220));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_28 = ((39 ? -1473928227 : 1));
            var_29 ^= ((((max(-2815908617, (((-1517043639323536366 ? 158 : 1)))))) ? ((min((arr_23 [i_6]), (arr_23 [i_1])))) : (((arr_12 [i_1] [i_1] [i_6]) ? 1 : 1))));
            arr_26 [i_1] [i_6] = ((min(33554400, (arr_25 [i_1] [i_1]))));
            arr_27 [i_6] [1] [i_1] = ((max((arr_9 [i_1] [i_6]), (arr_9 [i_1] [i_1]))));
        }
        var_30 = (((((((max(var_9, (arr_9 [1] [i_1])))) ? 13002 : (arr_8 [i_1] [i_1])))) ? (min(((max((arr_24 [i_1] [i_1]), 1))), (((arr_9 [i_1] [i_1]) ? var_3 : -3887617609397261360)))) : ((max(2090312549, (arr_3 [i_1]))))));
    }
    #pragma endscop
}
