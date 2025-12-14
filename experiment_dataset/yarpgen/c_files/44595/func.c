/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44595
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
    var_16 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((((unsigned long long int) 3213547045483179095ULL)), (max((((/* implicit */unsigned long long int) var_7)), (arr_1 [i_0]))))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (signed char)85))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */short) ((var_8) && (((/* implicit */_Bool) (short)-4126))));
        arr_5 [i_1] = ((/* implicit */int) ((4294967294U) << ((((~(arr_3 [i_1]))) - (9651790637981856035ULL)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_19 = ((/* implicit */long long int) var_5);
            arr_12 [i_2] [i_3] [i_3] |= ((/* implicit */long long int) ((((/* implicit */int) (short)4119)) << (((((/* implicit */int) var_4)) - (952)))));
            arr_13 [(unsigned short)4] [(unsigned short)4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) arr_8 [i_2])) : (15233197028226372507ULL)));
            var_20 += 3213547045483179106ULL;
            arr_14 [i_2] [i_3] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)4107)) : (((/* implicit */int) var_2))));
        }
        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            var_21 += ((/* implicit */int) ((unsigned short) (short)-4113));
            var_22 = ((/* implicit */short) max((var_22), ((short)-4138)));
        }
        var_23 = ((int) var_7);
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? ((~(16515072))) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            arr_22 [i_6] [i_6] = ((/* implicit */unsigned int) ((_Bool) (short)-16329));
            arr_23 [i_6] = ((/* implicit */unsigned long long int) 737531994U);
        }
        var_25 = ((/* implicit */int) max((var_9), (((/* implicit */unsigned long long int) var_14))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_6))));
    }
    var_27 = ((/* implicit */signed char) var_2);
}
