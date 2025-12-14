/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197128
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
    var_11 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))), (min(((_Bool)1), ((_Bool)1))))))));
        var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) arr_0 [i_0]))), (((unsigned int) (_Bool)1))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) max((8881840349531526926ULL), (((/* implicit */unsigned long long int) (short)1))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned long long int) var_10)), (var_5))))) : (((/* implicit */unsigned long long int) -11))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (1420622486) : (((/* implicit */int) (short)501))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)10)))) & (min((((12LL) << (((((/* implicit */int) (unsigned short)35046)) - (35003))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30489)) << (((((/* implicit */int) (unsigned short)50122)) - (50111))))))))));
            var_17 ^= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) arr_8 [(unsigned char)14] [(unsigned char)14])), (var_8))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2 + 1])))));
        }
    }
}
