/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27016
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 984950327)) ? (240U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0))))) ? ((-(9826247414898535455ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (var_3))))) * (((unsigned long long int) arr_0 [i_0] [i_0]))))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        arr_5 [i_1 - 1] = ((/* implicit */unsigned int) arr_4 [14U]);
        /* LoopSeq 2 */
        for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) ((int) ((unsigned char) 9826247414898535455ULL)));
            arr_10 [i_2] [(_Bool)1] [i_1] = ((/* implicit */short) ((9826247414898535454ULL) * (((/* implicit */unsigned long long int) var_1))));
            arr_11 [i_1] [i_2 - 1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)0))))) : ((+(17677811588500582124ULL)))));
        }
        /* vectorizable */
        for (short i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            arr_14 [i_3 + 2] [i_3] [i_3] &= ((/* implicit */unsigned int) 10269195920697320293ULL);
            arr_15 [i_1 - 1] [i_3] [i_1 + 1] = ((/* implicit */signed char) arr_8 [i_1] [i_3 + 2] [6]);
            var_19 = ((/* implicit */unsigned char) ((_Bool) var_0));
            var_20 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) == (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        }
        var_21 += ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)113)), (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 + 2] [i_1]))) - (var_7)))));
    }
}
