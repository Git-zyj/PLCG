/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46971
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
    var_15 = (-(((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_3)))) * (((((/* implicit */int) var_0)) / (((/* implicit */int) var_10)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50574))))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_0 [(signed char)9] [i_0])) ? (((((/* implicit */_Bool) 1799445148)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_6))))))));
        var_16 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) max((var_13), (arr_1 [15U])))))), ((!(((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_2] = (((!(((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) var_4))))))) ? ((-(((/* implicit */int) arr_0 [i_1] [i_1])))) : (((((/* implicit */_Bool) (short)-17025)) ? (((((/* implicit */_Bool) 1421105611U)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) ((short) arr_4 [i_0] [i_1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_17 &= ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0] [i_1]))));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23096)) && (((/* implicit */_Bool) 1755753613U)))))));
                        var_19 = arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 2];
                        var_20 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        arr_12 [i_4] [8U] &= ((/* implicit */unsigned short) arr_9 [i_4] [(unsigned char)16] [i_4] [i_4] [i_4]);
        arr_13 [i_4] [i_4] = ((((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)17050)))))) / (((/* implicit */int) (unsigned short)8)));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                {
                    arr_20 [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (max((((((/* implicit */_Bool) (unsigned short)60811)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4739))) : (576460752303423456ULL))), (((/* implicit */unsigned long long int) max((arr_6 [i_4] [i_4] [i_4]), (((/* implicit */unsigned short) arr_1 [i_4])))))))));
                    var_21 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)4754))));
                    var_22 ^= ((/* implicit */int) ((unsigned long long int) (-(arr_9 [i_4] [i_4] [i_4] [i_4] [13ULL]))));
                    var_23 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned char) 597729803493508904ULL);
}
