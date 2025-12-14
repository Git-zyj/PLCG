/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201324
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
    var_14 = ((/* implicit */unsigned int) var_2);
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9)))))) - ((+(((unsigned long long int) 8968450014296677394LL))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) != (arr_3 [i_0] [i_0]))))) * (935242450U)))) || ((!(((/* implicit */_Bool) min((8968450014296677413LL), (((/* implicit */long long int) var_13)))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_17 ^= ((/* implicit */signed char) max((arr_1 [i_1]), (max((((/* implicit */int) (signed char)26)), (arr_1 [i_1])))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) ((-125795042099485020LL) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))) == (((/* implicit */int) max((var_13), (arr_5 [i_0])))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 7502992092328754549LL))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [(unsigned short)16] |= ((/* implicit */long long int) ((433995445U) << (((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-91)), ((unsigned char)86)))) - (164)))));
            arr_10 [(unsigned short)14] [i_2] |= ((/* implicit */long long int) arr_2 [i_2]);
        }
    }
}
