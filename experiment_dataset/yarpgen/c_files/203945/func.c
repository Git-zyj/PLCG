/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203945
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
    var_20 = ((/* implicit */unsigned int) var_4);
    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_14)) : (var_19)))) : (((/* implicit */int) var_17))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_22 *= ((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((arr_0 [i_0] [i_0]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((var_7) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((var_15) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 8; i_1 += 2) 
    {
        var_24 = ((/* implicit */_Bool) ((arr_0 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2667633483U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (8129435335593064545LL)))) : (arr_4 [i_1 - 2])));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned char) arr_2 [i_1 - 1])))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */short) arr_4 [i_1 + 1]);
            arr_9 [i_1 + 2] [i_2] [i_2] = arr_5 [i_2];
        }
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2307951130U)) ? (2667633468U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                        var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)3]))) : (var_19)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [1LL]))));
                    }
                } 
            } 
        } 
    }
}
