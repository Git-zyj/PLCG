/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24113
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) << (((min((((/* implicit */long long int) (signed char)45)), (var_15))) - (26LL)))))) ? (((/* implicit */int) var_9)) : (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (var_18)))))));
    var_21 = ((unsigned char) min((((/* implicit */unsigned long long int) var_4)), (min((var_8), (((/* implicit */unsigned long long int) var_11))))));
    var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (short)614)) : (-1460689460)))) ? ((~(((/* implicit */int) var_16)))) : (((/* implicit */int) var_2)))) : (((((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) var_10)))) : (((((/* implicit */int) var_4)) + (((/* implicit */int) var_12))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = (-(3922951355810867952ULL));
        var_23 = ((/* implicit */int) ((unsigned int) arr_0 [i_0] [i_0]));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-8)) ^ (((/* implicit */int) (short)-9))))) : (arr_6 [i_1])))) / (((unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_6)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4294967285U)), (((arr_6 [i_3]) >> (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_3]))))))));
                    arr_13 [i_1] = ((/* implicit */signed char) arr_12 [(short)13] [i_1]);
                }
            } 
        } 
    }
}
