/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239336
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
    var_17 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (var_3))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (148305863U)));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (!(arr_5 [i_0] [10] [i_0] [i_0])))) <= (((/* implicit */int) arr_8 [1ULL] [i_2 - 3]))))))))));
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) -860981588)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) < (((/* implicit */int) ((unsigned short) (!(var_12)))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        arr_12 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31134)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) : (5932947954251963165LL)));
        var_21 = ((/* implicit */_Bool) var_7);
        var_22 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_4 + 1] [i_4] [0ULL] [i_4])) * (((/* implicit */int) var_11))))) * (((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)21] [i_4])))))));
        var_23 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_8 [i_4 + 1] [21LL]))))));
    }
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned long long int) var_9)))))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (!(var_12)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_12)))))))))));
}
