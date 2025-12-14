/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21587
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
    var_17 = ((unsigned short) ((int) var_9));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((_Bool) arr_1 [i_0])))));
        var_19 = ((/* implicit */_Bool) ((((arr_0 [i_0]) ^ (arr_0 [i_0]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) var_1))))))));
        var_20 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((unsigned char) var_14))) && (((/* implicit */_Bool) ((unsigned short) (signed char)(-127 - 1))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_10 [i_2] [i_1] [i_2 + 1] [i_3] [0LL] [i_3] = ((/* implicit */unsigned short) var_6);
                        arr_11 [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0))))), (max((arr_4 [i_1] [i_2]), (((/* implicit */long long int) (unsigned short)35248)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (_Bool)1)) : (-143938682))) <= (arr_15 [i_4] [i_4])));
        arr_17 [i_4] [i_4] = (!(((/* implicit */_Bool) var_14)));
    }
    for (unsigned int i_5 = 1; i_5 < 14; i_5 += 2) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned char) ((((((var_4) <= (((/* implicit */int) var_3)))) ? ((+(((/* implicit */int) (unsigned short)41489)))) : (((/* implicit */int) (signed char)23)))) << (((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5]))))) << ((((~(((/* implicit */int) arr_14 [i_5])))) + (14)))))));
        arr_22 [i_5] [i_5] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((2949268294U), (((/* implicit */unsigned int) arr_14 [24]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5]))) * (arr_0 [i_5]))) : (((((/* implicit */_Bool) arr_7 [i_5] [i_5 + 1] [(_Bool)1] [(_Bool)1] [i_5] [i_5])) ? (4294967294U) : (((/* implicit */unsigned int) var_4))))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4128354402U)));
        arr_26 [i_6] = ((((/* implicit */int) ((68719476735ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) != (((/* implicit */int) arr_24 [i_6] [13])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) ((arr_29 [i_6] [i_7]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_8])))));
                    arr_33 [i_8] [i_7] [i_7] [3LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_13 [(_Bool)0] [i_7])) ? (2147483644) : (((/* implicit */int) arr_9 [i_6] [6LL] [i_7] [i_7] [i_7])))) : ((+(((/* implicit */int) var_12))))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 1; i_9 < 12; i_9 += 2) 
                    {
                        arr_36 [i_6] [i_7] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) arr_13 [i_9 + 1] [i_9 - 1]);
                        arr_37 [i_7] [i_7] [i_8] [i_8] [i_9 + 2] = ((((/* implicit */_Bool) arr_9 [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9] [i_9 - 1])) ? (((/* implicit */int) arr_31 [i_9 + 1] [i_9 + 2] [8U] [11])) : (((/* implicit */int) arr_9 [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9] [i_9 + 1])));
                    }
                    for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        arr_41 [i_6] [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) ((_Bool) (signed char)-106));
                        arr_42 [i_10] [i_7] [i_7] [i_8] [i_7] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((-1LL) - (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_10])))));
                    }
                }
            } 
        } 
    }
}
