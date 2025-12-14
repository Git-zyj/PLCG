/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191875
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned char) arr_1 [i_0 - 2] [i_0 - 2]);
        var_12 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((_Bool) var_5)))))));
        arr_3 [i_0 - 2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 - 2]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [(_Bool)1] [i_1] |= ((/* implicit */short) max((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) ((/* implicit */int) var_9))) % (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_2])) ? (arr_8 [i_1 + 1] [i_1 + 1]) : (arr_8 [i_0] [i_2])))))));
                    arr_10 [i_0] [i_2] [i_1 + 1] [i_2 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)384)) && (((/* implicit */_Bool) (short)389))));
                    arr_11 [i_0] [i_2] = ((/* implicit */long long int) (+((~(min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_3))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_13 = ((/* implicit */short) ((min((((((/* implicit */int) arr_0 [i_3 + 1])) << (((((/* implicit */int) var_8)) - (204))))), ((-(((/* implicit */int) var_4)))))) < (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_3)) - (35086)))))));
            arr_17 [i_3 - 2] [i_4] |= ((/* implicit */short) (((~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-406))) : (31744LL))))) | (((/* implicit */long long int) arr_7 [i_3] [i_3 + 1] [i_4] [i_3]))));
            var_14 = (-(arr_8 [i_4] [i_4]));
        }
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_15 = ((/* implicit */long long int) (((-(((/* implicit */int) var_9)))) / ((~(((((/* implicit */int) var_0)) >> (((arr_16 [i_3 - 1]) - (6351123584071301750LL)))))))));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 23; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_16 += ((/* implicit */_Bool) var_8);
                        var_17 = ((/* implicit */unsigned char) var_3);
                        var_18 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_3] [i_5])) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_3)))) : (((/* implicit */int) arr_23 [i_3 + 1] [i_3 + 1] [i_5] [i_3 + 1] [i_3 + 1])))), (((/* implicit */int) arr_24 [i_3 - 1] [i_5] [i_6] [i_5] [i_6]))));
                        arr_26 [i_3 - 1] [i_5] [i_3 - 1] [i_7] = arr_20 [i_7] [i_6 - 1] [i_5] [i_3 - 1];
                    }
                } 
            } 
            var_19 = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) ((/* implicit */int) (short)405))) | (-4171830228212545722LL)))))) && (((/* implicit */_Bool) ((int) var_0))));
            arr_27 [i_5] = ((/* implicit */_Bool) arr_23 [i_3 + 1] [i_5] [i_5] [i_3 + 1] [i_5]);
        }
        for (int i_8 = 2; i_8 < 21; i_8 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) ((((((var_11) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) var_0)))) + (26346))))) | (((/* implicit */long long int) max((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_8))))), (arr_28 [i_3] [i_8 + 1] [i_8 + 1]))))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)1)), (4171830228212545722LL))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 1; i_10 < 21; i_10 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)9025)), (12LL)))) || (((/* implicit */_Bool) (short)-384))))));
                        arr_38 [i_3] [i_8] [i_9] [i_10] [i_10 + 3] = ((/* implicit */_Bool) (~(((((var_6) | (((/* implicit */unsigned long long int) var_10)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_0))))))))));
                        arr_39 [i_10 + 1] [i_9] [i_9] [i_9] [i_8 - 2] [i_3 + 1] = (~(arr_30 [i_3]));
                        arr_40 [i_3 - 2] [i_8] [i_8] [i_8] [i_9] [i_8] = ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) -1))))) >= (((/* implicit */int) ((signed char) (unsigned short)60254)))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 24; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (short i_13 = 2; i_13 < 23; i_13 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (arr_42 [i_3])));
                        arr_49 [i_11] [i_11] = ((/* implicit */short) max(((+(((/* implicit */int) (unsigned short)60254)))), (max((((/* implicit */int) (short)-389)), (-1)))));
                        var_24 += ((/* implicit */unsigned short) var_8);
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_8))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    arr_54 [i_15] [i_3] = ((((/* implicit */long long int) (-(((/* implicit */int) (short)32767))))) / (arr_16 [i_15]));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 1) 
                        {
                            {
                                arr_60 [i_17] [i_14] [i_14] [i_14] = ((/* implicit */short) (-(((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_3] [i_14] [i_3] [i_16] [i_14])))))))));
                                arr_61 [i_17] [i_14] [i_17] = ((/* implicit */short) (+((-((+(arr_22 [i_16] [i_15])))))));
                                arr_62 [i_3] [i_14] [i_17] [i_16] [i_17 + 1] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_58 [i_17] [i_16] [i_15] [i_14] [i_3 - 2])), (((((/* implicit */_Bool) arr_56 [i_17] [i_16] [i_14] [i_3 - 2])) ? (var_6) : (((/* implicit */unsigned long long int) arr_14 [i_15] [i_17])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_23 [i_3] [i_14] [i_3] [i_16] [i_14])) ? (((/* implicit */int) arr_53 [i_3] [i_14])) : (var_10))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_0))))))))));
                                var_26 = ((/* implicit */unsigned long long int) var_3);
                                var_27 = ((/* implicit */unsigned short) (!((_Bool)1)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) ((_Bool) var_1));
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -430400682)) ? (2080374784U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))))) || (((/* implicit */_Bool) 2834597813U))))))))));
    }
    var_30 = ((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_31 = ((((/* implicit */int) var_8)) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */long long int) var_10))))) ? (((((/* implicit */_Bool) 16924501551091100410ULL)) ? (((/* implicit */int) (short)32759)) : (var_10))) : ((-(((/* implicit */int) (_Bool)1)))))));
}
