/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1942
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((max((((/* implicit */long long int) var_4)), (-5326478843500869400LL))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_3)) + (144))) - (45)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)0))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_20 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((((/* implicit */_Bool) 2826664290U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0 + 1]))), (((/* implicit */unsigned int) arr_0 [i_0 - 1]))))), (((long long int) ((((/* implicit */_Bool) (signed char)78)) ? (4938569360667084103LL) : (((/* implicit */long long int) 3335145958U)))))));
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)231)))))))) == (((((/* implicit */_Bool) ((signed char) arr_1 [14U]))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)2046)) : (((/* implicit */int) (unsigned short)789)))) : (((/* implicit */int) arr_0 [7U]))))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_9 [i_0 + 2] [i_0 + 2] [i_1 - 3] [i_2 + 2] [i_1] = ((/* implicit */unsigned char) (~(((((((-335709127) + (2147483647))) << (((959821333U) - (959821333U))))) << ((((((~(((/* implicit */int) (unsigned short)26544)))) + (26557))) - (12)))))));
                        arr_10 [i_3 - 2] [i_2] [i_2] [i_0 - 1] &= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)224)), (((((/* implicit */int) (short)8755)) >> ((((~(-354520461))) - (354520432)))))));
                    }
                } 
            } 
        } 
        var_22 ^= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (+(arr_1 [i_0 + 2]))))) / (((/* implicit */int) (short)(-32767 - 1)))));
    }
}
