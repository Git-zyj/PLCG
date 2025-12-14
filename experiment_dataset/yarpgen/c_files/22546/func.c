/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22546
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_0] [i_1] = ((/* implicit */signed char) -2709444802357085637LL);
                    var_14 = ((/* implicit */short) min(((+(((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])))), (((var_5) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_1 - 2]))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_1]))));
                        arr_11 [i_1] [i_1 - 1] [i_1 - 2] [i_1 + 1] = ((/* implicit */_Bool) min((((arr_5 [i_0]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (arr_10 [i_0] [i_1] [i_1] [i_2] [3U])))))), (arr_5 [(unsigned short)5])));
                    }
                    for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [(_Bool)0] = ((/* implicit */_Bool) (unsigned short)10204);
                        var_16 = ((/* implicit */unsigned short) var_6);
                    }
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) (unsigned char)8);
                        var_18 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) + (arr_5 [6LL])))) ? (min((arr_5 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_2])))) : (((/* implicit */unsigned long long int) (+(arr_12 [i_0] [i_0] [i_2] [(unsigned char)1] [(unsigned short)7])))))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))));
}
