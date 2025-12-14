/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199463
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */long long int) arr_2 [i_0]);
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)100))) & (1985235492393291306LL))) * (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */int) arr_8 [i_1] [i_1]);
        var_19 = ((/* implicit */int) ((-1985235492393291290LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_20 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_2]) < (arr_10 [i_2]))))) % (min((arr_10 [i_1]), (arr_10 [i_1])))));
            var_21 = ((short) (!(((/* implicit */_Bool) 63))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) != (((/* implicit */int) (signed char)6))))) != ((+(((/* implicit */int) (short)-1))))));
        }
    }
    var_23 = ((/* implicit */signed char) var_3);
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((1985235492393291281LL) <= (1171214735643010349LL))))) * (var_9)));
}
