/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232045
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
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */int) var_13)), ((+(((/* implicit */int) var_4))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)47)))))));
        var_17 -= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(unsigned short)7]))) : (-6341403954863132343LL))));
        var_18 = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_0]));
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 14; i_1 += 4) 
    {
        arr_5 [i_1] [i_1 - 4] = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) 11490766263113328594ULL)))));
        arr_6 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) 4129007401983295617LL));
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_3))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) -4129007401983295618LL))) ? (((((/* implicit */_Bool) (unsigned char)235)) ? (-1266558318) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (_Bool)0))));
            arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1 - 4])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (arr_8 [i_1] [i_1] [i_1 - 4])));
        }
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2])) + (((/* implicit */int) var_4))));
            var_21 = ((/* implicit */unsigned char) var_7);
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_2 [i_1]))));
            arr_15 [(unsigned char)1] [i_3] [i_3] = ((/* implicit */short) 1048574U);
        }
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            arr_18 [i_4] [(unsigned short)14] = ((/* implicit */unsigned int) ((_Bool) arr_16 [i_1 - 2] [i_1 + 1] [i_1 - 2]));
            arr_19 [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((unsigned int) var_6)) : (((unsigned int) arr_16 [i_1] [i_1] [i_1]))));
        }
        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_23 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_1] [i_1] [i_5]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [1] [i_5])))) : (((/* implicit */int) arr_10 [i_1 - 4] [i_1 - 3] [i_1 - 3]))));
            var_23 |= ((/* implicit */unsigned char) (_Bool)1);
        }
    }
}
