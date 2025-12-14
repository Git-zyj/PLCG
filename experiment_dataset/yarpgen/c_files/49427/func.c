/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49427
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 3] [i_1] [i_1 + 1]))) * (min((0ULL), (((/* implicit */unsigned long long int) arr_4 [i_1 + 3] [i_1] [i_1 + 1])))));
                arr_5 [i_1] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) var_16)), (6911270056021303622ULL))), (((/* implicit */unsigned long long int) max((arr_4 [i_1 - 2] [i_1] [i_1]), (arr_4 [i_1 + 3] [i_1] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 2) 
    {
        for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_14), (max((var_14), (((/* implicit */int) arr_13 [i_3 + 1] [i_2 + 1]))))))) ? (min((((var_15) >> (((((/* implicit */int) var_18)) + (517))))), (var_19))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) arr_14 [i_2 + 1])))))));
                    arr_17 [i_2 + 1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((11535474017688247994ULL), (11535474017688247994ULL))) + (((((/* implicit */_Bool) var_13)) ? (6911270056021303612ULL) : (0ULL)))))) ? (((((/* implicit */int) arr_11 [i_2 + 1] [i_4 + 1])) * (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_3 [(unsigned char)12])))))) : (((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_1 [i_3] [i_4])) : (var_19))) * (((/* implicit */int) arr_11 [i_2] [i_3]))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_2 - 1]), (arr_2 [i_2 - 1])))) ? (((/* implicit */unsigned int) ((arr_4 [i_2 - 1] [i_4 + 3] [i_4]) ? (((/* implicit */int) arr_4 [i_2 + 1] [i_4 + 4] [i_4])) : (((/* implicit */int) arr_12 [i_3] [i_4 + 4] [i_4 - 1]))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_4))))), (max((4294967290U), (var_17)))))));
                }
            } 
        } 
    } 
    var_22 = (!(((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14)))))))));
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) arr_0 [i_5]);
        var_24 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_16)) | (((/* implicit */int) max((((/* implicit */unsigned short) (short)11106)), ((unsigned short)2382))))));
        var_25 ^= ((/* implicit */int) max((((arr_9 [i_5]) ? (arr_20 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5]))))), (((/* implicit */long long int) arr_8 [i_5]))));
    }
}
