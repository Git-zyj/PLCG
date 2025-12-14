/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49422
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
    var_17 = ((/* implicit */unsigned int) (-(((((var_13) | (((/* implicit */unsigned long long int) var_10)))) & (var_11)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_3))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((2901805418U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((6956432802002937268ULL), (((/* implicit */unsigned long long int) -1))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)1)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (signed char)56);
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */int) (+(2901805421U)));
            }
            arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) || (((((/* implicit */unsigned int) 1)) > (arr_3 [i_0])))));
            arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_20 += ((/* implicit */int) ((unsigned char) arr_7 [i_3]));
            arr_16 [i_0] [i_3] = ((unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_3] [i_3])) << (((arr_5 [i_3] [i_0] [i_0] [i_0]) - (13839248335157109230ULL)))));
        }
    }
    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) var_4);
        arr_20 [i_4] = ((/* implicit */signed char) max(((short)12096), (((/* implicit */short) (unsigned char)147))));
        var_22 = ((/* implicit */unsigned char) -1LL);
    }
    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 4) 
    {
        var_23 += ((/* implicit */short) min((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) arr_23 [i_5])) ? (arr_22 [i_5 - 2]) : (((/* implicit */unsigned long long int) var_12))))))));
        arr_24 [i_5] = ((/* implicit */unsigned short) max((((arr_22 [i_5 - 1]) / (arr_22 [i_5 + 1]))), ((~(arr_22 [i_5 - 2])))));
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned long long int) 1393161878U)) : (9455845557972233309ULL))) - (12466813916874183447ULL)))) ? (((((/* implicit */_Bool) var_15)) ? (2049333126U) : ((-(var_2))))) : (3772781594U)));
}
