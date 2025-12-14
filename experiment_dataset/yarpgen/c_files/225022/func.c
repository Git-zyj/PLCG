/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225022
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(((unsigned int) (unsigned short)28066)))))));
    var_17 -= ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) ((_Bool) -2027105972))))) : (((((/* implicit */_Bool) ((short) var_14))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) 787380912U))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((((((arr_3 [i_0] [i_0]) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) >> (((arr_2 [i_0]) - (472816794U)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) arr_7 [i_2] [i_1] [i_1] [i_0]);
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [0])) ? (((((/* implicit */int) (unsigned char)22)) - (((/* implicit */int) (unsigned char)252)))) : (((/* implicit */int) arr_7 [i_0] [i_0] [6LL] [i_0])))))));
                    var_21 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) arr_3 [i_1] [i_1])))));
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned int) var_4);
        arr_12 [i_3] = ((/* implicit */unsigned char) arr_3 [i_3] [i_3 - 1]);
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) 2586449890U);
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) min(((!(arr_10 [i_4 - 1]))), ((!(((/* implicit */_Bool) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))))))))));
        var_24 = ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_14 [i_4]))))));
    }
    var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)218)) ? (10147895091973274106ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))))) >> (((((unsigned int) var_9)) - (1842U)))))) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (var_15)));
}
