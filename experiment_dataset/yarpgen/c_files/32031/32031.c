/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] |= (((((((var_11 ? 60 : var_4)) > (!250)))) * (((((32767 ? var_6 : var_5)) < -3085046380061149972)))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_12 = (max(var_12, ((var_9 ? var_4 : (arr_0 [i_0])))));
                        arr_11 [i_0] [6] [i_0] [i_0] [i_0] = (((var_8 == 0) ? var_1 : var_0));
                        arr_12 [i_0] [i_0] [0] [i_0] [0] = (-123 ? 8435063914851992755 : -9060818281030711053);
                    }
                    arr_13 [i_0] = (max(((min(40, (-8435063914851992755 < -7446)))), (max((arr_3 [i_0] [i_0]), var_9))));
                    var_13 = (max(var_13, ((((~9766304512818520889) ? ((~(4095 != -1324833590))) : ((min(239, 22))))))));
                    var_14 = var_10;
                }
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_15 = -45;
                        var_16 = ((((min(1, 7898))) / ((max(var_7, 124)))));
                        var_17 = ((~(min(12288, var_5))));
                        arr_21 [i_5] [i_4] [8] [5] [i_0] = (min((arr_2 [i_0] [i_0]), (max((max(var_7, -848908180404427625)), -6541787220513737957))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {

                        for (int i_7 = 3; i_7 < 6;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = var_10;
                            arr_28 [i_0] [i_6] [i_4 + 2] [i_6] [i_7] [i_7] = ((0 ? 11684 : 1));
                            arr_29 [i_0] [i_0] [i_6] = (arr_2 [i_4 + 1] [i_4 + 2]);
                        }
                        var_18 = (min((max((max(var_0, -3085046380061149963)), 3579641388)), (max(5442852293696414799, 9060818281030711068))));
                        var_19 &= var_9;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = 194;
                                var_20 = (min(var_20, 64907));
                                arr_36 [i_0] [i_1] [i_1] [i_8] [i_9] = (3085046380061149955 ? ((((!(59035 || var_7))))) : var_8);
                            }
                        }
                    }
                }
                var_21 = (max(var_21, var_2));
            }
        }
    }
    var_22 = var_4;
    var_23 = var_4;
    var_24 = var_7;
    #pragma endscop
}
