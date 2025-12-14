/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233008
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_4 [i_0] [(unsigned char)16] [i_1] = ((/* implicit */short) ((((long long int) var_10)) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))));
            var_14 = ((/* implicit */unsigned char) arr_2 [i_0]);
            arr_5 [i_0] = ((/* implicit */int) arr_2 [(short)16]);
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) var_11);
            /* LoopSeq 2 */
            for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                var_15 = var_12;
                arr_9 [i_2 - 2] [i_0] = ((/* implicit */long long int) var_7);
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_4))));
            }
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                arr_14 [i_0] [i_0] [i_0] = var_13;
                var_17 = ((/* implicit */int) arr_12 [i_0] [i_0] [i_3]);
            }
        }
        for (int i_4 = 2; i_4 < 19; i_4 += 4) 
        {
            arr_17 [i_0] [13LL] = ((/* implicit */short) var_6);
            var_18 = ((/* implicit */short) ((var_3) | (-1191535260)));
            var_19 = ((/* implicit */short) max((var_19), (var_9)));
        }
        arr_18 [10LL] = ((/* implicit */unsigned char) (unsigned short)1436);
        arr_19 [i_0] = ((/* implicit */long long int) (unsigned char)252);
        var_20 = ((/* implicit */long long int) arr_2 [(short)2]);
        var_21 -= ((/* implicit */int) var_10);
    }
    for (int i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
    {
        var_22 = var_9;
        var_23 = ((/* implicit */int) var_7);
    }
    for (int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((short) arr_8 [i_6] [i_6] [i_6])))));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((arr_15 [i_6] [i_6] [i_6]) % (arr_15 [i_6] [(short)7] [i_6]))))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */int) arr_21 [i_6]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 215370183)) ? (((-1625010004) & (-1625010004))) : (((/* implicit */int) ((short) var_13)))))))))));
        var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((int) var_7)) & (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_8 [i_6] [i_6] [i_6]))))))) ? (((/* implicit */unsigned int) ((int) var_4))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6] [2]))) | (var_4)))));
    }
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_13))));
    var_29 &= ((/* implicit */unsigned short) ((var_8) < (((/* implicit */int) (short)-1026))));
}
