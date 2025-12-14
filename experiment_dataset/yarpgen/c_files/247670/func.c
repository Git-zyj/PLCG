/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247670
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (var_3)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] [7U] = ((/* implicit */int) -1130030782283114275LL);
        var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(var_3)))) ? (((int) (short)19652)) : (((/* implicit */int) ((short) (_Bool)1)))))));
    }
    for (short i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        var_21 = ((/* implicit */int) (short)4733);
        var_22 ^= ((/* implicit */short) ((unsigned long long int) min((arr_3 [i_1 + 1]), (arr_3 [i_1 - 1]))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) -9223372036854775802LL))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((int) max((max((((/* implicit */long long int) arr_5 [i_1])), (2385067969717269332LL))), (((/* implicit */long long int) var_9)))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_24 = ((/* implicit */int) arr_9 [i_2] [13ULL]);
        var_25 = ((/* implicit */long long int) arr_1 [i_2]);
        var_26 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) -2385067969717269332LL)))));
        var_27 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)16)))) ? (((((/* implicit */unsigned long long int) 3424994932U)) - ((+(13068853560280703729ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2])))));
    }
}
