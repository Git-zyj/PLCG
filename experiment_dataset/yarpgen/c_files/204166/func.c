/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204166
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
    for (short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) (unsigned char)0);
                var_16 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 1])) - (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((var_9) >= (0)))) : (((((/* implicit */_Bool) (unsigned short)64792)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) var_12)))))) & (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned short)740))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_17 = (short)24609;
                    var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (arr_4 [i_0] [(unsigned char)11] [i_0 - 2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1007)) ? (-661033087) : (661033097)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : ((-(var_4))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) arr_0 [i_2])))), ((+(((/* implicit */int) var_5)))))))));
                    var_19 = ((/* implicit */short) (+(((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (unsigned char)90)))))));
                    arr_7 [i_0] [i_0] [i_0 - 1] |= ((/* implicit */unsigned short) ((arr_6 [i_1 + 1] [i_1 - 2] [i_1 - 2]) ? (((/* implicit */long long int) ((max((((/* implicit */int) arr_2 [i_0 + 1])), (661033090))) + (((((/* implicit */int) var_0)) - (((/* implicit */int) arr_0 [i_0]))))))) : (min((((((/* implicit */_Bool) arr_5 [(short)2] [i_1 - 1] [i_0 - 1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1025751127)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) arr_3 [12])))))))));
                }
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)64793)) : (-748223868)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -661033087)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)18320)))) != (((/* implicit */int) min((var_7), (arr_3 [i_1])))))))) : (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))) : (arr_5 [i_0] [i_0] [i_0]))) | (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) (unsigned char)255)))))))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */short) (~(((((((/* implicit */int) var_12)) / (661033087))) / (((/* implicit */int) var_14))))));
}
