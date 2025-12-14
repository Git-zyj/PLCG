/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241078
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)4] [i_0] [i_0])) ? (-1LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)51731)) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)6939)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) -914952059);
                        var_18 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 1])))));
                        var_19 = (~((~(((((/* implicit */int) arr_8 [i_0])) ^ (arr_7 [i_0] [i_2] [i_1] [i_0]))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)107)))) * (((/* implicit */int) var_4)))), (((/* implicit */int) (unsigned short)55797)))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_14)))) : (min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) (unsigned short)13805)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_12)))))));
}
