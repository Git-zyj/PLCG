/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231986
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
    var_17 &= ((/* implicit */unsigned short) var_10);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((signed char) (unsigned char)127)), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)127)))))))) ? ((~(((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned char)107)) - (101))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)30177)) || (((/* implicit */_Bool) max(((unsigned short)28266), (((/* implicit */unsigned short) (unsigned char)164))))))))));
        var_19 -= var_0;
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) arr_7 [i_1] [i_2]);
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)171))));
        }
        var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)31714))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_1] [(unsigned char)12])), ((unsigned char)78)))) : (((((/* implicit */_Bool) 2563515785U)) ? (((/* implicit */int) (short)-6255)) : (((/* implicit */int) var_6))))))));
    }
}
