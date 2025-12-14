/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220993
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) arr_1 [i_0]);
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [(unsigned char)21] [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) arr_3 [i_3] [(short)10] [i_0]))), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_10 [i_3])))))))));
                                var_20 = ((/* implicit */unsigned int) (((!(var_8))) && (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_6)))))));
                                arr_15 [i_3] [i_3] [i_2] = (~(4294967295U));
                                arr_16 [i_0] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)34)))))));
                                var_21 = ((/* implicit */short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_4]))) == ((~(var_15))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-1)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_16))));
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (+((~(((int) (signed char)15)))))))));
        arr_19 [i_5] = ((/* implicit */int) (((((~(((/* implicit */int) (unsigned short)35944)))) & (arr_8 [i_5] [i_5] [i_5] [i_5]))) > (((/* implicit */int) arr_12 [5] [i_5]))));
        arr_20 [i_5] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((((((/* implicit */int) arr_13 [i_5] [(unsigned short)6] [i_5] [19] [(unsigned short)6] [i_5])) | (((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [19U])))) - (94)))));
        var_25 = ((/* implicit */unsigned int) arr_12 [i_5] [i_5]);
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) * (arr_0 [i_6 - 1])));
                    var_27 -= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) var_14)), (arr_0 [i_6 - 1]))) ^ (arr_0 [i_8])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            for (long long int i_10 = 1; i_10 < 12; i_10 += 1) 
            {
                {
                    var_28 = ((/* implicit */short) var_17);
                    var_29 = ((/* implicit */int) arr_2 [(unsigned short)6]);
                }
            } 
        } 
        arr_35 [i_6] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_6] [13U]))))) ? (((0U) << (((((/* implicit */int) (short)-7336)) + (7351))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    }
    for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 2) 
    {
        arr_39 [(unsigned short)8] [i_11] = ((/* implicit */signed char) (~(1750260825U)));
        var_31 = (!(((/* implicit */_Bool) max((var_3), (var_13)))));
    }
    var_32 = ((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
}
