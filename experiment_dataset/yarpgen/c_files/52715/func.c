/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52715
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((((/* implicit */_Bool) 2576613514U)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) ((867822640U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)24312)))))) : (min((((/* implicit */unsigned long long int) var_11)), (var_1))))) : ((-(((((/* implicit */_Bool) var_15)) ? (2384422317253456662ULL) : (var_1)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((var_8) + (9223372036854775807LL))) >> (((((/* implicit */int) var_2)) + (14961)))))) ? (((((/* implicit */unsigned long long int) var_13)) | (2384422317253456662ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_3))))))) >> ((((~(var_13))) - (4084125557U)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_12 [i_1] [i_1 - 2] [i_2] [(unsigned short)1] = ((/* implicit */int) max((((((((/* implicit */_Bool) arr_7 [5LL] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))) : (var_0))) / (min((var_15), (((/* implicit */unsigned long long int) var_4)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((+(2384422317253456656ULL))) : (((/* implicit */unsigned long long int) ((arr_6 [3U] [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2384422317253456645ULL))))) >= (((/* implicit */int) (short)-32740))));
                    }
                    var_20 = ((/* implicit */short) max((((/* implicit */long long int) arr_0 [i_1 - 2])), (arr_9 [i_0] [i_0] [i_0] [i_1 - 2] [i_1 - 2])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 9; i_4 += 3) 
                    {
                        var_21 = -2032457562;
                        var_22 |= ((/* implicit */short) ((arr_2 [i_4 + 1]) / (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 2] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) var_3);
    var_24 = ((/* implicit */int) (signed char)23);
}
