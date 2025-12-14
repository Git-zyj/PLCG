/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34089
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (var_13)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)108))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))) + (6266736466447258805LL))) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1219056998))))) ^ (((/* implicit */int) (!((_Bool)0))))))))))));
        var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)176)) >> (((arr_1 [3ULL] [i_0]) - (8754764959566560714ULL)))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_18 -= ((/* implicit */int) (unsigned short)65535);
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_6 [i_1] [i_1] [20LL] &= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1 + 2]))));
            var_19 ^= ((/* implicit */int) ((short) var_10));
            var_20 *= ((/* implicit */unsigned char) ((arr_5 [i_1 - 3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_1 + 1]))));
        }
        var_21 *= ((/* implicit */unsigned char) ((short) (short)-11966));
        var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 - 4] [i_1 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_1]))));
    }
    for (int i_3 = 4; i_3 < 23; i_3 += 2) /* same iter space */
    {
        var_23 ^= min((((max((-1728992419), (((/* implicit */int) (short)19884)))) ^ (((/* implicit */int) min((arr_8 [i_3] [i_3]), (((/* implicit */unsigned short) (signed char)-91))))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))));
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_4 [i_3 + 2] [i_3]) + (2147483647))) >> (((((/* implicit */int) (unsigned char)253)) - (241)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */signed char) arr_5 [i_3 - 4])))))) : (min((((/* implicit */unsigned int) arr_5 [i_3 + 1])), (var_13)))));
        var_25 = ((/* implicit */int) arr_2 [i_3] [i_3]);
        var_26 |= (short)11030;
        var_27 += (-(max(((~(5448846658794974669LL))), (((/* implicit */long long int) arr_7 [(unsigned short)7] [i_3])))));
    }
}
