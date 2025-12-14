/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(29816, ((-((var_2 ? -25699 : var_13))))));
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (max(var_16, (((var_10 ^ (((!16128) ? (max(16142, 16114)) : var_1)))))));
        var_17 = (max(((var_5 ? ((var_8 ? 9223372036854775807 : (arr_2 [i_0]))) : ((((!(arr_2 [i_0]))))))), (((var_12 ^ (arr_0 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_7 [i_1] = (max(-1, ((((min((arr_4 [i_1]), (arr_5 [i_1])))) ? var_10 : (arr_4 [15])))));
            arr_8 [i_1] [i_2] = ((((-((var_2 ? 32353 : 32353))))) ^ 4294951128);
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            arr_11 [i_1 + 2] = var_11;
            var_18 += (((((111 ? 0 : (arr_10 [4])))) ? 16142 : (arr_9 [i_3 + 3] [i_3] [i_3])));
            arr_12 [i_3] = var_5;
            var_19 = ((var_4 ? (arr_5 [i_1]) : (arr_5 [i_1 - 2])));
            var_20 = (min(var_20, (((((-(arr_3 [i_1]))) ^ 0)))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            var_21 = (!0);
            var_22 ^= (((25844 ^ 252441954199605770) ? (arr_3 [i_1 + 3]) : (arr_3 [18])));
            var_23 &= (!503316480);
        }
        var_24 &= (min(227, (16190 ^ -16146)));
        arr_16 [i_1] [i_1] = ((!(~var_13)));
        var_25 = ((~(((arr_5 [i_1 + 1]) ^ (((arr_9 [i_1] [2] [i_1]) ^ var_5))))));
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_20 [3] [i_5] = (min(((-(max(16142, 4294951144)))), ((((arr_17 [i_5]) ^ 131040)))));
        arr_21 [14] |= 16146;
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        var_26 = (max(var_26, 34475));
        var_27 = (((((1 ^ ((14454 ? 117 : 4294951154))))) ? var_13 : (((((149 ? 251 : 0))) ? var_3 : ((((arr_19 [i_6]) ? (arr_19 [i_6]) : var_12)))))));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {
        var_28 = (max(var_28, ((((((var_2 ^ var_3) ? (arr_25 [i_7] [i_7]) : (((arr_23 [i_7]) ^ 4294951144))))) ? (~4294951128) : ((-(~93406033217816811)))))));
        var_29 = (((min(1, 466275544)) ^ (max(var_10, (var_9 ^ var_3)))));
        var_30 = var_8;
        var_31 = (((((15 ? 58230 : 0))) ^ (((arr_25 [i_7] [i_7]) ^ var_6))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
    {
        var_32 += ((var_3 ^ ((var_5 ? (-2147483647 - 1) : var_6))));
        var_33 = -2147483645;
        var_34 = ((221 ? 255 : 1));
        var_35 = (arr_27 [i_8] [i_8]);
    }
    #pragma endscop
}
