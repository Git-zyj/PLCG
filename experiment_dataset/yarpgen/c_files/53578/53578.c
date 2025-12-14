/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= -2067262473;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (max(-2067262488, 77));
                    var_16 |= (((min(2107641034, 225)) + ((4294967295 ? (arr_3 [i_1 - 2]) : var_2))));
                    var_17 = (((((~(var_9 * 89)))) ? ((((((max(2305772640469516288, 224))) || ((min(var_9, var_7))))))) : (min(var_13, (((arr_2 [i_0] [i_1] [i_0]) & var_4))))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] |= (((((~(arr_0 [i_2] [i_1 - 2])))) ? (((-(arr_5 [i_1 - 1] [i_1 - 1])))) : ((((var_13 >> (var_4 - 10729594273812600734))) / (arr_0 [i_2] [i_1])))));
                    arr_9 [i_1] |= ((((~2224949609903394115) >= (((max(15, var_2)))))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_18 = (max(var_18, (((min((~-2067262495), (240 || var_8))) >> ((((var_10 & (~var_10))) + 2326934995842567965))))));
                    arr_12 [i_3] = var_10;
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_19 |= 2067262494;

                            for (int i_6 = 3; i_6 < 12;i_6 += 1)
                            {
                                var_20 = (~61307);
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_6] |= max(-2067262483, 511);
                                var_21 |= ((-125 ? (min((2067262489 & 255), (min(1, 2067262482)))) : ((4 >> (243 - 216)))));
                            }
                            for (int i_7 = 0; i_7 < 14;i_7 += 1)
                            {
                                arr_28 [i_4] |= ((((~((37 ? 4228 : 7)))) - (3127 >= 1)));
                                arr_29 [i_0] [i_1] [i_1] [i_4] [i_5] [i_5] = (min(4398046510848, 9104354528584545126));
                                arr_30 [i_0] [i_4] [i_5] [i_7] = ((!(((37 >> (((504 / 1) - 485)))))));
                                arr_31 [i_0] [i_0] [i_0] [i_5] [i_1] [i_7] [i_1] |= var_1;
                            }
                            for (int i_8 = 0; i_8 < 14;i_8 += 1)
                            {
                                var_22 |= (-2067262473 >= 13078);
                                arr_36 [i_0] [i_8] [i_4] = (((((arr_5 [i_1 + 1] [i_5 - 1]) == (arr_4 [i_1 + 2]))) ? 1 : ((((arr_14 [i_1 - 1] [i_5 - 1]) >= (arr_0 [i_5 + 1] [i_1 + 2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 |= (-15535 / 4228);
    var_24 = ((-((0 ? 1 : 240))));
    #pragma endscop
}
