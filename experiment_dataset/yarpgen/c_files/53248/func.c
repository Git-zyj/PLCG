/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53248
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */short) arr_1 [i_0 + 1]);
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -7097079160244608444LL)) ? ((-9223372036854775807LL - 1LL)) : (-9185539116215582458LL))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16320))) : (arr_6 [i_0] [i_1] [i_0]))))))));
                    var_15 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((0), (((/* implicit */int) (short)-29287))))), (var_13)));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((arr_0 [i_0 - 2]), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) || (((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (max(((~(((/* implicit */int) var_10)))), (min((var_3), (var_11)))))));
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
    var_18 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (max((18446744073709551615ULL), (11799267447381899825ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), (((/* implicit */short) var_10))))))))));
}
