/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37190
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
    var_11 = ((var_7) & (((/* implicit */unsigned int) var_5)));
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) 1878390810U))));
        var_13 = 262029964U;
        arr_2 [i_0] [i_0] = 1878390810U;
        var_14 = ((/* implicit */unsigned short) 1073741823U);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_15 = arr_4 [i_1];
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) >> (((1173122591U) - (1173122586U)))))) ? ((-(arr_4 [i_1]))) : (((int) arr_6 [i_2] [i_1])));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2416576491U)) ? (((/* implicit */unsigned int) 2033260679)) : (arr_6 [i_2] [i_1])));
        }
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            arr_12 [i_3] [i_3] = ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 752696598))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2260412765U))))));
            arr_13 [i_1] |= ((int) ((int) arr_9 [i_1] [i_1] [i_1]));
        }
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                arr_19 [i_4] [i_4] [i_4] [i_1] &= (~(((int) 268435455)));
                var_18 = ((/* implicit */unsigned int) max((var_18), (2498025144U)));
                var_19 = ((/* implicit */int) 2332788513U);
            }
            arr_20 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_7 [i_1])))) ? (((/* implicit */int) ((unsigned short) 2033260689))) : (((/* implicit */int) arr_18 [i_1] [i_4] [i_4]))));
            arr_21 [i_4] [(unsigned short)15] [i_1] = ((((/* implicit */_Bool) arr_6 [i_1] [8])) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (1588424674) : (249267232))) : (((((/* implicit */_Bool) arr_6 [i_4] [i_1])) ? (arr_16 [i_4] [i_1] [i_1]) : (32752))));
        }
        arr_22 [i_1] [i_1] = ((/* implicit */unsigned int) (~((~(arr_11 [i_1] [i_1])))));
        arr_23 [i_1] &= ((/* implicit */unsigned int) 809656026);
    }
    for (int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [1] [i_6])) ? (arr_8 [i_6] [i_6] [i_6]) : (-551687461)))) ? (((/* implicit */int) ((unsigned short) 2416576491U))) : (((/* implicit */int) arr_15 [i_6]))))) ? (((int) 1269513014U)) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_6]))))), ((unsigned short)4096))))));
        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) ((int) (~(((/* implicit */int) (unsigned short)56418)))))) ? (((/* implicit */int) ((unsigned short) 3045687255U))) : (479347115)))));
        var_22 = ((/* implicit */unsigned short) ((int) 2138704649));
    }
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) ((unsigned short) ((974523702) != (((((/* implicit */_Bool) arr_6 [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)56410)) : (arr_25 [i_7]))))));
        var_24 = ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_14 [11] [11]))))))) * (((/* implicit */int) ((((/* implicit */int) ((unsigned short) 2033260708))) >= (((/* implicit */int) arr_15 [i_7]))))));
        arr_28 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) -1868884805)) : (0U)));
        arr_29 [i_7] [i_7] = ((unsigned int) ((int) (~(739210154))));
        arr_30 [i_7] = ((/* implicit */int) arr_15 [i_7]);
    }
    var_25 = ((/* implicit */int) (~(1173122619U)));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                {
                    arr_37 [9] = (-(((/* implicit */int) (unsigned short)1023)));
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 24; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 23; i_12 += 2) 
                        {
                            {
                                arr_44 [i_12] [i_9] [i_9] [i_10] [4U] [i_11] [i_12 + 2] = ((arr_36 [i_10]) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1878390810U)))))) == (((((/* implicit */_Bool) 244949564)) ? (arr_41 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8] [i_8] [i_8])))))))));
                                arr_45 [i_11] [i_11] [i_10] [i_8] [i_11] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned int) -1868884805)) - (((/* implicit */unsigned int) ((((-1528280307) + (2147483647))) << (((((-632271511) + (632271522))) - (11))))))))) ? (((((/* implicit */_Bool) arr_38 [i_8] [i_9] [21] [i_11])) ? (((((/* implicit */_Bool) 268435475)) ? (((/* implicit */int) (unsigned short)64513)) : (134184960))) : ((-(((/* implicit */int) (unsigned short)61459)))))) : (-1)));
                                arr_46 [(unsigned short)24] [i_9] [(unsigned short)24] [i_9] [2U] [i_12 + 2] &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((4294967293U), (((/* implicit */unsigned int) (unsigned short)61459))))) ? (((/* implicit */int) arr_40 [i_10] [i_11 - 1] [6] [i_11] [i_11 - 1])) : (arr_35 [i_8] [i_8] [i_8]))), (((/* implicit */int) ((unsigned short) arr_43 [i_11 - 3] [i_12 - 1] [i_12] [i_12 - 1] [i_12] [15U])))));
                                var_26 = (unsigned short)61452;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
