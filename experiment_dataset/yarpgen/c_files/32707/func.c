/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32707
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)1129)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1]))))) : (((/* implicit */int) arr_1 [i_0]))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) != (((unsigned long long int) arr_0 [i_0])))))));
        var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_20 ^= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53201)) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 3 */
    for (long long int i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        var_21 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_5 [i_1 - 2]), (arr_5 [i_1]))))));
        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32740)) : (((/* implicit */int) arr_3 [i_1])))) : ((+(((/* implicit */int) (_Bool)1)))))) & ((-(((((((/* implicit */int) (short)-32762)) + (2147483647))) >> (((/* implicit */int) arr_5 [21U]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)12)))), (arr_3 [i_1 + 1])));
        var_23 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) && (arr_5 [i_1 - 1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_24 = (-(((/* implicit */int) (_Bool)1)));
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_7 [i_2]), (arr_7 [i_2])))) < (((/* implicit */int) arr_7 [i_2]))));
    }
    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
    {
        var_25 &= ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_3])), (-3225174189823444053LL)))) ? (((((/* implicit */int) (unsigned short)36204)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_3 [i_3 + 2]))));
        var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_8 [i_3 + 2] [(unsigned char)6])), (var_2)));
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_12)))) ? (var_2) : (((/* implicit */unsigned long long int) 6819169265694755686LL))));
    }
    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))));
}
