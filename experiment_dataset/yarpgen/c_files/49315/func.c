/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49315
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2888151411453826606LL)) ? (((unsigned int) -2888151411453826606LL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_0]))))));
        var_13 = ((/* implicit */signed char) (unsigned short)65535);
        arr_4 [i_0] = ((/* implicit */int) ((((unsigned int) ((short) 3605467108U))) + (max(((+(arr_0 [23U] [23U]))), (((/* implicit */unsigned int) arr_2 [i_0]))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned char)112))) && (((/* implicit */_Bool) ((arr_1 [i_0]) * (arr_0 [i_0] [i_0])))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1 + 1])) : (((/* implicit */int) var_8))));
            var_16 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1])) | (((/* implicit */int) arr_9 [(_Bool)1])))))));
            var_17 = ((/* implicit */_Bool) (-(-4134085714330205247LL)));
        }
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((unsigned int) ((arr_6 [i_1]) < (var_3)))) != (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) 3605467108U)) ? (1965938546) : (((/* implicit */int) (short)(-32767 - 1)))))))))))));
        arr_10 [i_1] = ((/* implicit */unsigned char) arr_6 [(short)8]);
        var_19 = ((/* implicit */signed char) (~((~(arr_7 [i_1 + 1])))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(arr_12 [i_3]))), (((((/* implicit */int) (short)16384)) | (arr_12 [i_3])))))) ? (((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (arr_1 [i_3]))))) : (arr_2 [(short)6])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21512))) : (arr_16 [(short)13] [i_4])))));
            var_22 -= ((/* implicit */short) (+((+(3922139377500768373ULL)))));
            arr_18 [i_3] [i_3] [i_3] = ((/* implicit */short) (~(arr_1 [i_3 - 2])));
        }
        var_23 = ((/* implicit */int) (-(((unsigned int) arr_1 [i_3 - 3]))));
        var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 117440512)), (((((((/* implicit */long long int) ((/* implicit */int) (short)-21713))) == (-2888151411453826600LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))) + (arr_1 [i_3])))) : (((unsigned long long int) arr_15 [i_3] [i_3 + 2] [i_3 - 2]))))));
    }
    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_25 *= ((/* implicit */long long int) ((max((689500187U), (arr_1 [i_5]))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33467)))));
        arr_21 [i_5] [i_5] = (-(((/* implicit */int) (signed char)(-127 - 1))));
        var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max(((unsigned short)36775), (((/* implicit */unsigned short) (unsigned char)232))))) ? (min((arr_0 [i_5] [i_5]), (((/* implicit */unsigned int) arr_2 [i_5])))) : (((arr_1 [(short)11]) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
    }
}
