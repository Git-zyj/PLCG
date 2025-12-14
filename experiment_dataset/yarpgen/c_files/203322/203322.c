/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_10 = ((3 != (arr_3 [i_1])));
            var_11 = -292244489600477447;

            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_1] [3] [1] = ((var_9 ? var_7 : var_1));
                    var_12 ^= (~14);
                    var_13 ^= ((-var_8 - ((34608 ? 62499 : var_6))));
                }
                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    arr_16 [i_4] [i_0] [i_2 - 1] [i_1] [i_1] [i_0] = ((((13 ? var_6 : (arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4]))) >= 65186));
                    var_14 = ((3 ? (arr_11 [i_0] [i_0] [i_2 + 2]) : ((7760745281249814904 ? (arr_5 [i_0] [i_0]) : var_5))));
                }
                for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_15 = 242;
                    var_16 = (max(var_16, (((var_2 >= (var_9 && var_7))))));
                    var_17 = (max(var_17, (!3)));
                }
                for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_18 = ((-((var_0 ? var_2 : (arr_11 [i_0] [i_1] [i_2])))));
                    arr_23 [i_0] [i_6 - 2] [7] [i_6] = ((var_3 / (arr_6 [i_2 + 2])));
                    var_19 ^= ((var_7 ? 5479 : (arr_13 [10] [i_0] [i_6 - 2] [i_6])));
                }

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_30 [i_7] = ((arr_2 [i_0]) ? var_9 : (arr_10 [i_0] [i_7] [i_8]));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] = ((((1495 ? (arr_18 [i_0]) : (arr_27 [i_7]))) < var_8));
                    }
                    var_20 = (var_7 / 21);
                }
                arr_32 [i_0] [i_1] [i_2] = ((-((76 ? 13 : (arr_24 [10] [i_1] [i_2])))));
            }
            for (int i_9 = 4; i_9 < 9;i_9 += 1)
            {
                arr_35 [8] [8] [i_9 + 2] = ((var_5 ? 36 : (arr_20 [i_9 - 1] [i_9 + 2] [7] [5])));
                arr_36 [i_9] [i_9] [i_9 + 2] = (((((192 ? 65523 : var_0))) ? (((arr_18 [8]) ? (arr_24 [0] [i_1] [0]) : 118)) : 6));
                var_21 = (arr_2 [i_0]);
            }
            arr_37 [i_0] [i_0] = ((var_5 ? 7726193080884791753 : -8164138116731184950));
        }
        var_22 = (min(var_22, ((((min((max((arr_22 [i_0] [7] [0] [i_0]), 20)), (((arr_8 [7] [i_0] [i_0] [i_0]) ? (arr_1 [8]) : var_3)))) <= ((~(2199023239168 ^ 65535))))))));
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_23 = (((max(((max((arr_40 [i_10]), (arr_40 [i_10])))), var_9)) <= (((((max(var_1, var_3))) ? (!65535) : 252)))));
        arr_41 [i_10] = var_7;
        arr_42 [11] [i_10] = ((-(arr_39 [4])));
    }
    for (int i_11 = 1; i_11 < 22;i_11 += 1)
    {
        arr_46 [i_11 - 1] = (((max(var_7, (arr_45 [i_11 + 1] [i_11 + 1]))) > (max(((9 ? (arr_38 [i_11 - 1]) : -7861824199982455480)), (max(281440616972288, var_4))))));
        var_24 = (var_6 - 37922);
        arr_47 [15] = ((((((max(var_4, 162))) ? (~-9011735821037370295) : 0))) ? (~var_8) : ((9 ? 76 : var_0)));
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_50 [i_12] = (((min(var_8, 24))));
        var_25 = (((((~((44 ? var_9 : var_7))))) ? (max((var_9 % 88), (var_1 && 34608))) : (arr_44 [i_12])));
    }
    var_26 = ((((!((max(250, var_5))))) ? (max(((var_2 ? 9223372036854775807 : 488757668625438598)), ((6072619252734563916 ? 4157580227276363260 : 149)))) : ((min(-6752403481286034838, var_1)))));
    #pragma endscop
}
