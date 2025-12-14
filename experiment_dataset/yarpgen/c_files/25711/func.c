/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25711
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
    var_16 ^= ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) < (((unsigned int) ((unsigned int) var_14))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) 2390126445612651873LL);
            var_18 = ((/* implicit */unsigned short) max((((((unsigned long long int) arr_0 [i_0])) + (((((/* implicit */_Bool) var_2)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_6 [3U])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2390126445612651873LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)243)))))));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) max((((((((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_2])) % (((/* implicit */int) arr_4 [i_2])))) % (((/* implicit */int) arr_10 [i_0 - 2] [i_0 + 1] [(_Bool)1])))), (((/* implicit */int) (_Bool)1))));
            arr_11 [i_0 - 3] = ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-7638)), (12553390353408067095ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29005))) | (10768445321611756791ULL))) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])))) >> (((((unsigned long long int) 1424650395U)) - (1424650332ULL))));
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (-(arr_5 [i_2] [i_2] [i_2])));
        }
        for (signed char i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
        {
            arr_15 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)101)) ? (max((((/* implicit */unsigned long long int) (unsigned char)42)), (18446744073709551610ULL))) : (((/* implicit */unsigned long long int) 2390126445612651873LL))))) ? ((-(((((/* implicit */_Bool) (short)-7636)) ? (2870316911U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_3]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(1424650414U))))))))));
            arr_16 [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_0]);
            var_20 += ((/* implicit */unsigned char) ((unsigned short) (-(2870316901U))));
            arr_17 [i_0] [i_0 + 1] [(short)7] = ((/* implicit */unsigned char) var_3);
            arr_18 [i_0 - 1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) 17955221657661084625ULL))))))) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)131)) || (((/* implicit */_Bool) (unsigned char)151)))))));
        }
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            var_21 *= ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_0 - 2]))))), (((unsigned char) arr_0 [(_Bool)1])))))));
            arr_21 [i_0 + 1] = ((/* implicit */unsigned char) var_9);
            arr_22 [i_4] = ((/* implicit */short) arr_7 [i_4]);
        }
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_2))) != (((((/* implicit */int) arr_19 [i_0 - 1])) | (((/* implicit */int) arr_19 [i_0 - 1])))))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_25 [i_5] = ((/* implicit */_Bool) arr_3 [i_5]);
        var_23 *= arr_13 [i_5];
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        arr_28 [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_6]))));
        arr_29 [i_6] [i_6] = ((/* implicit */signed char) (-(arr_26 [i_6])));
        var_24 += ((/* implicit */short) var_7);
    }
}
