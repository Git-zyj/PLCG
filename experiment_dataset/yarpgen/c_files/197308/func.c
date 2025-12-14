/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197308
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
    var_20 = ((/* implicit */unsigned char) max((min((max((var_5), (((/* implicit */unsigned int) (unsigned short)55310)))), (((/* implicit */unsigned int) var_8)))), ((((-(var_13))) | (((/* implicit */unsigned int) ((2147483629) | (((/* implicit */int) (unsigned char)231)))))))));
    var_21 ^= ((/* implicit */int) var_12);
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_18))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) (-(1792011814)))) / (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned int) ((unsigned char) var_3)))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1792011815)) == (((unsigned int) 2817912945U))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_10 [i_2] = max(((~(max((var_12), (((/* implicit */unsigned int) 1792011825)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_9 [i_2] [i_2]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            arr_16 [i_2] [i_3] = ((/* implicit */unsigned int) arr_4 [i_3] [i_3] [i_3]);
            var_24 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1792011816))));
            /* LoopSeq 4 */
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
            {
                arr_19 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) arr_12 [i_2]);
                var_25 = ((((/* implicit */_Bool) -1792011814)) ? (((/* implicit */unsigned int) -1792011805)) : (2734526147U));
                var_26 -= (unsigned char)14;
            }
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 2) 
                    {
                        {
                            arr_28 [i_5] [i_5] [i_3] [i_2] [(unsigned short)5] [i_2] = ((/* implicit */unsigned short) ((unsigned int) arr_21 [i_7 - 1] [i_7] [i_2]));
                            var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_3] [i_3])) & (((/* implicit */int) arr_7 [i_5] [i_5]))));
                            arr_29 [i_2] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
                arr_30 [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(1783224136U))))));
            }
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_2] [i_3] [(unsigned char)2] [i_8]))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            arr_40 [14U] [i_2] [i_3] [i_8] [i_9] [i_9] [i_2] = ((/* implicit */unsigned int) var_17);
                            var_29 = ((arr_33 [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2]))));
                            var_30 = ((unsigned int) var_9);
                            var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_9])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_27 [12U] [i_9] [12U])) : (18856222))) : ((~(arr_17 [i_2] [i_2] [i_10])))));
                            arr_41 [i_10] [i_2] [i_8] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_2] [i_9])) / (((/* implicit */int) arr_9 [i_2] [i_8]))));
                        }
                    } 
                } 
                arr_42 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) ^ (4034009637U)));
            }
            for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
            {
                arr_47 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (-(1792011805)));
                var_32 = ((/* implicit */unsigned int) min((var_32), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) ^ (789182357U)))));
                var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)216)) ? (var_12) : (((unsigned int) (unsigned char)181))));
            }
        }
        for (unsigned int i_12 = 2; i_12 < 12; i_12 += 1) 
        {
            var_34 = ((/* implicit */unsigned char) 3275629780U);
            arr_51 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)44437)), (var_2)))), (max((arr_32 [i_2] [i_2] [i_2] [i_12 - 2]), (arr_38 [i_2] [i_2] [i_2] [i_2])))))) ? (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */unsigned int) 1378612774)) : (4034009636U))) : (min(((~(arr_8 [i_2]))), (((/* implicit */unsigned int) max((var_8), (arr_0 [i_2] [i_2]))))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
    {
        var_35 -= ((/* implicit */unsigned char) (-(((12U) - (((/* implicit */unsigned int) 1792011794))))));
        arr_54 [i_13] [i_13] = ((/* implicit */unsigned char) (-(3175906930U)));
    }
}
