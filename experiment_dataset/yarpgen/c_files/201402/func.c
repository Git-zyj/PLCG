/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201402
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_12 [i_1] [i_3] [(_Bool)1] [i_1 + 1] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)0);
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1ULL) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (18446744073709551611ULL) : (18446744073709551614ULL)))));
                            var_10 = ((/* implicit */unsigned long long int) var_0);
                        }
                        var_11 += ((/* implicit */long long int) var_7);
                        arr_14 [i_1] [i_1 + 1] [i_2] [i_3] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_0)) ? (((-1015746882335915726LL) & (arr_1 [i_1 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (short)1788))))));
                        arr_15 [i_2] [i_1] [(unsigned short)16] = ((/* implicit */short) (~(var_6)));
                        var_12 *= ((((((/* implicit */long long int) arr_4 [i_3] [i_1 - 1] [i_3])) & (arr_11 [i_1 + 1] [i_3]))) / ((~(arr_1 [i_1 - 1]))));
                    }
                } 
            } 
        } 
        arr_16 [i_0] |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) var_4)) : (arr_4 [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) var_8))));
        arr_17 [i_0] = ((/* implicit */unsigned long long int) (~(var_8)));
    }
    var_13 = ((/* implicit */_Bool) ((short) (~(((var_2) ^ (((/* implicit */long long int) var_0)))))));
}
