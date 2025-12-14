/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234300
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
    var_20 *= ((/* implicit */short) (-(((/* implicit */int) max(((short)-1), ((short)-25449))))));
    var_21 = (short)32767;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] = (((~(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 + 2])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) * ((~(18446744073709551615ULL))));
                arr_6 [i_0] [i_0] = ((((((/* implicit */int) arr_3 [i_0] [i_1] [i_1 + 1])) > ((+(((/* implicit */int) arr_3 [(short)3] [i_0] [i_1 - 1])))))) ? (max((((unsigned long long int) 18446744073709551605ULL)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-14))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) var_4))))), (max((103079215104ULL), (var_6))))));
                var_22 += ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((((unsigned long long int) 2306211142966317905ULL)), (((/* implicit */unsigned long long int) ((unsigned char) var_18))))) : (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) % (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25449))))));
            }
        } 
    } 
    var_23 *= ((16511573347890266440ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)255))));
}
