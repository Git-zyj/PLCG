/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (((arr_0 [i_0]) | (((max(9594, (arr_0 [i_0]))) | 55942))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = -1658886628;
            var_12 = 27790;
            var_13 = ((((max((arr_2 [i_1 + 2] [i_1] [i_1 - 2]), (arr_2 [i_1 - 2] [i_1] [i_1])))) >> ((((((27790 ? (arr_3 [i_0] [i_0] [i_0]) : 49840)) | 49840)) - 63457))));
            var_14 = -4426115596986764915;
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_15 = (min(3996216729, -7460551921029918631));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_16 = (((arr_9 [i_2]) % (arr_15 [i_0] [i_2] [5] [i_2])));
                        var_17 = (min(var_17, 3015));
                    }
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_18 = max(1, -7615);
                    var_19 = (65535 ? (-1976405844 + 495982944) : ((-524170994 ? 513664317 : 23)));
                    var_20 = (max(var_20, ((max(((((var_4 ? (arr_14 [10] [10] [10] [10] [i_6]) : 2147483646)) * (147 / 539))), (-524170978 != 0))))));
                }
                var_21 = ((-(((-495982951 < (arr_9 [i_2]))))));
                arr_21 [i_2] [i_0] [i_2] = ((((min(((((arr_11 [i_2] [i_2] [i_2] [i_2]) ? -25072 : var_3))), (((arr_15 [i_0] [i_2] [i_2] [11]) ? (arr_8 [i_2] [i_2] [i_2]) : (arr_0 [i_2])))))) ? (((max(27790, (((!(arr_1 [4])))))))) : (arr_9 [i_2])));
            }
            var_22 = (arr_16 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0]);
            var_23 = (((min(82, (((arr_18 [i_2]) ? 4294967295 : (arr_16 [i_2] [3] [3] [i_0] [3] [3]))))) & (((35 ? 1 : 123)))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_24 = (arr_22 [i_0] [i_0] [9]);
            var_25 = ((((arr_2 [i_0] [i_7] [i_0]) ? (((-32763 - (arr_11 [i_0] [i_7] [i_0] [i_0])))) : (min(4294967274, 2147483647)))));
            var_26 = (((54366 / -2635927949883436613) ? ((((3877636650 > (arr_11 [i_0] [i_7] [i_7] [i_7]))))) : (min((arr_5 [i_7] [i_0] [i_0]), 16383))));
        }
        var_27 = (((min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (max(2635927949883436633, ((min((arr_16 [i_0] [i_0] [i_0] [7] [i_0] [i_0]), 56783))))) : var_6));
    }
    var_28 = ((~(((var_5 == ((25071 ? 0 : 56783)))))));
    var_29 = ((1 < 495743288) ? var_4 : (max((min(16127, var_8)), (min(var_8, 1132)))));
    #pragma endscop
}
