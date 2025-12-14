/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_14;
    var_19 = (((((var_3 ? ((11444 ? -114 : 79)) : (var_5 > var_17)))) + (((((-7045465430014399735 ? -110 : -15))) ? (((-2147483647 - 1) & 6730317713541372361)) : (min((-127 - 1), -5003166752208024051))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_20 = (max(var_20, ((((-(~65519)))))));
        arr_3 [i_0] [i_0] = ((-(((((var_16 ? (arr_2 [i_0] [3]) : (arr_2 [1] [i_0])))) ? -8672895642830212170 : (arr_1 [i_0])))));
        arr_4 [i_0] = 1;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_21 += ((((((1 ? var_17 : var_16))) ? ((-(arr_5 [i_1 + 2]))) : 5413)));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_1 + 1] = ((!(arr_7 [i_1] [i_1 + 2] [i_1 + 2])));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_22 = ((-5519953454689567924 ? var_0 : (((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? 1024 : ((1976396977854404714 ? var_9 : 20))))));
                            var_23 = 2971;
                            var_24 += (((arr_6 [i_1] [1]) ? ((17 ? (arr_6 [i_1 - 1] [1]) : ((var_7 ? 0 : 123)))) : var_13));
                        }
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            var_25 = 12448978808004471321;
            arr_27 [i_1] = 1546887323;
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            arr_31 [i_1] [i_7] [i_7] = (arr_8 [i_1]);
            var_26 = ((((1 ? 1 : var_0)) == ((117 ? (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) : -67))));
            var_27 = (((var_15 / var_7) ? 7944041753760354441 : 1));
            arr_32 [i_7] = var_13;
        }
    }
    var_28 += var_13;

    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            arr_37 [i_8] = 10250811602901475261;
            var_29 = (arr_23 [i_9] [i_9] [i_9]);
            arr_38 [i_9] &= 66;
            var_30 = (max(var_30, 2189049328396717446));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_31 = (((((arr_33 [i_8]) ? (((arr_13 [i_8] [i_8]) ? var_0 : var_7)) : (var_6 == 30720))) < 55));
            arr_43 [12] [i_10] [i_10] = var_16;
        }
        var_32 = (((arr_9 [i_8] [4]) ? var_14 : (((arr_35 [i_8] [i_8] [i_8]) ^ var_8))));
        var_33 = (((91 + var_12) * var_16));
        arr_44 [6] [6] = ((!(14 % -57)));
        var_34 = 5;
    }
    for (int i_11 = 1; i_11 < 22;i_11 += 1)
    {
        var_35 = (-(arr_45 [i_11]));
        var_36 = (max(var_36, (((((!(((3364999770317838365 ? -1778560983 : (arr_46 [i_11 - 1])))))) ? (!4) : -112)))));
        var_37 = -49;
        var_38 = 12;
    }
    #pragma endscop
}
