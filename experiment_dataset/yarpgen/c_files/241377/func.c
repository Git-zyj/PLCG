/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241377
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
    var_10 = ((/* implicit */unsigned char) var_6);
    var_11 ^= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_0))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) (((~(arr_0 [i_0 + 2] [i_0]))) | (arr_0 [i_0 - 1] [i_0 - 1])));
        arr_2 [i_0] = (+(max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (var_4)))), (arr_1 [i_0 + 1]))));
        arr_3 [i_0] = ((/* implicit */signed char) (~((~((~(((/* implicit */int) var_9))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_13 = ((/* implicit */signed char) (~(min((max((((/* implicit */unsigned int) (signed char)45)), (3547932722U))), (((/* implicit */unsigned int) arr_4 [i_1]))))));
        var_14 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_4 [i_1])))) << (((((((((/* implicit */_Bool) arr_4 [i_1])) ? ((-(((/* implicit */int) arr_5 [i_1] [i_1])))) : ((-(((/* implicit */int) var_1)))))) + (19209))) - (9)))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_4 [i_1]))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            /* LoopSeq 4 */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
            {
                arr_16 [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_3] [i_2] [i_2]);
                var_16 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_10 [i_2]))))));
            }
            for (signed char i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
            {
                var_17 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_2] [i_3] [i_5]))));
                arr_19 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_5] [i_3]))));
            }
            for (short i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                arr_23 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_2]))) - (arr_14 [i_6])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_22 [i_2])) : (((/* implicit */int) arr_22 [i_2])))) : ((~(((/* implicit */int) arr_15 [i_2] [i_3] [i_6]))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                {
                    var_18 = ((/* implicit */signed char) ((arr_24 [i_7 - 1] [i_6] [i_2]) & (arr_24 [i_2] [i_6] [i_7 + 1])));
                    arr_28 [i_2] [i_3] [i_2] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [(short)2] [i_7 - 1]))));
                    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1173567807))));
                    arr_29 [i_6] = ((/* implicit */short) (~(((/* implicit */int) arr_12 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                }
                for (long long int i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_2] [i_2] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) -1882804205)) : (9492915083687014600ULL))))));
                    arr_32 [i_2] [i_2] [i_2] [i_6] [(signed char)11] [i_2] = var_6;
                }
                for (short i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    arr_35 [i_6] [i_3] = arr_5 [i_2] [i_3];
                    arr_36 [i_2] [i_2] |= ((/* implicit */unsigned short) ((arr_14 [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(unsigned char)14] [i_3] [i_3] [i_2])))));
                }
            }
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_0))));
                arr_39 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_2)) * (arr_21 [i_3] [i_2])));
                arr_40 [i_2] [i_2] [i_3] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_10] [i_2] [i_2])) ? (arr_13 [i_10] [i_3] [i_2]) : (arr_13 [i_10] [i_10] [i_10])));
            }
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 3; i_13 < 14; i_13 += 1) 
                    {
                        {
                            arr_49 [i_2] [i_3] [i_12] [i_3] [i_13] [i_3] = ((/* implicit */unsigned char) (~((-(var_2)))));
                            var_22 = arr_20 [i_13 + 4] [i_3];
                            var_23 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_10 [i_12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            var_24 = ((/* implicit */int) min((var_24), ((~(((/* implicit */int) var_6))))));
            arr_52 [i_2] [i_2] = ((/* implicit */unsigned int) arr_33 [i_14] [i_14] [i_14] [i_14]);
            arr_53 [i_2] = ((/* implicit */unsigned short) var_1);
        }
        arr_54 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_47 [i_2] [i_2] [i_2] [i_2] [i_2]))));
        var_25 ^= (~(((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_44 [i_2] [(signed char)9] [(signed char)9] [(signed char)9])))));
        arr_55 [i_2] [i_2] = ((/* implicit */unsigned short) var_8);
    }
    var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
}
