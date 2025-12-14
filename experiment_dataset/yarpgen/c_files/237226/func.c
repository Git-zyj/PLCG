/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237226
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
    var_11 &= 6104534634397416630LL;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (var_6)));
                    var_13 = ((/* implicit */unsigned long long int) ((long long int) max((2138090852735438441ULL), (((/* implicit */unsigned long long int) var_4)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_14 = var_6;
                                var_15 = (-(((arr_0 [i_1 + 1]) ? (16308653220974113174ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1]))))));
                                arr_12 [i_3] [i_1 + 3] [i_2] [i_3] [i_4 + 1] = ((/* implicit */long long int) ((((arr_1 [i_0 - 1]) / (arr_1 [i_0 - 1]))) == ((~(arr_2 [i_0 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 16308653220974113203ULL)) || (((/* implicit */_Bool) var_8)))))))))))));
        var_17 = ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_0] [i_0] [16ULL] [i_0] [i_0 - 1] [i_0 + 2])), (arr_2 [i_0])))) ? ((~(arr_2 [i_0]))) : (arr_1 [i_0 + 2])));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_5]))));
        arr_15 [i_5] = ((/* implicit */long long int) (~(((var_5) ? (arr_13 [i_5] [i_5]) : (arr_13 [i_5] [i_5])))));
        var_19 |= var_6;
        var_20 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16308653220974113173ULL)))) ? (2138090852735438462ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [16ULL]))));
    }
    var_21 = var_6;
    var_22 = ((/* implicit */unsigned long long int) ((((-9142408165388353866LL) / (var_6))) & ((-(9142408165388353865LL)))));
}
