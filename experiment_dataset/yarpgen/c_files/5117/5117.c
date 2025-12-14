/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [12] [i_0] = (arr_0 [i_0]);
        var_15 -= var_3;
        var_16 = (((arr_0 [i_0]) ? var_5 : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_17 -= (max(var_4, (min(118, (arr_8 [i_1])))));
            var_18 = (max(var_18, -4));
            arr_12 [i_1] [i_2] = 116;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_20 [7] [i_4] &= ((((arr_17 [i_5] [i_3] [i_4] [i_1] [i_3]) > (arr_17 [i_1] [i_1] [i_4] [9] [i_3]))));
                        var_19 += (((arr_3 [i_1]) << (((min((arr_3 [i_3]), (arr_3 [i_5]))) - 17209007339593706316))));
                        var_20 -= (min((!-5), (max((arr_8 [i_5]), (arr_16 [i_1] [i_4])))));
                        arr_21 [i_3] &= ((((max((-4599 != -12), ((!(arr_1 [i_1])))))) != (((arr_14 [i_1] [1] [i_1]) ? -4 : (~255)))));
                    }
                }
            }
            arr_22 [i_1] = min((arr_0 [i_1]), ((((arr_9 [i_1]) != (min((arr_17 [i_3] [i_1] [i_1] [i_1] [i_1]), (arr_2 [9])))))));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            arr_25 [i_1] [16] = (((((arr_17 [i_6] [i_6] [i_1] [i_6] [i_6]) << (((arr_17 [21] [i_6] [i_1] [i_1] [i_1]) - 40)))) / (((((arr_5 [i_1] [i_1]) * 134))))));
            arr_26 [i_1] [i_1] = 4612;
        }
        var_21 = (min(var_21, ((((min((arr_15 [i_1] [i_1]), (arr_15 [i_1] [i_1]))) ^ (arr_8 [i_1]))))));
        arr_27 [i_1] = ((+(((arr_10 [i_1] [i_1] [i_1]) ? (((((arr_13 [i_1]) || (arr_6 [i_1] [i_1]))))) : ((var_7 ? (arr_18 [i_1] [21] [i_1] [i_1] [i_1] [i_1]) : (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
        var_22 = (min(var_22, (arr_2 [i_1])));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        arr_32 [i_7] [i_7] = (min((((!(arr_16 [i_7] [i_7])))), (arr_16 [i_7] [i_7])));

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            arr_35 [i_8] [i_7] = 0;
            var_23 = (((((+((var_2 ? (arr_16 [i_8] [15]) : (arr_34 [i_7] [i_8])))))) ? (((arr_34 [i_7] [i_8]) ? (arr_34 [i_8] [i_7]) : var_12)) : (((((max((arr_30 [i_7] [i_7]), 146))) && (((0 ? (arr_23 [i_7]) : (arr_6 [14] [i_8])))))))));
        }
        arr_36 [i_7] &= (((((3537103029 >= (arr_9 [i_7]))) ? (((140 ? var_9 : 54))) : (min((arr_13 [i_7]), (arr_19 [i_7] [i_7] [i_7] [i_7] [8] [i_7]))))));

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_40 [i_9] [i_9] [i_9] = arr_33 [i_7];
            var_24 = (min(var_24, (((((!((-2 == (arr_2 [i_7]))))))))));
            var_25 = (min((arr_30 [i_7] [i_7]), (arr_13 [i_7])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        arr_47 [i_7] [i_10] [i_9] [i_10] [i_11] &= ((+(((((var_3 ? (arr_15 [i_10] [i_11]) : 15))) ? (max((arr_30 [i_7] [i_7]), (arr_17 [i_7] [i_9] [i_10] [i_11] [i_10]))) : (arr_42 [i_7] [i_7] [i_7] [i_7])))));
                        var_26 = (((((((var_13 ? 114 : 1180453728))) & 3062739668176401730)) | ((min((1866213980 <= var_1), (((arr_13 [i_7]) ? 15276 : 2147483633)))))));
                        arr_48 [i_9] [i_10] [i_9] = (((((min(-115, var_2))) + var_9)));
                    }
                }
            }
        }
        var_27 -= (min((((!(((-6384566339883567436 ? (arr_19 [19] [i_7] [i_7] [i_7] [i_7] [19]) : (arr_9 [i_7]))))))), (!-38)));
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
    {
        arr_52 [i_12] = (min((min(3062739668176401726, 34)), (((1912162048 ? 242 : ((-23218190 ? (arr_37 [i_12]) : var_7)))))));
        arr_53 [i_12] = ((max(1, var_5)));
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            {
                var_28 += var_11;
                arr_61 [i_14] [i_14] = ((((24466 ? (arr_58 [i_13 + 1] [i_13 + 3] [i_13 + 3]) : (arr_23 [i_13 - 1])))) == ((1 ? (((arr_0 [i_14]) ? -38 : 3537103029)) : ((min((arr_34 [i_13] [i_14]), var_10))))));
            }
        }
    }
    #pragma endscop
}
