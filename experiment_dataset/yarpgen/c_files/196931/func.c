/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196931
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
    var_17 = ((/* implicit */unsigned char) var_7);
    var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_3))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22116)) ? (288230376151711744ULL) : (137438953440ULL)))) ? (((unsigned long long int) arr_2 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0 - 1] [i_1 - 1]))))));
            arr_4 [i_0] = ((/* implicit */unsigned short) (short)-22116);
            arr_5 [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) (+((-((-(((/* implicit */int) arr_2 [i_0]))))))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_3 [(unsigned short)4]))));
        }
        var_21 = ((/* implicit */_Bool) min((var_7), (var_0)));
        arr_6 [i_0] = ((/* implicit */long long int) (short)-16487);
        var_22 *= ((/* implicit */short) ((unsigned short) var_11));
        var_23 = ((/* implicit */_Bool) arr_2 [i_0]);
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_17 [i_4] = ((/* implicit */signed char) ((_Bool) ((unsigned short) (unsigned char)131)));
                    arr_18 [i_2] [i_4] [i_2] = ((/* implicit */short) var_14);
                }
            } 
        } 
        arr_19 [i_2] [(short)21] = ((/* implicit */short) ((arr_11 [i_2] [(unsigned short)16] [(unsigned short)16]) | (var_16)));
        var_24 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) var_11)))));
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4092)) ? ((-(((/* implicit */int) var_6)))) : (max((((/* implicit */int) var_4)), (max((((/* implicit */int) (signed char)24)), (var_1)))))));
}
