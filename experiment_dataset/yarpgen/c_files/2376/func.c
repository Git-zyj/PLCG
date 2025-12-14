/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2376
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
    var_17 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */int) ((unsigned int) arr_0 [i_0] [i_1]));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (short)2731)) : (arr_1 [i_1])))))) ? (max((((((/* implicit */int) arr_2 [i_1])) + (((/* implicit */int) (_Bool)0)))), (arr_1 [i_0]))) : ((+(((/* implicit */int) var_2))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 7; i_4 += 4) 
            {
                {
                    arr_15 [i_2] [i_3] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-92))))), (min((max((((/* implicit */unsigned long long int) arr_12 [i_4] [i_3] [i_3] [i_2])), (arr_10 [i_2] [i_2]))), (((/* implicit */unsigned long long int) arr_0 [i_4 + 1] [i_3 - 1]))))));
                    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (_Bool)0)))));
                    arr_16 [i_4] [i_3] [i_3] [i_2] = ((/* implicit */int) arr_2 [i_2]);
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((15899097729705460890ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (short)32767)) - (32754)))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_14);
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_6])) ? ((-(-6328178771305016429LL))) : (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_6])) || (((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_6]))))))))));
                arr_21 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) var_8);
                /* LoopSeq 2 */
                for (unsigned char i_7 = 1; i_7 < 16; i_7 += 2) 
                {
                    var_23 |= ((/* implicit */int) min((0U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)22348)))) != (4294967295U))))));
                    var_24 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) ((arr_18 [i_5] [i_6]) * (((/* implicit */unsigned long long int) var_15))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) (~(15167719678468539868ULL)));
                        arr_26 [i_5] [i_5] [i_5] [i_5] [i_7 + 1] [i_8] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-32767)), ((-(((unsigned long long int) (_Bool)0))))));
                        arr_27 [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) arr_17 [i_5]);
                        arr_28 [i_6] [i_6] [i_6] [i_8] = ((/* implicit */unsigned char) ((unsigned int) -5085099883521410717LL));
                    }
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
                    {
                        var_26 *= ((/* implicit */signed char) ((8367026394033718833ULL) / (((/* implicit */unsigned long long int) 4128768))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_10 = 2; i_10 < 16; i_10 += 2) 
                        {
                            arr_33 [i_6] [i_6] [i_7] [i_7 + 1] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_5] [i_9] [i_6]))));
                            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)64885))));
                        }
                        arr_34 [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) arr_29 [i_5] [i_5]));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_11 = 1; i_11 < 16; i_11 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)15074)) ? (1849190772U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54659)))));
                        var_29 *= ((/* implicit */short) ((int) arr_30 [i_5]));
                        var_30 -= ((/* implicit */unsigned char) ((((unsigned int) arr_25 [i_5])) | (((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [i_5] [i_7] [i_7 + 2] [i_11 - 1])))))));
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_7)) ? (arr_19 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) arr_30 [i_6])))));
                        var_32 += ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_7 + 2] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7 - 1]))) : (var_15)));
                    }
                }
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    arr_42 [i_6] = ((/* implicit */short) arr_25 [i_6]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 2; i_14 < 17; i_14 += 2) 
                    {
                        arr_45 [i_6] [i_13] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_37 [i_14 + 1] [i_14] [i_14 - 1] [i_14])) ? (arr_39 [i_14 + 1] [i_14]) : (arr_37 [i_14 - 2] [i_14] [i_14 + 1] [i_14 + 1]))) - (((arr_37 [i_14 - 2] [i_14] [i_14 - 2] [i_14 - 2]) * (arr_37 [i_14 + 1] [i_14] [i_14 - 1] [i_14 + 1])))));
                        arr_46 [i_5] [i_5] [i_13] [i_14] [i_6] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)7)), (0U)));
                        var_33 |= ((/* implicit */short) (+(min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)7))))));
                    }
                    for (short i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        arr_50 [i_6] = ((/* implicit */unsigned short) ((unsigned char) arr_38 [i_5] [i_6] [i_6] [i_13] [i_6]));
                        arr_51 [i_6] [i_6] [i_6] [i_15] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) var_8))), (arr_35 [i_5] [i_6] [i_5] [i_13] [i_5] [i_13]))))));
                    }
                    var_34 &= ((/* implicit */unsigned long long int) ((2125734335) << (((((/* implicit */int) (short)7916)) - (7916)))));
                    arr_52 [i_5] [i_5] [i_13] [i_6] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) var_2))))))) ? (min((847495108U), (((/* implicit */unsigned int) (signed char)109)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_7)))))))));
                }
                var_35 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_44 [i_5] [i_5] [i_6] [i_5])) - (var_15)))))))));
            }
        } 
    } 
}
