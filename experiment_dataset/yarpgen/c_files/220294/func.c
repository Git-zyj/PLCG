/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220294
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
    var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-2993))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_6))));
        var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)236)) : (710370879)))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)30846), (arr_5 [i_1])))) ? (((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1])))) : ((~(((/* implicit */int) arr_5 [i_1]))))));
        var_16 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned short)50214)))), ((((!(((/* implicit */_Bool) -710370880)))) ? (((/* implicit */int) (!(arr_2 [i_1])))) : (((/* implicit */int) ((710370874) < (((/* implicit */int) var_5)))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_6))));
    }
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (unsigned short i_4 = 4; i_4 < 13; i_4 += 2) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)91)) * (((/* implicit */int) (unsigned short)38698))));
                    var_18 = ((_Bool) ((((/* implicit */int) arr_0 [i_4 - 1] [i_4 - 4])) * ((+(((/* implicit */int) arr_3 [i_2] [i_2]))))));
                    arr_16 [i_2] [i_2] [i_4] [i_3] = ((/* implicit */unsigned char) 710370877);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((710370876) / (710370876))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17993)) ? (((/* implicit */int) arr_12 [i_2] [i_4 - 2])) : (((/* implicit */int) var_1))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) ((unsigned int) -710370877)))))));
                            arr_21 [i_2] [(short)12] [i_4] [i_2] [i_4] [(_Bool)1] [i_2] = arr_14 [i_4 - 1] [i_5 - 1] [i_2];
                        }
                    }
                    for (int i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        arr_24 [i_2] [i_3] [i_3] [(unsigned short)11] [i_2] = ((/* implicit */short) arr_8 [i_2]);
                        var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65521)), (21ULL)))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)21453))))), (min((3415228839502154250ULL), (arr_19 [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned int) 710370849)))))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_10 [(_Bool)1] [(short)2] [i_3]))));
                    }
                    for (unsigned short i_8 = 3; i_8 < 14; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_2] [i_4 - 2])))))));
                        arr_27 [(signed char)6] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) (+((~(-1237140418)))));
                    }
                }
            } 
        } 
    } 
}
