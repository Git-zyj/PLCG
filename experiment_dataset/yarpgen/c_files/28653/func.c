/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28653
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
    var_19 = ((/* implicit */unsigned int) ((min((((/* implicit */int) min((var_18), (((/* implicit */short) var_4))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14)))))) * (((((/* implicit */int) var_14)) % ((-(((/* implicit */int) var_14))))))));
    var_20 = ((/* implicit */_Bool) var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_21 = ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2 - 1] [i_1] [i_2 - 1]))) - (((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [2] [(short)11] [(unsigned short)8]))))) + (max((arr_0 [i_3]), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [i_0])))))));
                                var_22 = ((/* implicit */unsigned int) arr_0 [i_2]);
                                var_23 ^= arr_7 [i_0] [(unsigned char)22];
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) arr_2 [i_0] [(unsigned char)19] [i_0]);
                    var_25 = ((/* implicit */unsigned short) arr_3 [i_1]);
                }
                var_26 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [16LL] [i_1] [16LL] [i_1] [i_0] [i_0] [i_0])) + (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned short)2968)) : (((/* implicit */int) arr_10 [i_0] [(unsigned short)10] [i_1 + 1] [i_1] [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))) : (18446744073709551615ULL)))) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)37)), ((unsigned short)62568))))))));
                var_27 = ((/* implicit */_Bool) min((var_27), (((max(((-(((/* implicit */int) var_14)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 - 1] [i_1]))))))) == (((/* implicit */int) arr_6 [(unsigned short)19] [i_0] [i_0] [(unsigned short)19]))))));
                var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
            }
        } 
    } 
}
