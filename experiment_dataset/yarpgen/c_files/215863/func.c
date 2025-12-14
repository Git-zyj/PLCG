/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215863
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) ((_Bool) arr_8 [i_0] [i_1] [i_2]))))))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) var_6)) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))))) : (((long long int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) ((arr_9 [i_3] [i_3] [i_3] [i_0]) ^ (arr_9 [i_0] [i_1] [i_1] [i_0]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)3] [i_2]))) >= (((long long int) (_Bool)1)))))));
                        arr_11 [i_0] [i_1] [i_0] [(unsigned char)1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)141))) : (arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) + (var_11))))), (min((((/* implicit */long long int) var_2)), (arr_5 [i_3] [i_1])))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */_Bool) max((var_16), (((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((var_1), (arr_1 [i_0] [i_0]))))) : (max((((/* implicit */long long int) arr_2 [i_0])), (var_0))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) 1649267441664LL)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (_Bool)1)))))))));
        arr_12 [i_0] [i_0] = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0]);
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_4 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_18 = arr_8 [(unsigned char)0] [i_4 + 2] [i_0];
                    var_19 *= ((/* implicit */long long int) arr_6 [(unsigned char)18] [i_4 + 1]);
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_6] [(unsigned char)13]))) : (arr_9 [i_6] [i_6] [i_4] [i_6]))))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_24 [i_6])) ? (arr_17 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7]))))) : (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_0] [i_5] [i_6] [i_7])))))));
                                var_21 &= ((/* implicit */long long int) ((_Bool) max((((arr_6 [i_7] [i_7]) ? (((/* implicit */int) arr_21 [i_7] [i_6] [i_7])) : (((/* implicit */int) arr_4 [i_6])))), (((/* implicit */int) ((_Bool) arr_23 [i_0] [i_4] [i_5] [i_6] [i_4] [18LL] [i_7]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        var_22 ^= ((/* implicit */unsigned char) ((arr_26 [i_8] [12LL]) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_26 [i_8] [i_8]))) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_25 [i_8] [i_8]))))))) : (((/* implicit */int) ((_Bool) max((arr_27 [i_8] [i_8]), (arr_27 [i_8] [i_8])))))));
        arr_28 [i_8] [i_8] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) arr_27 [i_8] [i_8]))), (((arr_27 [i_8] [i_8]) ^ (var_6)))));
        var_23 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_27 [i_8] [i_8]), (var_11)))) ? (arr_27 [i_8] [i_8]) : (arr_27 [i_8] [i_8]))) / (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    }
    var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), ((_Bool)1))))) : (var_6))));
}
