/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20234
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_12 *= ((/* implicit */int) var_3);
        var_13 = (~((~(arr_1 [i_0 + 1]))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) - (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned long long int) (+(var_6)))) : (15546443513455119422ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (var_0) : (arr_2 [i_0 - 2] [i_1 - 1] [i_2 + 2]))))));
                    var_14 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_10)) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_5))))))));
                    var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */long long int) 3722593712U)) / (arr_2 [19] [i_1 + 3] [i_2 + 1])))) ? ((-(((((/* implicit */_Bool) -1155895334362034208LL)) ? (arr_2 [i_0] [(_Bool)1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))))))) : ((+(arr_0 [i_0 - 1] [0LL])))))));
                }
            } 
        } 
        arr_8 [i_0 + 2] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)185)), (var_8)))) ? ((+(arr_1 [i_0]))) : (((/* implicit */long long int) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(1551056271)))))) ? ((-((-(var_0))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
    var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 3991491861U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224)))));
}
