/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46302
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
    var_20 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) 738634692U);
                    arr_10 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) var_8);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */short) (((!(((((/* implicit */_Bool) arr_12 [i_2] [i_2] [(short)5] [i_2] [i_4])) && (((/* implicit */_Bool) var_17)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((-289977111), (((/* implicit */int) (unsigned short)14)))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_16 [i_1] [i_0] [i_2] [i_3] [i_0])))) && (((/* implicit */_Bool) max((arr_3 [i_4] [i_2] [i_4]), (((/* implicit */long long int) var_14))))))))));
                                arr_17 [i_0] [i_1] [i_2] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned int) (-(max((arr_9 [i_0] [i_2] [i_2]), (arr_9 [i_1] [i_3] [i_4])))));
                                var_23 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_3] [i_4])) + (2147483647))) << ((((((~(arr_8 [i_4]))) + (249457691))) - (5)))));
                                arr_18 [i_0] [i_1] [12U] [3U] [i_4] = ((min((arr_16 [(unsigned char)8] [(short)0] [i_1] [i_1] [i_1]), (arr_16 [i_0] [i_1] [i_2] [i_3] [i_4]))) & ((~(((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (unsigned short i_7 = 2; i_7 < 15; i_7 += 4) 
                {
                    {
                        arr_27 [8U] [i_6] [i_5] [i_5] = ((/* implicit */unsigned short) (~(3525210003U)));
                        var_24 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_25 [(_Bool)1] [i_5 - 1] [i_6] [i_6] [i_7]))))));
                        var_25 = (!(((/* implicit */_Bool) 289977108)));
                        arr_28 [i_0] = ((/* implicit */unsigned int) var_8);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (min((arr_19 [i_8]), (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) (short)32767)))))));
            arr_32 [(unsigned short)0] = ((((arr_6 [i_0] [(unsigned short)8] [i_8]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) -1069658460)) : ((-(arr_6 [12ULL] [i_8] [i_0]))));
        }
    }
    /* LoopNest 3 */
    for (short i_9 = 3; i_9 < 19; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                {
                    arr_41 [i_11] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_9] [(unsigned short)19] [i_9]))) : (((unsigned int) (_Bool)1))))) ? (((/* implicit */long long int) 769757270U)) : ((((!(var_5))) ? (((long long int) arr_33 [i_10] [(unsigned char)18])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_11] [i_10] [i_10] [i_9])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_10)))))))));
                    arr_42 [i_9] [(short)8] [i_11] = ((/* implicit */short) (+(((/* implicit */int) arr_40 [i_9] [14ULL] [14ULL] [18U]))));
                }
            } 
        } 
    } 
    var_27 *= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) 3108859803822484763LL)))))))) ^ (var_15));
}
