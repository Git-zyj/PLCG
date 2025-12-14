/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37631
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
    var_10 ^= ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
                {
                    var_11 = ((/* implicit */signed char) arr_6 [i_0] [i_2 - 3]);
                    var_12 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)22606))))), (arr_6 [(signed char)9] [i_1 + 1]))), (((/* implicit */unsigned long long int) (signed char)38))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) arr_6 [i_0] [i_1 + 1]))));
                }
                var_14 = ((max((((/* implicit */unsigned int) (short)7)), (1038797321U))) == (((/* implicit */unsigned int) ((32767) >> (((-32764) + (32776)))))));
                var_15 |= ((/* implicit */short) (-2147483647 - 1));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)35)), (((((/* implicit */_Bool) arr_6 [(unsigned short)14] [i_1 + 1])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_7 [i_0] [i_0] [i_0] [i_1 + 2])))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_6 [15U] [(unsigned short)7])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) arr_4 [i_0] [7ULL] [i_0]))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)38)) == (((/* implicit */int) (unsigned short)23906))))), (max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)41629))))))));
            }
        } 
    } 
}
