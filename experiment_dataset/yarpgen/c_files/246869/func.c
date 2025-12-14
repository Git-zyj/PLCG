/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246869
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))));
        var_17 = (~(arr_3 [i_0] [i_0]));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_1))));
        var_19 = var_8;
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_20 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_7)) ? (var_3) : (var_4))), (((/* implicit */long long int) arr_4 [i_2])))) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)-1316))))), (arr_4 [i_2])))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_21 = min((((/* implicit */long long int) var_12)), (((long long int) (short)17127)));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) (unsigned char)136)) << (((var_1) - (7632703423173807996LL))))))));
                                var_23 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) min(((short)32741), (var_13)))), (var_15))) <= (((/* implicit */unsigned long long int) (-(arr_15 [i_2] [i_2] [i_3] [i_3]))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_4)));
                    arr_20 [i_2] [i_2] [i_3] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_13), (arr_9 [i_2] [i_4]))))) : (((var_1) ^ (var_1))));
                }
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        var_25 = ((/* implicit */short) arr_21 [i_7] [i_7]);
        arr_23 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) -2303848186963285112LL)) && (((/* implicit */_Bool) max((var_13), (var_9))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            arr_26 [i_7] [i_8] = ((/* implicit */short) (~(arr_3 [i_7] [i_8])));
            var_26 = ((short) (~(((/* implicit */int) var_9))));
            arr_27 [i_8] = ((((/* implicit */int) arr_24 [i_8] [i_7])) <= (((((/* implicit */int) var_7)) << (((2303848186963285112LL) - (2303848186963285086LL))))));
        }
        for (long long int i_9 = 2; i_9 < 15; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) -2303848186963285112LL))));
                var_28 = ((/* implicit */unsigned long long int) max((6566373825179889339LL), (-6566373825179889323LL)));
            }
            var_29 = arr_4 [i_7];
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_9 - 1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) < (var_14))))));
        }
    }
    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) max((var_14), (((((/* implicit */_Bool) var_10)) ? ((~(var_4))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (short)-26604))))))))))));
}
