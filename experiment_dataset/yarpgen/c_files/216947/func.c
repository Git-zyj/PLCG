/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216947
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
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((_Bool)1)))) >= ((+(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65518)))) + (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (-(((max((((/* implicit */int) (_Bool)1)), (var_0))) / ((-(((/* implicit */int) arr_2 [i_1]))))))));
                var_15 ^= ((/* implicit */_Bool) (+((((+(((/* implicit */int) (short)15098)))) ^ (((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 4 */
                for (int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    var_16 = ((/* implicit */short) ((min((((1974402932U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36143))))), (((/* implicit */unsigned int) (_Bool)1)))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)11836)), (var_0))))))))));
                    var_17 = ((/* implicit */int) min((max((((/* implicit */long long int) (_Bool)1)), ((~(-3763603677878322996LL))))), (((/* implicit */long long int) (unsigned short)3819))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) (+((+(max((arr_0 [i_3]), (((/* implicit */int) (unsigned char)247))))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)1053)) >= (16)));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0)))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_21 = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) var_9))))));
                    var_22 *= ((/* implicit */unsigned char) (-(((var_6) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    var_23 = ((/* implicit */unsigned int) (((~(1963391506))) | (-762683317)));
                }
                for (unsigned int i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_7))))), (((((/* implicit */unsigned long long int) 4190009748U)) ^ (var_2)))))) || (((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_5]))))) != (((/* implicit */int) (!(arr_10 [i_5] [i_1] [i_5 + 2])))))))))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13908925636203274946ULL)) || (((/* implicit */_Bool) 456073406))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || ((_Bool)1))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (var_1)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))))));
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))))) / ((~(((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) == (var_6))))))));
}
