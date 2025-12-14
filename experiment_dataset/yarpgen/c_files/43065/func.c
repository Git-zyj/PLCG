/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43065
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
    var_17 = ((/* implicit */short) min((var_2), (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned short) var_2));
        var_18 = ((/* implicit */signed char) arr_2 [i_0]);
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((unsigned long long int) min((arr_0 [2U]), (arr_0 [i_0])))), (((/* implicit */unsigned long long int) arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */int) arr_4 [i_1]);
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_11 [i_1] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
            arr_12 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1]))));
            arr_13 [i_1] = ((/* implicit */short) var_2);
            var_20 = ((/* implicit */short) ((unsigned int) arr_10 [i_1]));
            arr_14 [(_Bool)1] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2]))));
        }
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_21 -= ((/* implicit */signed char) arr_16 [12U] [i_1] [i_1]);
            arr_17 [i_1] [i_3] [i_1] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_26 [(_Bool)1] [i_4] [i_4] [i_4] [i_4] [(unsigned short)5] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (short)32767))) ? (((long long int) arr_20 [i_4] [i_5] [i_6])) : (((/* implicit */long long int) var_14))));
                            arr_27 [i_4] [i_5] [i_6] = ((/* implicit */short) var_0);
                        }
                    } 
                } 
            } 
        }
        for (int i_7 = 2; i_7 < 15; i_7 += 4) 
        {
            arr_30 [i_1] [i_7] [i_1] = arr_18 [i_7 + 1];
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_7))));
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_9 = 1; i_9 < 17; i_9 += 2) 
        {
            arr_37 [i_8] = (-(((((/* implicit */_Bool) arr_0 [i_9 - 1])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_32 [i_8])), (arr_31 [i_8] [i_8])))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [(short)14])))))));
            var_23 = ((/* implicit */int) var_3);
        }
        var_24 = ((/* implicit */unsigned short) min((arr_33 [i_8]), (((/* implicit */signed char) ((((/* implicit */int) arr_34 [i_8])) >= (((/* implicit */int) var_1)))))));
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        var_25 = ((/* implicit */_Bool) arr_38 [i_10]);
        arr_40 [i_10] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_39 [17ULL]))));
    }
}
