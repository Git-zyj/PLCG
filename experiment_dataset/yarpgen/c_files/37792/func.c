/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37792
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_0 + 2])) : (var_10)))) ? (arr_1 [i_1 - 1] [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0 + 3]))))))));
                            var_16 *= ((/* implicit */unsigned char) ((signed char) ((unsigned short) 2147483647)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((int) 4294967295U))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) arr_2 [i_4 - 2]))))) ? (((/* implicit */unsigned long long int) var_9)) : (((1319151789788447973ULL) ^ (((/* implicit */unsigned long long int) 2147483647)))))));
                            var_18 *= ((/* implicit */short) arr_10 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 17127592283921103650ULL))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        var_20 = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) 17127592283921103642ULL))));
        var_21 = ((((/* implicit */_Bool) arr_18 [i_6])) ? (var_10) : (((/* implicit */unsigned long long int) var_9)));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        var_22 = ((/* implicit */short) var_11);
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7])) ? (arr_19 [i_7]) : (arr_19 [i_7])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_0))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1319151789788447964ULL)) ? (((/* implicit */int) arr_26 [i_8] [i_9] [i_10])) : (((/* implicit */int) arr_25 [i_8] [i_9] [i_9]))));
                        var_26 = ((/* implicit */long long int) min((var_26), (var_2)));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((((/* implicit */_Bool) (short)18958)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)101)))))))));
                        arr_31 [i_9] [i_10] = ((/* implicit */_Bool) arr_4 [i_8] [i_8] [i_11]);
                    }
                } 
            } 
        } 
        arr_32 [3] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_8] [i_8]))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        arr_37 [i_12] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_12] [i_12] [i_12]))));
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((1744237221U) << (((((/* implicit */int) (unsigned char)250)) - (236))))))));
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                {
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_13] [i_14 + 1] [i_14 + 1] [i_14 + 1])) ? (arr_11 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1]) : (arr_11 [i_14] [i_14 + 1] [i_14 + 1] [7])));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_47 [i_12] [i_14] [i_14] = ((arr_6 [i_14 + 1] [i_14 + 1] [i_14 + 1]) && (arr_6 [i_14 + 1] [i_14 + 1] [i_14 + 1]));
                                var_31 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)52802)) ? (-2929492150680652170LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18949)))))));
                            }
                        } 
                    } 
                    var_32 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-83))))) : ((-(var_11)))));
                }
            } 
        } 
    }
}
