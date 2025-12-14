/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23971
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_11 = ((long long int) max((((/* implicit */long long int) ((-2564371080108658923LL) >= (var_9)))), ((~(var_2)))));
                                var_12 = ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) -2564371080108658923LL))))), ((-9223372036854775807LL - 1LL)))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                                arr_14 [2LL] [i_3] [i_2] [i_3 - 2] [i_4] = ((long long int) arr_4 [i_0] [19LL]);
                            }
                        } 
                    } 
                    var_13 = (~(((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_5 = 1; i_5 < 21; i_5 += 1) 
        {
            var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775799LL)) ? ((-9223372036854775807LL - 1LL)) : (2564371080108658922LL)))) ? (9223372036854775807LL) : (min((-5596845338871883440LL), (9223372036854775807LL))));
            var_15 = ((((/* implicit */_Bool) (~(((long long int) 712805426109882051LL))))) ? (min(((+(var_3))), (((((/* implicit */_Bool) 3615128410261022619LL)) ? (var_2) : (var_8))))) : (max(((~(arr_2 [i_0 - 1] [i_0 - 1]))), (min((arr_0 [i_0 + 1]), (var_8))))));
        }
        /* vectorizable */
        for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
        {
            var_16 = var_0;
            var_17 |= (~((~(-4592987072501642534LL))));
            arr_21 [14LL] [i_6] = ((6473991189110691120LL) % (-4465042935972106752LL));
            var_18 = ((((/* implicit */_Bool) 1550285563360765401LL)) ? (590688737524599969LL) : (((arr_5 [i_0] [i_0 - 3] [i_0 - 1]) / (2232456448381023145LL))));
        }
    }
    var_19 = ((/* implicit */long long int) min((var_19), (var_3)));
    var_20 = (~(min((5596845338871883439LL), (7319362727129258679LL))));
}
