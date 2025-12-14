/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227696
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
    var_10 = ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) min((var_5), (((/* implicit */short) var_7))))))));
    var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 3119609943U)) % (-4302245503519459675LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (17778320582133639952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)10]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((4995271068197759187LL) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20410)) ? (-9223372036854775791LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 2])))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 - 3] [i_0 - 2] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_8 [i_0 - 1] [i_1 + 2] [i_2 + 2])));
                        var_15 = ((/* implicit */short) ((long long int) ((arr_4 [10ULL] [i_1]) ? (351307134U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 2] [i_2] [i_0] [i_0]))))));
                        var_16 = ((/* implicit */unsigned char) (~((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_0 [i_3])) - (26)))))));
                        arr_13 [i_0 - 2] [i_1] [i_2] [i_2] [i_3] = (~(((/* implicit */int) arr_12 [i_0 - 3] [i_0 - 1] [i_0 + 1] [i_2])));
                    }
                    arr_14 [0LL] [(short)8] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31)) << (((((/* implicit */int) arr_5 [i_0])) - (15799)))))) % (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_2)))));
                }
            } 
        } 
    }
}
