/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, var_9));
        arr_3 [i_0] = var_10;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 += -0;
                    arr_9 [i_0] [i_0] [i_0] [i_2 + 2] = (min(((-((var_6 ? var_2 : var_7)))), 0));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            var_15 = (((var_2 ? (((arr_8 [8] [i_3] [i_4 + 3]) ? 24728 : (arr_10 [i_4]))) : ((-(arr_12 [i_3]))))));
            var_16 *= ((236 ? var_9 : ((min((((!(arr_10 [i_3])))), 242)))));
            arr_14 [8] = 0;
            var_17 += (~var_11);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_22 [i_3] [i_4] [i_5] [i_4] [21] = ((211 ? ((~(!18))) : 249));
                            var_18 = ((0 ? (min((arr_20 [i_3] [i_7] [i_5] [i_3] [i_7]), (max(var_7, (arr_19 [i_7] [i_6] [10] [10]))))) : var_10));
                            var_19 *= ((-(min(var_10, var_1))));
                            var_20 = (!49);
                            var_21 = ((-(min((((var_9 ? 24728 : 211))), 16416415338838067140))));
                        }
                    }
                }
            }
        }
        var_22 = min(22, var_9);
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
    {
        var_23 = ((((min((arr_15 [i_8] [i_8] [i_8]), var_4))) ? 155 : ((107 ? -var_0 : (((((arr_15 [i_8] [0] [i_8]) && 4079247432905224733))))))));
        arr_25 [10] [i_8] &= (min(((-var_10 ? (min(var_6, var_8)) : (min(var_4, 14261760791734482215)))), 0));
        var_24 = (-32767 - 1);
        var_25 = (min(var_25, (((((arr_20 [i_8] [i_8] [i_8] [i_8] [i_8]) || 7729160025024920533))))));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        arr_28 [i_9] [i_9] = (min(((((max(2030328734871484476, 24728)) != 19))), -24701));
        arr_29 [i_9] [15] = ((((((((var_12 ? var_7 : (arr_15 [i_9] [i_9] [i_9])))) ? (!60) : (arr_0 [2])))) ? (~-20991) : (max((~4079247432905224733), (min(var_3, 20990))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                var_26 *= (arr_33 [i_9] [i_12 - 3] [20]);
                                var_27 = 0;
                            }
                        }
                    }
                    var_28 = ((20 ? var_9 : (((~0) ? (arr_34 [i_9] [i_11] [10] [i_10]) : ((~(arr_37 [i_9] [i_9] [i_9] [i_9])))))));
                }
            }
        }
    }
    var_29 = (min(var_29, ((-(((!var_0) * ((5 ? var_3 : var_2))))))));
    #pragma endscop
}
