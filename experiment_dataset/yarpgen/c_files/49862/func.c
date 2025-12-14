/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49862
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_19 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) 2854476035U)) ? ((-(1028196356U))) : (4294967273U))));
        arr_2 [i_0] = arr_1 [i_0];
        /* LoopSeq 4 */
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = arr_0 [i_0] [i_0];
            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
            var_21 = (-(min((arr_0 [i_1 - 2] [i_1 - 2]), (arr_0 [i_1 - 1] [i_1 + 2]))));
        }
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_22 = (~(min((var_17), (arr_8 [i_2]))));
            var_23 = arr_8 [i_0];
        }
        for (unsigned int i_3 = 4; i_3 < 14; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 2; i_4 < 13; i_4 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_5 = 2; i_5 < 14; i_5 += 3) 
                {
                    var_24 += min((((((/* implicit */_Bool) min((arr_0 [i_0] [i_4]), (632721337U)))) ? (min((var_3), (arr_13 [i_0] [i_3] [i_4]))) : ((+(var_13))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_0])) ? (var_18) : (var_3))) >= (arr_10 [i_3] [i_3] [i_4 + 1])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_19 [i_3] [i_3] [i_3] [i_3] [i_6] = ((arr_0 [i_0] [i_0]) | (((var_11) + (var_14))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_3 - 1] [i_5 + 1] [i_4 + 2] [i_3 - 1] [i_6] [i_5 + 1])) || (((/* implicit */_Bool) arr_17 [i_0] [i_3 - 2] [i_5 - 1] [i_4 + 2] [i_6] [i_5] [i_5 - 1]))));
                    }
                    var_26 = var_10;
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    arr_22 [i_0] [i_0] [i_4] = arr_15 [i_7];
                    arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_14 [i_7] [i_7] [i_4] [i_3 + 1] [i_0] [i_0];
                    arr_24 [i_0] [i_4] = ((((/* implicit */_Bool) arr_10 [i_4 + 2] [i_4] [i_4])) ? (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (arr_14 [i_7] [i_4] [i_4 + 2] [i_4] [i_3] [i_0]))) : (var_8));
                    arr_25 [i_0] [i_3] [i_4] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1879048192U))));
                }
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    var_27 = arr_29 [i_8] [i_0];
                    var_28 = max((arr_14 [i_8] [i_4] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_3]), (((((/* implicit */_Bool) arr_6 [i_3] [i_3 - 3] [i_3])) ? (arr_6 [i_4] [i_4] [i_3]) : (arr_6 [i_4] [i_4 - 2] [i_4]))));
                    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_3 - 3] [i_3 - 3] [i_4 - 1] [i_3 - 3])))))));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((((((/* implicit */_Bool) 3662245936U)) ? (var_2) : (arr_18 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) >> (((arr_13 [i_4 - 1] [i_3 - 2] [i_0]) - (2711975910U)))))));
                    var_32 = ((var_13) / (arr_28 [i_3] [i_3 - 1] [i_4 + 2]));
                    arr_33 [i_0] [i_3] [i_0] [i_4] [i_3 - 3] [i_4] = (+(arr_29 [i_3 - 2] [i_4 - 1]));
                }
                var_33 ^= min((((/* implicit */unsigned int) ((arr_13 [i_0] [i_3 + 1] [i_4]) < (arr_13 [i_0] [i_3] [i_4 - 1])))), ((-(arr_27 [i_0] [i_4] [i_4 + 1] [i_0] [i_4]))));
                var_34 ^= arr_17 [i_0] [i_3 - 3] [i_3 - 1] [i_3] [i_3] [i_3 - 2] [i_4 - 2];
            }
            var_35 = ((/* implicit */unsigned int) min((var_35), (var_3)));
            var_36 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_15 [i_3 + 1]) != (var_12))))));
        }
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            arr_38 [i_10] [i_0] = (~(2044U));
            arr_39 [i_0] [i_0] [i_0] = max((arr_30 [i_10] [i_10] [i_10] [i_0] [i_0] [i_0]), (((min((arr_0 [i_10] [i_10]), (var_14))) >> ((((~(var_11))) - (2452594860U))))));
            var_37 = ((/* implicit */unsigned int) min((var_37), (((((/* implicit */_Bool) ((max((4180865632U), (3278267434U))) * (((var_4) * (var_17)))))) ? (((unsigned int) arr_28 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_10 [i_0] [i_10] [i_0])) ? (((unsigned int) 1233833203U)) : (var_4)))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_11 = 1; i_11 < 19; i_11 += 4) 
    {
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                {
                    arr_47 [i_12] [i_12] [i_13] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2175227761U)) ? (var_5) : (var_4)))))) ? (min((((/* implicit */unsigned int) ((arr_42 [i_11 + 1] [i_12]) <= (arr_40 [i_12])))), ((~(arr_41 [i_11]))))) : ((+((~(arr_42 [i_12] [i_13]))))));
                    var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_11 - 1] [i_11])) ? (arr_41 [i_11 - 1]) : (arr_42 [i_11 - 1] [i_11])))) ? (var_13) : (max((((((/* implicit */_Bool) 875924748U)) ? (arr_41 [i_11]) : (arr_44 [i_11 + 1] [i_12] [i_13]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1479437977U))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 1; i_14 < 19; i_14 += 4) /* same iter space */
                    {
                        var_39 = ((((/* implicit */_Bool) arr_43 [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3729464953U)))))) : (((unsigned int) (!(((/* implicit */_Bool) var_12))))));
                        arr_52 [i_11 - 1] [i_12] [i_11] [i_14] [i_12] [i_12] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) 4294967292U))))) << (((var_10) - (2510796523U)))))));
                    }
                    for (unsigned int i_15 = 1; i_15 < 19; i_15 += 4) /* same iter space */
                    {
                        var_40 = ((unsigned int) ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_46 [i_11] [i_12] [i_13] [i_15]) : (arr_41 [i_11]))) : (max((arr_40 [i_12]), (var_2)))));
                        var_41 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((1129701714U) != (1350478852U))))));
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1357739352U)) && (((/* implicit */_Bool) 3140318376U)))))) <= (var_14)));
                        var_43 = (+((-(arr_40 [i_11 + 1]))));
                    }
                }
            } 
        } 
    } 
    var_44 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((~(4294967295U))) : (var_6)))) ? ((~(var_2))) : ((-(min((var_11), (var_5))))));
}
