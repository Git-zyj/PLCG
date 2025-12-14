/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46546
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (~(((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))))))));
        var_15 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */signed char) var_13)), (var_5))))))) | (((((/* implicit */unsigned long long int) (~(var_10)))) | (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (3790712165621324562ULL)))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((1108207148451948227ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : ((~(((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2400)) * (((/* implicit */int) (unsigned char)113))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [15U])), ((short)2399)))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (2058406416951247445LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (0LL))))))));
        var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (min((2327147461U), (((/* implicit */unsigned int) var_13))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_5))));
    }
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (0U) : (2088819039U))), (((unsigned int) var_1))))))))));
    var_21 = ((/* implicit */long long int) ((((long long int) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)-2401)))))) <= (((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned int) (short)-24206)), (1572679946U)))))));
    /* LoopNest 3 */
    for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
    {
        for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_22 *= ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_2] [i_3] [i_4])))))))), (arr_10 [i_2] [i_3] [i_2])));
                    var_23 = ((/* implicit */unsigned char) ((18446744073709551613ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
}
