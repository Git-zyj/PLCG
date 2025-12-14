/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30965
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) ((unsigned int) var_5))) ? ((~(((((/* implicit */_Bool) (unsigned short)24570)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3))))) : (max((max((((/* implicit */unsigned int) var_8)), (var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4659)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [9LL] [i_1 + 1] [i_2])))))) / (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) << (((((/* implicit */int) arr_5 [(signed char)8] [i_1] [(signed char)8])) - (20441)))))) ? (max((var_3), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) (-(var_9)))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) (((-(arr_2 [i_0] [i_0] [(unsigned short)13]))) - (((/* implicit */unsigned long long int) (((_Bool)0) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_7))));
                    }
                    var_20 -= ((/* implicit */unsigned short) ((2305843009213693440LL) == (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 2])) * (((/* implicit */int) arr_5 [i_1 - 2] [i_1] [i_1 - 2])))))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) >> (((var_2) - (2244843141U)))));
}
