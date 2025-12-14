/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40530
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) var_14);
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_17 = ((/* implicit */short) ((unsigned int) arr_1 [i_0] [(signed char)13]));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_8 [3U] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9503))) < (arr_1 [i_1] [i_1])))) + (((/* implicit */int) ((7097246406259846841LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)19] [(short)19]))))))))) ? (((((/* implicit */_Bool) var_15)) ? (1340535512) : (((/* implicit */int) (unsigned short)9499)))) : (1340535512)));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((2810225153U) >> (((((/* implicit */int) arr_6 [i_1] [i_1])) - (21522)))))) || (((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_5 [(unsigned short)9] [i_1])) : (((/* implicit */int) arr_0 [i_1]))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (2147483647))) * ((+(((/* implicit */int) arr_5 [i_1] [i_1]))))))) : (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (var_0))))));
    }
    var_19 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (short)20523)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
        arr_12 [i_2] = ((/* implicit */unsigned short) ((long long int) arr_9 [i_2]));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) ((_Bool) var_1)))))) ? (arr_1 [(short)13] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)7747)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_2])))) >= (var_14)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 4) 
        {
            var_22 ^= arr_10 [i_3];
            var_23 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_13)) ? (2211072331U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56032))))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) (short)-7748))));
        }
        arr_19 [i_3] [i_3] = ((/* implicit */signed char) min((var_12), (((/* implicit */long long int) (((~(((/* implicit */int) (short)-7724)))) | (((/* implicit */int) min((arr_11 [i_3]), (arr_16 [i_3])))))))));
        var_24 = ((unsigned long long int) 18446744073709551611ULL);
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((arr_0 [i_3]) ? (arr_1 [i_3] [i_3]) : (18446744073709551598ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_18 [i_3] [i_3]))))))));
        var_26 = ((/* implicit */signed char) max((((/* implicit */int) arr_14 [i_3])), (((((/* implicit */int) arr_4 [i_3] [i_3])) >> (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (arr_4 [i_3] [i_3]))))))));
    }
    for (signed char i_5 = 3; i_5 < 18; i_5 += 1) 
    {
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1181912156U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6736)))))) ? (((/* implicit */int) arr_16 [14U])) : (((/* implicit */int) arr_10 [(unsigned char)16]))));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((short) (unsigned short)65535)))));
        arr_23 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((arr_10 [i_5 - 2]), (((/* implicit */short) arr_11 [i_5]))))))) + (3945982581U)));
    }
}
