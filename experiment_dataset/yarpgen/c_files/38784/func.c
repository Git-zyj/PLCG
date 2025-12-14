/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38784
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_3);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_14 += ((/* implicit */unsigned short) 3240573371U);
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16799))) <= (100663296ULL))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_7))));
    }
    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned short) min((var_4), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_4 + 1])))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    arr_21 [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) && (((/* implicit */_Bool) max((1700469228U), (((/* implicit */unsigned int) (signed char)-31)))))))));
                    var_17 = (short)7;
                    var_18 *= ((/* implicit */unsigned char) arr_19 [i_4 - 1]);
                    var_19 = max((((((((/* implicit */_Bool) var_12)) ? (var_7) : (13633244802765058498ULL))) * (4813499270944493117ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4])))))))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48748)) || (((/* implicit */_Bool) 4813499270944493110ULL))))), ((~(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_19 [i_4 - 1])))) ? ((-(arr_14 [i_4 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        arr_22 [i_4] = ((/* implicit */unsigned short) arr_20 [i_4] [i_4] [i_4] [i_4]);
    }
    var_22 ^= ((/* implicit */unsigned int) (-(var_8)));
}
