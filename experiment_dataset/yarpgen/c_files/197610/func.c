/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197610
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
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_18)))) - (var_0)));
    var_21 = ((/* implicit */unsigned char) (unsigned short)1);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : ((+(((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_9))))));
        var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) ? (12142657457401666808ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)3))))) : (((arr_1 [8]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 2]))) : (var_11)))));
    }
    for (unsigned int i_1 = 3; i_1 < 8; i_1 += 2) 
    {
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870912)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 3]))) : (4118035780U)))) ? (((/* implicit */int) min((arr_4 [i_1 - 3]), (arr_4 [i_1 - 1])))) : ((~(((/* implicit */int) var_10)))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) 
        {
            for (unsigned short i_3 = 3; i_3 < 9; i_3 += 1) 
            {
                {
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)3887)) : (((/* implicit */int) arr_5 [i_1] [4U] [i_3])))) >= (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_9 [i_2] [i_3])) : (((/* implicit */int) var_17))))))))));
                    arr_10 [i_3] [6U] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4118035780U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2] [1]))))))))) ? (((((/* implicit */_Bool) arr_7 [6ULL] [i_3] [i_3 - 1] [i_1 + 1])) ? (((var_17) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)113))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_1] [0U] [i_3] [i_3])))))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (var_0)));
}
