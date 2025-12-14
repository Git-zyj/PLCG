/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25937
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
    var_13 |= ((/* implicit */unsigned char) var_4);
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */unsigned long long int) 0U)) & (18137676554801990634ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((int) (unsigned short)358));
            arr_5 [i_1 - 1] [(unsigned char)9] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) (short)4952)) : (var_10)));
            arr_6 [i_0] [i_1] [i_0] = (~(((/* implicit */int) arr_2 [i_0 - 1])));
        }
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2]))));
            arr_9 [i_2] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (short)21964)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) : (251327712U))));
            var_17 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)31330))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(3184290960U)))) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_7 [(unsigned short)6] [i_2])) ? (((/* implicit */int) (short)-21959)) : (((/* implicit */int) var_9))))));
        }
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 + 1])) * (((/* implicit */int) var_0))));
    }
}
