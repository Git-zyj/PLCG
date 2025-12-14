/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206078
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
    var_18 = ((/* implicit */unsigned long long int) 5821334063544419994LL);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), ((unsigned short)1238))))))) + (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] = (!(((/* implicit */_Bool) ((int) var_6))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_15 [(unsigned char)8] [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_2] [i_4])) < (min((((/* implicit */long long int) var_8)), (arr_2 [i_0] [i_1])))))), (((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (5821334063544419994LL))))))));
                                arr_16 [i_4] [i_0] [i_3] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (+(min((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) 14463190360082834798ULL)))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [19LL] = ((/* implicit */_Bool) -5821334063544419992LL);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */long long int) min((var_20), (arr_10 [(_Bool)1] [i_1] [i_0] [(_Bool)1])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_5 [12U] [i_5]) >= (((/* implicit */long long int) var_7))))), ((~(arr_5 [(short)6] [i_5])))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 4194303U)) ? (5821334063544420009LL) : (min((((/* implicit */long long int) (_Bool)1)), (5821334063544419986LL)))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            arr_23 [i_5] = ((/* implicit */int) (~((+(arr_21 [i_5] [i_6] [i_6])))));
            var_23 *= ((/* implicit */unsigned int) ((long long int) (((_Bool)1) ? (min((4578839299756747817LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) var_17))))));
            arr_24 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) min((((long long int) arr_21 [i_5] [i_6] [i_6])), (min((7687392295612075472LL), (((/* implicit */long long int) arr_6 [20LL] [20LL]))))));
        }
    }
}
