/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219700
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
    var_12 = ((/* implicit */long long int) max((((/* implicit */int) var_3)), (((int) min((((/* implicit */int) var_4)), (var_1))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (var_10)))))));
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)1394)), (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) : (((((/* implicit */_Bool) var_5)) ? (2213403211594586745LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
        }
        arr_5 [i_0] = ((/* implicit */signed char) (+((-((+(0U)))))));
        var_14 = ((/* implicit */int) (signed char)-107);
        arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_7)) - ((~(arr_1 [i_0])))));
        var_15 = ((/* implicit */int) (signed char)-123);
    }
    for (signed char i_2 = 2; i_2 < 24; i_2 += 4) 
    {
        var_16 = ((((((/* implicit */_Bool) arr_9 [i_2 + 1])) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) arr_8 [i_2 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 - 1]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
        {
            arr_14 [i_2] = ((/* implicit */_Bool) ((var_9) ? ((-(((/* implicit */int) arr_10 [(short)7])))) : ((-(((/* implicit */int) arr_7 [i_2]))))));
            arr_15 [(unsigned short)7] [(unsigned short)7] = ((/* implicit */long long int) ((arr_11 [i_2 + 1]) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            arr_16 [i_2] [i_2] = ((/* implicit */_Bool) var_5);
            arr_17 [i_2] [i_2] [(unsigned char)16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))));
        }
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)29701)) + (((/* implicit */int) ((((/* implicit */int) (signed char)-108)) != (((/* implicit */int) var_5)))))))) ? (((/* implicit */int) max((((/* implicit */short) arr_13 [i_2 - 2])), (max((((/* implicit */short) arr_19 [i_2])), (var_5)))))) : (((/* implicit */int) var_0))));
            arr_21 [i_4] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_20 [i_4] [(signed char)8])) : (((/* implicit */int) arr_20 [i_2 - 2] [i_4]))))), (min((((/* implicit */unsigned int) arr_13 [i_2 - 2])), (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))))));
        }
    }
}
