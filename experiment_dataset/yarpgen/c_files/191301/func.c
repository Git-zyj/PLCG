/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191301
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) >> (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_21 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 160441123)) || (((/* implicit */_Bool) 11648945790604397828ULL))))), (min((((((/* implicit */_Bool) 2799174397U)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_2 [i_1]))))));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)65303)));
                            var_23 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_2] [(signed char)6] [i_3 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12)))))) : (min((((/* implicit */long long int) min((var_19), (((/* implicit */unsigned int) (unsigned short)0))))), (var_7)))));
                            arr_11 [(signed char)16] [i_4] [i_4] [i_4] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) arr_1 [i_0]);
                            arr_12 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_2)) * (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)0)))))));
                        }
                    } 
                } 
            } 
            var_24 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)108))));
        }
        arr_13 [i_0 + 3] [i_0] = ((/* implicit */long long int) min((4107801456951014429ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]))));
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_19) << (((((/* implicit */int) (unsigned short)65529)) - (65509))))))))) != (min((((/* implicit */int) (short)-9290)), ((~(1140044314)))))));
    }
}
