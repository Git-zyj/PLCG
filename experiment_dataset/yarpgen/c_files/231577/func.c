/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231577
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
    var_15 = ((/* implicit */long long int) var_10);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)4589)) && (((/* implicit */_Bool) ((8388544LL) / (((/* implicit */long long int) 1220457874))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)0)) ? (855736735U) : (((/* implicit */unsigned int) 0)))), (((/* implicit */unsigned int) -1220457881))))) : (((arr_1 [i_0] [i_0]) / (((((/* implicit */_Bool) 2086311834)) ? (var_2) : (-8869449048689484813LL)))))));
        var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-4))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((arr_2 [i_1]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_2 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)4))) : ((-(-8388532LL)))))));
            var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) arr_3 [i_0] [i_1])))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) ((arr_1 [i_0] [i_0]) > ((~(7011934442098888982LL))))))));
            var_20 = -1LL;
            var_21 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) -1220457872)))), (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_11))))));
        }
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) & (5656752767383104780LL)))) ? (max((-1471692539), (((/* implicit */int) (unsigned short)0)))) : (min((-335594855), (((/* implicit */int) var_0))))))));
        var_22 = ((/* implicit */unsigned char) 2733365479U);
    }
}
