/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41027
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_10)))) && (((/* implicit */_Bool) var_1)))))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (-(18446744073709551615ULL))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_14 -= ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8191))) >= (3310642637U))))));
            var_15 = ((/* implicit */int) max(((((!(((/* implicit */_Bool) arr_4 [i_1] [(unsigned char)18] [i_0])))) ? (((/* implicit */unsigned long long int) (-(arr_2 [i_0] [i_0])))) : (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) (short)-8191))));
            arr_5 [i_0] [i_0] [i_1] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (arr_0 [i_0 - 1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-8168))))));
        }
        var_16 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))));
        var_17 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1157765979)) && (((/* implicit */_Bool) (short)7136)))), (((_Bool) ((((((/* implicit */int) (short)-32747)) + (2147483647))) << (((((-1157765979) + (1157766007))) - (28))))))));
        var_18 = ((/* implicit */short) (-(min((arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_2]))) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2]))));
        arr_8 [i_2] = ((/* implicit */short) (~((-(((/* implicit */int) arr_7 [i_2] [i_2]))))));
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        arr_12 [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((_Bool)1) && (arr_3 [i_3] [i_3] [i_3]))) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3])))))))) && (((/* implicit */_Bool) ((max((var_2), (((/* implicit */long long int) 2991608982U)))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_10)) : (var_11))))))));
        var_20 ^= ((/* implicit */unsigned char) ((((_Bool) arr_10 [i_3])) || (((/* implicit */_Bool) (short)-4401))));
        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)6861)), ((unsigned short)65535)));
    }
    var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) != ((-(((/* implicit */int) (unsigned short)51309))))));
}
