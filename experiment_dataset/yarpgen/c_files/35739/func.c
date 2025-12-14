/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35739
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) (~(var_1)))) ? (arr_1 [15U]) : (((((arr_1 [4U]) + (9223372036854775807LL))) >> (((1108461847U) - (1108461842U))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (unsigned short)8272)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) : (-5749688927102387395LL)))))) ? (2426060416696672939ULL) : (((/* implicit */unsigned long long int) 1053317605U))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) 1824693145U)) : (2426060416696672958ULL))))) ? (min((((/* implicit */int) arr_2 [i_0])), ((+(((/* implicit */int) arr_3 [(short)8] [(short)6])))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [4U])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))));
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (arr_8 [(unsigned char)15] [i_2] [9ULL])))), (var_6)));
                    var_20 = ((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_3]);
                }
            } 
        } 
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16)) ? (((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned long long int) var_3)) : (max((10855804906331958176ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((var_3), (var_3))))))));
}
