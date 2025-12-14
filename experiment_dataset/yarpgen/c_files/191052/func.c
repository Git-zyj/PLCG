/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191052
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)(-32767 - 1)))));
                var_13 = ((/* implicit */_Bool) max((-2223267596411757366LL), (((/* implicit */long long int) (_Bool)1))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max(((unsigned short)23396), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
    {
        var_15 = ((((/* implicit */_Bool) ((unsigned int) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_1 [i_2 - 1] [i_2 - 2]))) | (((/* implicit */int) ((_Bool) arr_0 [i_2 + 1])))))) : ((+(max((((/* implicit */unsigned long long int) var_1)), (arr_2 [i_2 + 1] [i_2 + 1] [i_2 - 1]))))));
        /* LoopNest 3 */
        for (long long int i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    {
                        arr_17 [i_2] [i_4] [i_5] = ((/* implicit */short) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32764)))));
                        arr_18 [i_2 - 2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (short)9865)))))) * (((((/* implicit */_Bool) arr_2 [i_3 + 2] [i_4] [i_3 + 2])) ? (arr_2 [i_2 - 2] [i_2 + 2] [i_2 - 1]) : (((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_2 - 1]))))));
                        var_16 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) == (var_3))))))));
                        arr_19 [i_2 + 2] [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3 + 1] [i_5] [i_5])) + (((/* implicit */int) arr_11 [i_3 + 2] [i_3 + 2] [i_3 + 2]))))) ? ((+(arr_2 [i_2 + 1] [i_4] [i_5]))) : (((/* implicit */unsigned long long int) min((3113411795U), (((/* implicit */unsigned int) (short)-32764)))))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] [i_2 + 1] = ((/* implicit */_Bool) max(((+(arr_2 [i_2 - 1] [i_2 - 2] [i_2 - 1]))), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1))))));
        arr_21 [i_2] = ((/* implicit */unsigned char) arr_10 [i_2 + 2]);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) arr_23 [i_6] [i_6]))))))))));
        var_18 = ((/* implicit */short) (+(((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)16] [(short)16])))))));
        var_19 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32764))));
    }
}
