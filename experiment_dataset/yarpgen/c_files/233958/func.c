/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233958
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-6)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))) : (((/* implicit */int) max((arr_2 [i_0]), (arr_3 [i_1] [i_1] [i_0]))))));
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [11U])) ? (((/* implicit */int) ((((/* implicit */int) (short)23)) > (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) (signed char)-66)))))))) : (((/* implicit */int) ((short) ((arr_1 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) + (126))))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_0])))) + (2147483647))) << (((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) >> (((arr_1 [i_0]) - (2390842965U)))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((var_0) + (((/* implicit */int) var_17))))) * (min((((/* implicit */unsigned int) (+(2147483647)))), (max((var_4), (((/* implicit */unsigned int) var_13))))))));
}
