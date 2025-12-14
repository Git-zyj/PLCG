/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210360
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */signed char) arr_1 [i_0])))))));
        var_20 = (+(((/* implicit */int) ((short) 9223372036854775807LL))));
        var_21 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (signed char i_1 = 3; i_1 < 8; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((8751892639800356435LL) < (9223372036854775807LL)));
        var_22 -= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (var_14))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */short) ((unsigned int) arr_0 [20LL]));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) != (((/* implicit */int) arr_7 [i_2] [i_2])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) ((long long int) (_Bool)1));
            var_25 = ((/* implicit */short) ((_Bool) 9223372036854775787LL));
            arr_13 [6ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 + 1])) ? (arr_10 [i_3 + 1] [i_3 - 1] [i_3]) : (arr_10 [i_3 - 1] [i_3 + 2] [i_3])));
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) ((signed char) (short)26624));
        }
        var_26 = ((/* implicit */unsigned short) -9223372036854775807LL);
    }
    var_27 += ((/* implicit */unsigned short) var_16);
}
