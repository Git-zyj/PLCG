/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41179
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) -1543539318))));
    var_16 = ((/* implicit */long long int) (+(((/* implicit */int) ((var_4) || (((/* implicit */_Bool) ((1543539297) % (-1543539296)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_0 [i_0]))))));
        var_18 = ((/* implicit */unsigned char) ((short) arr_2 [i_0] [(unsigned char)13]));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((1543539333) ^ (((/* implicit */int) var_11)))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (_Bool)1))));
        arr_3 [i_0] [13ULL] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((-1543539331) + (1543539316))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_21 = ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? ((~(((/* implicit */int) var_5)))) : ((+(-1543539318)))))));
        var_22 = ((/* implicit */_Bool) var_5);
        var_23 = ((/* implicit */unsigned short) ((_Bool) 1543539319));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) -1543539306))));
        var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((18446744073709551614ULL), (((/* implicit */unsigned long long int) var_7))))) ? (max((((/* implicit */int) arr_2 [i_1] [i_1])), (-1543539325))) : (((/* implicit */int) ((short) -1543539335)))));
    }
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1543539334))))), (((((/* implicit */unsigned long long int) -610330586747995160LL)) - (18446744073709551614ULL)))))) && (((/* implicit */_Bool) var_14))));
        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23608)) ? (arr_9 [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)1941)));
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~((~(((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */_Bool) (~(-1543539338)));
        arr_17 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1543539351)) ? (arr_12 [i_3]) : (((/* implicit */unsigned long long int) -1543539334))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) 1543539343)) ? (1543539331) : (((/* implicit */int) (unsigned short)8188))))));
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_3 - 1])) : (-1543539318)));
    }
}
