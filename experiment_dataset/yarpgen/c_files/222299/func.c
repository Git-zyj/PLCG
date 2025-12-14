/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222299
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
    var_15 = (signed char)-3;
    var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (var_11)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)48227))) < (1590618517))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */int) (signed char)-125);
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) var_8);
        var_19 += ((arr_5 [i_1]) << (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) != ((((_Bool)0) ? (1590618525) : (((/* implicit */int) arr_4 [i_1]))))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 *= ((/* implicit */unsigned long long int) min((1590618541), (((/* implicit */int) (unsigned char)25))));
            var_21 += ((/* implicit */_Bool) (unsigned short)1559);
        }
        for (int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 1; i_4 < 11; i_4 += 2) 
            {
                var_22 = arr_9 [i_1];
                var_23 = ((/* implicit */unsigned long long int) ((((arr_15 [i_1] [i_1]) + (2147483647))) << (((((((unsigned int) -1590618509)) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1590618517)))))) - (2704348795U)))));
            }
            var_24 = ((/* implicit */unsigned short) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))))));
        }
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1590618517)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? ((-(arr_15 [i_1] [(unsigned short)3]))) : (((/* implicit */int) arr_10 [i_1] [(signed char)4] [i_1]))))))))));
        var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)63977)) ? (((/* implicit */int) (_Bool)1)) : (-1590618540)));
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        var_27 = ((/* implicit */int) (+(((unsigned long long int) -1590618509))));
        arr_20 [i_5] [i_5] = ((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5]);
        arr_21 [i_5] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_13 [i_5]))))));
        arr_22 [i_5] = ((/* implicit */int) arr_6 [i_5]);
    }
}
