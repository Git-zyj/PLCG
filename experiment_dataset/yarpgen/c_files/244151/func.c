/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244151
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
    var_20 = ((/* implicit */int) var_14);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_21 += ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) arr_2 [(unsigned char)4])) : (((/* implicit */int) arr_2 [8LL])))) : (((((/* implicit */_Bool) 3394297016U)) ? (1411650398) : (((/* implicit */int) (short)-32746))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) var_13);
                    var_23 ^= arr_0 [i_2] [i_2];
                    var_24 = var_15;
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_6 [(_Bool)0] [8] [i_0 + 1]))));
        arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (arr_8 [i_3] [i_3]) : (arr_8 [i_3] [i_3])));
        var_27 = var_12;
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) arr_9 [0]))));
    }
    var_29 = ((/* implicit */short) var_11);
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (var_11) : (((/* implicit */unsigned long long int) var_8))));
    var_31 = ((/* implicit */short) var_2);
}
